using UnityEngine;

public class SkyHook : MonoBehaviour {
    public GameObject CurrentSky { get; set; }

    // Use this for initialization
    void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public bool IsSkyReady()
    {
        if (GameObject.Find("Holograms/SkyPrefab") == null)
        {
            CurrentSky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
            return true;
        }
        CurrentSky = GameObject.Find("SkyPrefab") as GameObject;

        return true;
    }

    public void LoadSkyMat(string category, string itemName)
    {
        if (!IsSkyReady()) { return; }

        MeshRenderer globeMesh = CurrentSky.GetComponent<MeshRenderer>();
        string fullMatPath = "Graphics/Sprites/SpacePics/" + category + "/Materials/Panoramic/" + itemName;
        Debug.Log("loading sky material: " + fullMatPath);

        Material targetMaterial = new Material(Resources.Load(fullMatPath) as Material);
        globeMesh.material = targetMaterial;
    }



}
