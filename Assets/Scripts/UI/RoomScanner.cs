using System;
using System.Collections.Generic;
using System.Linq;
using HoloToolkit.Unity;
using HoloToolkit.Unity.SpatialMapping;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using UnityEngine;

public class RoomScanner : MonoBehaviour
{
    // limit to complete scan
    private float MinAreaForComplete = 10.0f;
    private float MinPlatormAreaForComplete = 2.0f;

    // text displays
    public TextMesh DebugDisplay;
    public TextMesh targetDisplay;

    private bool isScanning;

    // variables that have information about the spatial map
    private SpatialUnderstandingDll.Imports.PlayspaceStats stats;
    private SpatialUnderstandingCustomMesh customMesh;

    private Material occlusionMat;
    private Material transparentMat;
    private Material newWireFrameMat;

    private GameObject mySky;

    void Start()
    {
        //stats = new SpatialUnderstandingDll.Imports.PlayspaceStats();
        customMesh = SpatialUnderstanding.Instance.UnderstandingCustomMesh;

        occlusionMat = new Material(Resources.Load("Graphics/Materials/BackdropOcclusion") as Material);
        transparentMat = new Material(Resources.Load("Graphics/Materials/transparent") as Material);

        newWireFrameMat = new Material(Resources.Load("Materials/newWireFrame") as Material);
        SpatialUnderstanding.Instance.ScanStateChanged += Instance_ScanStateChanged;

    }

    private void Instance_ScanStateChanged()
    {
        if ((SpatialUnderstanding.Instance.ScanState == SpatialUnderstanding.ScanStates.Done)
            && SpatialUnderstanding.Instance.AllowSpatialUnderstanding)
        {
            this.isScanning = false;

            // save world origin and prep 
            //WorldAnchorManager.Instance.AttachAnchor(this.gameObject, "worldOrigin");
            Debug.Log("scan completed, state set to 'done'");
        }
    }

    public void OnScan()
    {
        if (!this.isScanning)
        {
            this.isScanning = true;
            SpatialMappingManager.Instance.StartObserver();
            Debug.Log("started scanning: " + DateTime.Now.ToString());
            SpatialUnderstanding.Instance.RequestBeginScanning();
            SpatialMappingManager.Instance.DrawVisualMeshes = true;

            customMesh = SpatialUnderstanding.Instance.GetComponent<SpatialUnderstandingCustomMesh>();
            customMesh.DrawProcessedMesh = true;
        }
    }


    public void OnStop()
    {
        if (this.isScanning)
        {
            Debug.Log("stopped scanning: " + DateTime.Now.ToString());
            SpatialMappingManager.Instance.StopObserver();

            SpatialUnderstanding.Instance.RequestFinishScan();
            //this.gameObject.GetComponent<SurfacePlaneManager>().Initialise();

            //SpatialUnderstanding.Instance.ChangeProcessedMeshMaterial(occlusionMat);
            customMesh.MeshMaterial = occlusionMat;
            customMesh.DrawProcessedMesh = true;

            //SpatialMappingManager.Instance.SetSurfaceMaterial(occlusionMat);
            SpatialMappingManager.Instance.DrawVisualMeshes = true;
            this.isScanning = false;

            if (mySky == null)
            {
                mySky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
            }
        }
    }

    private void Save()
    {
        RoomSaver rs = gameObject.GetComponent<RoomSaver>();
        rs.SaveRoom();
    }
    

