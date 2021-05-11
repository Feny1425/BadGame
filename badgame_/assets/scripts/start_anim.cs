using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class start_anim : MonoBehaviour
{
    public bool state = true;
    public bool started;
    public bool lose;
    public GameObject gameObjectLost;
    public Animator animator;
    public string animationName;
    public Button button;
    public GameObject buttonOBJ;
    public TextMeshProUGUI text;
    public string action_name;
    public bool shown;
    public detecte detecte;
    public bool ended = false;
    // Start is called before the first frame update
    void Start()
    {
        button.onClick.AddListener(TaskOnClick);
    }

    private void TaskOnClick()
    {
        if (shown)
        {
            detecte.setStop(true);
            detecte.setCollide(false);
            animator.SetBool(animationName, state);
            started = true;
            if (lose)
            {
                Destroy(gameObjectLost);
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (buttonOBJ == null)
        {
            if (detecte != null)
            {
                if (detecte.collide)
                {
                    detecte.setStop(true);
                    detecte.setCollide(false);
                    animator.SetBool(animationName, state);
                    started = true;
                    if (lose)
                    {
                        Destroy(gameObjectLost);
                    }
                }
            }
            else if(!ended)
            {
                animator.SetBool(animationName, state);
                started = true;
                ended = true;
                if (lose)
                {
                    Destroy(gameObjectLost);
                }
            }
        }
        else
        {


            if (detecte.collide)
            {
                buttonOBJ.SetActive(true);
                text.text = action_name;
                shown = true;
            }
            else if (shown)
            {
                buttonOBJ.SetActive(false);
                shown = false;
            }
        }




    }
}
