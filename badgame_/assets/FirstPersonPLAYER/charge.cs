using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class charge : MonoBehaviour
{
    public GameObject need;
    public GameObject spot;
    public Material[] materials;
    public GameObject[] charges;
    public Light light;
    public float battery = 100,time = 1;
    public bool lost = false;
    public AudioSource audio;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        lostBattrey();
        getBattery();
        
        light.range = battery;
    }
    public void startlost()
    {
        audio.Play();
        if(battery == 0)
        {
            need.SetActive(true);
            
        }
        else
        {
            spot.SetActive(true);
        }
        
        
        lost = true;
        StartCoroutine(lostCharge());
        StopCoroutine(getCharge());
        Debug.Log("lostCharge");
    }
    public void stoplost()
    {
        need.SetActive(false);
        audio.Play();
        spot.SetActive(false);
        lost = false;
        StartCoroutine(getCharge());
        StopCoroutine(lostCharge());
        Debug.Log("getCharge");

    }
    IEnumerator lostCharge()
    {
        yield return new WaitForSeconds(2.5f);
        if (lost)
        {
            if (battery != 0)
            {
                battery -= 2.5f;
                StartCoroutine(lostCharge());
            }
            else
            {
                StopCoroutine(lostCharge());

                spot.SetActive(false);
            }

        }



    }
    IEnumerator getCharge()
    {
        yield return new WaitForSeconds(1);
        if (battery != 100 && !lost)
        {
            battery += 2.5f;
            StartCoroutine(getCharge());
        }
        else
        {
            StopCoroutine(getCharge());

        }
        

    }

    public void getBattery()
    {
        if (!lost)
        {
            if (battery == 100)
            {
                charges[0].GetComponent<Renderer>().material = materials[1];

            }
            else if (battery > 74 )
            {
                charges[1].GetComponent<Renderer>().material = materials[1];

            }
            else if (battery > 49 )
            {
                charges[2].GetComponent<Renderer>().material = materials[1];

            }
            else if (battery > 24 )
            {

                charges[3].GetComponent<Renderer>().material = materials[1];

            }
            
        }
    }

    public void lostBattrey()
    {
        if (lost)
        {
            if (battery > 49 && battery < 75)
            {
                charges[0].GetComponent<Renderer>().material = materials[0];

            }
            else if (battery > 24 && battery < 50)
            {
                charges[1].GetComponent<Renderer>().material = materials[0];

            }
            else if (battery > 0 && battery < 25)
            {
                charges[2].GetComponent<Renderer>().material = materials[0];

            }
            else if (battery == 0 )
            {
                charges[3].GetComponent<Renderer>().material = materials[0];
                need.SetActive(true);
            }
        }
    }
}
