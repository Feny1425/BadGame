using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class takeLight : MonoBehaviour
{
    public GameObject flash, flashbutton,ach;
    public detecte detecte;
    public GameObject buttonOBJ;
    public Button button;
    public TextMeshProUGUI text;

    private void Start()
    {
        button.onClick.AddListener(TaskOnClick);
        
    }
    private void Update()
    {
        if (detecte.collide)
        {
            buttonOBJ.SetActive(true);
            text.text = "take";
        }
        else
        {
            buttonOBJ.SetActive(false);
        }
    }

    public void TaskOnClick()
    {
        ach.SetActive(true);
        flash.SetActive(true);
        flashbutton.SetActive(true);
        buttonOBJ.SetActive(false);
        MyGameServices.unlock("CgkI3NCKuLMNEAIQAQ");
        Destroy(gameObject);
    }
}
        

