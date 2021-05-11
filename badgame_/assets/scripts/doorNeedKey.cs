using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class doorNeedKey : MonoBehaviour
{
    public detecte detecte;
    public TextMeshProUGUI text;
    public GameObject textObject;
    public GameObject keyObject;
    public Animator animator;
    public Losetool Losetool;
    public string req;
    public string TAG;
    public bool opend;
    public tools tool;
    // Update is called once per frame
    private void Start()
    {
        keyObject = GameObject.FindGameObjectWithTag(TAG);
    }
    void Update()
    {
        
        if (detecte.collide)
        {
            if (detecte.detected_TAG == TAG)
            {
                tool.losetool("key");
                text.text = "";
                
                animator.SetBool("open", true);
                opend = true;
                Losetool.loseTool();
            }
            else if (!opend)
            {
                textObject.SetActive(true);
                text.text = req;
            }
            
        }
        else
        {
            textObject.SetActive(false);
            text.text = "";
        }
    }
}