    void Update()
    {
        if (DebugDisplay != null)
        {
            DebugDisplay.text = PrimaryText;
        }

        /*
        if (ReadyForCompletion)
        {
            OnStop();
        }
        */
    }

    
    public string PrimaryText
    {
        get
        {
            // Scan state
            if (SpatialUnderstanding.Instance.AllowSpatialUnderstanding)
            {
                switch (SpatialUnderstanding.Instance.ScanState)
                {
                    case SpatialUnderstanding.ScanStates.Scanning:

                        // Get the scan stats
                        IntPtr statsPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStatsPtr();
                        if (SpatialUnderstandingDll.Imports.QueryPlayspaceStats(statsPtr) == 0)
                        {
                            return "playspace stats query failed";
                        }

                        SpatialUnderstandingDll.Imports.PlayspaceStats stats =
                            SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStats();
                        
                        // animate the scanning button
                        Renderer thisRend = GameObject.Find("sampleUI/ScanButton").GetComponent<Renderer>();
                        Vector2 myTexOffset = thisRend.material.GetTextureOffset("_MainTex");
                        float newTexOffset = myTexOffset.y - 0.01f;
                        thisRend.material.SetTextureOffset("_MainTex", new Vector2(0, newTexOffset));
                        
                        return @"Area: " + stats.TotalSurfaceArea.ToString() + " m2";

                    case SpatialUnderstanding.ScanStates.Finishing:
                        return "Finalizing scan (please wait)";

                    case SpatialUnderstanding.ScanStates.Done:
                        return "Scan complete";

                    case SpatialUnderstanding.ScanStates.ReadyToScan:
                        return "Ready to Scan";

                    default:
                        string workingMsg = @"Working, ScanState = " + SpatialUnderstanding.Instance.ScanState.ToString();
                        return workingMsg;
                }
            }
            return "Let's start by scanning the room. Tap the green button to continue";
        }
    }


    public string TargetText
    {
        get { return ""; }
        /*
        get {
            if (stats == null)
            {
                Debug.Log("stats is null");
                return "no stats";
            }

            // make new head ray based on camera pose
            Ray headRay = new Ray();
            headRay.origin = Camera.main.transform.position;
            headRay.direction = Camera.main.transform.forward;

            // perform raycast with this ray
            RaycastHit hit;
            float distance = 1;
            if (Physics.Raycast(headRay, out hit, 10.0f, Physics.AllLayers))
            {
                distance = hit.distance;
            }
            else
            {
                return "no head ray collision";
            }


            // Only allow this when we are done scanning
            if ((SpatialUnderstanding.Instance.ScanState != SpatialUnderstanding.ScanStates.Done) ||
                (!SpatialUnderstanding.Instance.AllowSpatialUnderstanding))
            {
                return "not ready";
            }

            // get pointer for surface and use understanding raycast (another one)
            IntPtr currentTargetPtr;
            currentTargetPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticRaycastResultPtr();
            var playCast = SpatialUnderstandingDll.Imports.PlayspaceRaycast(headRay.origin.x, headRay.origin.y, headRay.origin.z,
                                                                headRay.direction.x * distance, headRay.direction.y * distance, headRay.direction.z * distance,
                                                                currentTargetPtr);
            // interpret result and return surface type
            if (playCast == 0)
            {
                return "";
            }
            else
            {
                var thisRaycastRes = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticRaycastResult();
                string surfaceType = thisRaycastRes.SurfaceType.ToString();
                return surfaceType;
            }
            
        }
        */
    }

    // old code for determining required areas (all, horiz, vert) for completion
    public bool ReadyForCompletion
    {
        get
        {
            //if (SpatialUnderstanding.Instance.ScanState == SpatialUnderstanding.ScanStates.Done)
            //{
            //    return true;
            //}

            // allow only when we are scanning
            if ((SpatialUnderstanding.Instance.ScanState != SpatialUnderstanding.ScanStates.Scanning) ||
                (!SpatialUnderstanding.Instance.AllowSpatialUnderstanding))
            {
                return false;
            }

            // Query the current playspace stats
            var statsPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStatsPtr();
            if (SpatialUnderstandingDll.Imports.QueryPlayspaceStats(statsPtr) == 0)
            {
                return false;
            }

            stats = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStats();

            // Check our preset requirements
            if ((stats.TotalSurfaceArea > MinAreaForComplete) &&
                (stats.UpSurfaceArea > MinPlatormAreaForComplete))
            {
                Debug.Log("found a worthy platform, closing mesh...");
                return true;
            }
            return false;
        }
    }

}