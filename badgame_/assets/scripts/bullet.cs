using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

public class bullet : MonoBehaviour
{
    private ContactPoint coll;
    public GameObject bulletHole;
    private void OnCollisionEnter(Collision collision)
    {
        
            coll = collision.contacts[0];

            var bullet_mark_handler = Instantiate(bulletHole, coll.point, Quaternion.LookRotation(coll.normal));
            bullet_mark_handler.transform.Rotate(Vector3.right * 90);
            bullet_mark_handler.transform.Translate(Vector3.up * 0.005f);
            Destroy(bullet_mark_handler, 10);
            Destroy(gameObject, 0.000000001f);

        
    }
}
