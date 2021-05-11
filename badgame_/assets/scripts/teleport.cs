using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class teleport : MonoBehaviour
{
    public GameObject Object;
    public Transform targetTrans;
    public Vector3 teleportPos;
    public Vector3 Rotate;
    public string TAG;
    public bool killed;
    public GameObject die;

    private void Start()
    {
        targetTrans.position = teleportPos;
    }


    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == TAG)
        {
            if (TAG == "Player")
            {
                Object.GetComponent<CharacterController>().enabled = false;

            }
            Object.transform.position = targetTrans.position;
            Object.transform.localRotation = Quaternion.Euler(Rotate);
            if (TAG == "Player" && !killed)
            {
                Object.GetComponent<CharacterController>().enabled = true;
            }
            if (killed)
            {
                die.SetActive(true);
            }
        }
    }
   
}
