using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class put_hammer : MonoBehaviour
{
    public Losetool losetool;
    public detecte detecte;
    public GameObject objput;
    public scaler scaler;
    // Update is called once per frame
    void Update()
    {
        if (detecte.collide)
        {
            GetComponent<action_button>().show("put");
        }
        else
        {
            GetComponent<action_button>().hide();
        }
        if (GetComponent<action_button>().clicked)
        {
            GetComponent<action_button>().hide();
            GetComponent<action_button>().clicked = false;
            GetComponent<action_button>().enabled = false;
            scaler.startScaler(1, 4f,true);
            objput.SetActive(true);
            losetool.loseTool();
            detecte.setStop(true);
            GetComponent<put_hammer>().enabled = false;

        }
    }
}
