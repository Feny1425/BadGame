using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooting : MonoBehaviour {

    public GameObject theBullet;
    public Transform barrelEnd;
    public ParticleSystem particle,fireP;
    public int bulletSpeed;
    public float despawnTime = 3.0f;

    public bool shootAble = true;
    public float waitBeforeNextShot = 0.25f;

    public void fire()
    {
        if (shootAble)
        {
            gameObject.GetComponent<AudioSource>().Play();
            fireP.Play();
            particle.Play();
            shootAble = false;
            Shoot();
            StartCoroutine(ShootingYield());
        }
    }

    IEnumerator ShootingYield ()
    {
        yield return new WaitForSeconds (waitBeforeNextShot);
        shootAble = true;
        particle.Stop();
    }
    void Shoot ()
    {
        var bullet = Instantiate (theBullet, barrelEnd.position, barrelEnd.rotation);
        bullet.GetComponent<Rigidbody>().velocity = bullet.transform.forward * bulletSpeed;

        Destroy(bullet, despawnTime);

        
    }
   
}