using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.SpatialMapping;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;

public class SurfacePlaneManager : MonoBehaviour {

    [Tooltip("Material to use when rendering Spatial Mapping meshes while the observer is running.")]
    public Material defaultMaterial;

    [Tooltip("Optional Material to use when rendering Spatial Mapping meshes after the observer has been stopped.")]
    public Material secondaryMaterial;

    [Tooltip("Minimum number of wall planes required to create planes.")]
    public uint minimumWalls = 1;

    // surface object collections
    private List<GameObject> myTables = new List<GameObject>();
    private List<GameObject> myWalls = new List<GameObject>();

    // flags for initialisation
    private bool meshesProcessed = false;
    private bool readyToBuild = false;

    private bool heavensPresent = false;
    public GameObject Sky;

    private void Start()
    {
        // Update surfaceObserver and storedMeshes to use the same material during scanning.
        SpatialMappingManager.Instance.SetSurfaceMaterial(defaultMaterial);

        // Register for the MakePlanesComplete event.
        SurfaceMeshesToPlanes.Instance.MakePlanesComplete += SurfaceMeshesToPlanes_MakePlanesComplete;

        Debug.Log("Surface Plane Manager Started");
    }

    public void Initialise()
    {
        readyToBuild = true;
    }


    private void Update()
    {
        // Wait for initialisation flag, then run once
        if (!meshesProcessed && readyToBuild)
        {
            if (SpatialMappingManager.Instance.IsObserverRunning())
            {
                SpatialMappingManager.Instance.StopObserver();
            }

            CreatePlanes();
            meshesProcessed = true;
            Debug.Log("planes created");
        }
    }


