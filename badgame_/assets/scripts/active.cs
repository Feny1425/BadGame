using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class active : MonoBehaviour
{
    public GameObject Object;
    public detecte detecte;
    public bool stopDetect;
    // Start is called before the first frame update
    void Start()
    {
        if(detecte == null)
        {
            Object.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (detecte != null && detecte.collide)
        {
            Object.SetActive(true);
            detecte.setStop(stopDetect);
            detecte.collide = false;
        }
    }
}
