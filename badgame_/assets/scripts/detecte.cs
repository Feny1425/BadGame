using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class detecte : MonoBehaviour
{

    public Transform Detector;
    public LayerMask playerMask;
    public bool collide;
    public float between;
    public bool Enter;
    public bool stop;
    public string TAG;
    public string detected_TAG;
   
    // Update is called once per frame
    void Update()
    {

        if(!Enter && !stop )
        {
            collide = Physics.CheckSphere(Detector.position, between, playerMask);
        }

        
    }

    public void setStop(bool stop)
    {
        this.stop = stop;
    }
    public void setCollide(bool coll)
    {
        this.collide = coll;
    }

    private void OnTriggerEnter(Collider other)
    {
        detected_TAG = other.gameObject.tag;
        if (Enter && !stop)
        {
            
            if(other.gameObject.tag == TAG)
            {
                collide = true;
            }
            
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (Enter && !stop)
        {
            if (other.gameObject.tag == TAG)
            {
                collide = false;
            }
            
        }
    }

    public void done()
    {
        this.stop = false;
    }
   
}
