using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class upside_down : MonoBehaviour
{
    public playerMovement movement;
    public GameObject body;
    public mouseLook look;
    public bool done;
    public detecte detecte;
    public bool x, y, z,grvityUD;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (detecte.collide)
        {


            if (movement.jump && !done)
            {
                if(y)
                    StartCoroutine(Rotate(Vector3.forward,180,1));
                if (x)
                    StartCoroutine(Rotate(Vector3.down, 180, 1));
                if (z)
                    StartCoroutine(Rotate(Vector3.right, 180, 1));

                if(grvityUD)
                movement.upsideDownGravity();
                done = true;
            }
            if (!movement.jump && done)
            {
                done = false;
            }
        }
    }

    IEnumerator Rotate(Vector3 axis,float angle,float duration = 1f)
    {
        Quaternion from = body.transform.rotation;
        Quaternion to = body.transform.rotation;

        to *= Quaternion.Euler(axis * angle);

        float elapsed = 0;

        while (elapsed < duration)
        {
            body.transform.rotation = Quaternion.Slerp(from, to, elapsed / duration);
            elapsed += Time.deltaTime;
            yield return null;
        }
        body.transform.rotation = to;
        
    }
}
