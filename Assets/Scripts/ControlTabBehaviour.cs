using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlTabBehaviour : MonoBehaviour
{
    public bool controlsOpen = false;

    private float canvXScale;
    private float currentTabXPos;
    private GameObject controlTab;

    // Start is called before the first frame update
    void Start()
    {
        controlTab = GameObject.FindGameObjectWithTag("controlTab");
        canvXScale = GameObject.Find("Canvas").GetComponent<RectTransform>().localScale.x;
        currentTabXPos = -140f * canvXScale;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ToggleMenu()
    {
        controlsOpen = !controlsOpen;
        currentTabXPos *= -1f;
        Vector3 goPos = controlTab.gameObject.transform.position;
        Vector3 targetPos = new Vector3(currentTabXPos, goPos.y, goPos.z);
        StartCoroutine(MoveControlTab(controlTab, goPos, targetPos, 250f));
    }

    private IEnumerator MoveControlTab(GameObject thisGameObject, Vector3 startPos, Vector3 endPos, float speed)
    {
        float rate = 1.0f / Vector3.Distance(startPos, endPos) * speed;
        float t = 0.0f;
        while (t < 1.0)
        {
            t += Time.deltaTime * rate * 3;
            thisGameObject.transform.position = Vector3.Lerp(startPos, endPos, Mathf.SmoothStep(0.0f, 1.0f, t));
            yield return null;
        }
    }
}