    /// <summary>
    /// Handler for the SurfaceMeshesToPlanes MakePlanesComplete event.
    /// </summary>
    /// <param name="source">Source of the event.</param>
    /// <param name="args">Args for the event.</param>
    private void SurfaceMeshesToPlanes_MakePlanesComplete(object source, System.EventArgs args)
    {
        myTables = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Table);
        myWalls = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Wall);

        Debug.Log(myWalls.Count + " walls found, " + myTables.Count + " tables found");

        // draw walls occluding the backdrop, including a window
        //Build_New_Walls(myWalls);
        //Debug.Log("Walls built");

        //SpatialMappingManager.Instance.SetSurfaceMaterial(secondaryMaterial);

        // put in the heavens
        if (!heavensPresent)
        {
            Sky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
            Sky.transform.parent = this.gameObject.transform;
            Sky.name = "SkyPrefab";
            heavensPresent = true;
            Debug.Log("Heavens placed");
        }
    }

    

    /// <summary>
    /// Creates planes from the spatial mapping surfaces.
    /// </summary>
    private void CreatePlanes()
    {
        // Generate planes based on the spatial map.
        SurfaceMeshesToPlanes surfaceToPlanes = SurfaceMeshesToPlanes.Instance;
        if (surfaceToPlanes != null && surfaceToPlanes.enabled)
        {
            surfaceToPlanes.MakePlanes();
        }
    }

    /// <summary>
    /// Removes triangles from the spatial mapping surfaces.
    /// </summary>
    /// <param name="boundingObjects"></param>
    private void RemoveVertices(IEnumerable<GameObject> boundingObjects)
    {
        RemoveSurfaceVertices removeVerts = RemoveSurfaceVertices.Instance;
        if (removeVerts != null && removeVerts.enabled)
        {
            removeVerts.RemoveSurfaceVerticesWithinBounds(boundingObjects);
        }
    }


    private void Build_New_Walls(List<GameObject> vertical)
    {
        float maxPlaneSize = 0;
        int bigWallIndex = 0;

        foreach (GameObject p in vertical)
        {
            float _area = p.transform.localScale.x * p.transform.localScale.y;
            if (_area > maxPlaneSize)
            {
                maxPlaneSize = _area;
                bigWallIndex = vertical.IndexOf(p);
            }
        }

        Debug.Log(vertical.Count + " walls found. The largest identified at index " + bigWallIndex + 
            " with area: " + maxPlaneSize.ToString() + "m2");

        GameObject largestWall = vertical[bigWallIndex];

        GameObject daWall = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Wall).Find(a => a.gameObject == largestWall);
        daWall.GetComponent<MeshRenderer>().material = new Material(Resources.Load("Graphics/Materials/transparent") as Material);
        
        

        GameObject myWindow = Instantiate(Resources.Load("Prefabs/WindowInWall") as GameObject);
        myWindow.transform.position = largestWall.transform.position;
        myWindow.transform.rotation = largestWall.transform.rotation * Quaternion.Euler(0f, 0f, 90f);

        Vector3 wallScale = largestWall.transform.localScale;
        myWindow.transform.localScale = new Vector3(wallScale.x/2, wallScale.y/2, myWindow.transform.localScale.z);

        Debug.Log("window placed. " +
                        "\n POS: " + myWindow.transform.position +
                        "\n ROT: " + myWindow.transform.rotation +
                        "\n SCL: " + myWindow.transform.localScale);

        Debug.Log("wall material set to " + daWall.GetComponent<MeshRenderer>().material.name);

        List<GameObject> ObjectsToRemove = new List<GameObject> { largestWall };
        RemoveVertices(ObjectsToRemove);

        RemoveVertices(SurfaceMeshesToPlanes.Instance.ActivePlanes);

        /*
        // build new walls
        if (vertical.Count >= minimumWalls)
        {
            for (int x = 0; x < vertical.Count; x++)
            {
                if (x != bigWallIndex)
                {

                    float angularDist = Mathf.Rad2Deg * (2 * Mathf.Acos(Quaternion.Dot(vertical[x].transform.rotation, largestWall.transform.rotation)));
                    float euclidDist = (vertical[x].transform.position - largestWall.transform.position).magnitude;

                    /* 
                    Debug.Log("new wall is " + euclidDist + " away " +
                        "\n angularly displaced by " + angularDist.ToString() + " degrees");

                    Debug.Log("newWall sugg. loc. \n POS: " + vertical[x].transform.position +
                        "\n ROT: " + vertical[x].transform.rotation +
                        "\n SCL: " + vertical[x].transform.localScale);
                    

                    // condition to remove duplicate walls 
                    if (angularDist < 10f && euclidDist < 0.75)
                    {
                        Debug.Log("skipping similar plane (index: " + x + ")");
                        continue;
                    }

                    GameObject newWall = Instantiate(Resources.Load("Prefabs/WallBasic") as GameObject);

                    newWall.transform.position = vertical[x].transform.position;
                    newWall.transform.rotation = vertical[x].transform.rotation;
                    newWall.transform.localScale = vertical[x].transform.localScale;
                }
                else
                {
                    Debug.Log("skipping window_Wall (index: " + x + ")");
                }
            }

        }
        */

    }




    private bool isSkyReady()
    {
        if (GameObject.Find("Holograms/SkyPrefab") == null)
        {
            return false;
        }
        Sky = GameObject.Find("Holograms/SkyPrefab") as GameObject;

        return true;
    }


    public void Load_Sky_Material(string category, string itemName)
    {
        if (!isSkyReady()) { return; }

        MeshRenderer globeMesh = Sky.GetComponent<MeshRenderer>();
        string fullMatPath = "Graphics/Sprites/SpacePics/" + category + "/Materials/Panoramic/" + itemName;
        Debug.Log("loading sky material: " + fullMatPath);

        Material targetMaterial = new Material(Resources.Load(fullMatPath) as Material);
        globeMesh.material = targetMaterial;
    }

    /// <summary>
    /// Called when the GameObject is unloaded.
    /// </summary>
    private void OnDestroy()
    {
        if (SurfaceMeshesToPlanes.Instance != null)
        {
            SurfaceMeshesToPlanes.Instance.MakePlanesComplete -= SurfaceMeshesToPlanes_MakePlanesComplete;
        }
    }




}
