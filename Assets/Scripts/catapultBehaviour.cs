using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class catapultBehaviour : MonoBehaviour
{
    public GameObject ReleasePoint;
    public float ProjectileLifetime;

    private GameObject currentProjectile;
    private long projectileBirthTick = 0;
    private long lifeTimeInTicks = 0;

    void Start()
    {
        lifeTimeInTicks = ((int)(ProjectileLifetime * 100)) * 100000;

        currentProjectile = GameObject.FindGameObjectWithTag("Respawn");
        if (currentProjectile != null)
        {
            projectileBirthTick = DateTime.UtcNow.Ticks;
        }
        ReloadCatapult();
    }


    private void CreateProjectile()
    {
        currentProjectile = Instantiate(Resources.Load("Prefabs/projectile") as GameObject, ReleasePoint.transform);
        currentProjectile.GetComponent<Rigidbody>().useGravity = false;
        projectileBirthTick = DateTime.UtcNow.Ticks;

        SolverHandler mySH = currentProjectile.AddComponent<SolverHandler>();
        mySH.TrackedTargetType = Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType.CustomOverride;
        mySH.TransformOverride = ReleasePoint.transform;

        currentProjectile.GetComponent<InBetween>().Lifetime = 0;
        currentProjectile.GetComponent<InBetween>().PartwayOffset = 0;
        currentProjectile.GetComponent<InBetween>().enabled = true;
        currentProjectile.GetComponent<InBetween>().SecondTransformOverride = ReleasePoint.transform;
    }


    public void ReloadCatapult()
    {
        if (currentProjectile == null)
        {
            CreateProjectile();
            
        }
        else if (DateTime.UtcNow.Ticks - projectileBirthTick > lifeTimeInTicks)
        {
            Destroy(currentProjectile);
            currentProjectile = null;
            CreateProjectile();
        }
        
    }
}
