using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroySelf : MonoBehaviour
{
    public GameObject Object;

    private void Start()
    {
        if(Object != null)
        {
            Destroy(Object);
        }
        
    }
    public void DestroySelf()
    {
        Destroy(gameObject);
    }
}
