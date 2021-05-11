using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scaler : MonoBehaviour
{
    public bool start;
    public float mSize = 0;
    public float speed = 0.1f;
    public int blendShape;
    public bool ascending;
    // Start is called before the first frame update
    void Start()
    {
        if (start)
        {
            InvokeRepeating("scale",0,0.1f / speed);
        }
    }
    public void startScaler(int blendShape, float speed,bool ascending)
    {
        done = true;
        this.ascending = ascending;
        this.speed = speed;
        this.blendShape = blendShape;
        InvokeRepeating("scale", 0, 0.1f / speed);
    }
    public int i;
    public bool done = true;
    void scale()
    {
        
        if(done)
        {
            if (ascending)
            {
                done = false;
                i = 1;
            }
            else
            {
                done = false;
               
                mSize = 99;
                i = -1;
            }
        }
       if(mSize >= 100 && ascending && !done)
        {
            CancelInvoke("scale");
        }
       else
       if (mSize <= 0 && !ascending && !done)
        {
            CancelInvoke("scale");
        }
       
        mSize = mSize + i;
        GetComponent<SkinnedMeshRenderer>().SetBlendShapeWeight(blendShape, mSize);
    }
}
