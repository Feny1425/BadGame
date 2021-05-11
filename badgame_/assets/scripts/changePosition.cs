using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changePosition : MonoBehaviour
{
    public float x;
    public float y;
    public float z;
    public void X(float x)
    {
        this.x = x;
    }
    public void Y(float y)
    {
        this.y = y;
    }
    public void Z(float z)
    {
        this.z = z;
    }
    public void pos()
    {
        Vector3 position = new Vector3(x, y, z);
        gameObject.transform.position = position;
    }
}
