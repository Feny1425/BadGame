using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun : MonoBehaviour
{
    public GameObject fire;
    void Update()
    {
        if(!fire.active)
        fire.SetActive(true);
    }

}
