using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class action_button : MonoBehaviour
{
    public Button button;
    public GameObject buttonOBJ;
    public TextMeshProUGUI text;
    public bool shown;
    public bool clicked;
    // Start is called before the first frame update
    void Start()
    {
        button.onClick.AddListener(TaskOnClick);
    }

    private void TaskOnClick()
    {
        if (shown)
        {
            clicked = true;
        }
    }
   
    public void show(string action_name)
    {
        buttonOBJ.SetActive(true);
        text.text = action_name;
        shown = true;
    }
    public void hide()
    {
        if (shown)
        {
            buttonOBJ.SetActive(false);
            shown = false;
        }
    }    
}
