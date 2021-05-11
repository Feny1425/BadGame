using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class back : MonoBehaviour
{
    
    public GameObject sitting;
    
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            sitting.SetActive(true);
        }
    }
    public void Sitting()
    {
        sitting.SetActive(true);

    }
}
