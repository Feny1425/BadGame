using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class addtool : MonoBehaviour
{
    public detecte detecte;
    public GameObject tool_collictor;
    public GameObject toolObject;
    public tools tools;
    public string tool_name;
    public bool add,detecteToAdd,added;
    public float X, Y, Z;
    public float XR, YR, ZR;
    
    
    private void Start()
    {
        if (add)
        {
            Addtool();
        }
    }
    private void Update()
    {
        if (detecteToAdd&&!added && detecte.enabled)
        {
            if (detecte.collide)
            {
                GetComponent<action_button>().show("take");
            }
            else
            {
                GetComponent<action_button>().hide();
            }
        }
        else if (detecte.collide && added && detecte.enabled)
        {
            GetComponent<action_button>().hide();
        }
        if (GetComponent<action_button>().clicked)
        {
            added = true;
            GetComponent<action_button>().hide();
            GetComponent<action_button>().clicked = false;
            GetComponent<action_button>().enabled = false;
            Addtool();
           
        }
    }

   



    public void Addtool()
    {
        if (tools.ToolObject(tool_name))
        {
            tools.addtool(tool_name);
            Destroy(toolObject);
        }
        else
        {
            var tool = toolObject;
            Vector3 pos = new Vector3(X, Y, Z); //tool.transform.position;
            Vector3 rot = new Vector3(XR, YR, ZR);

            tool.transform.parent = tool_collictor.transform;
            tool.transform.localPosition = pos;
            tool.transform.localEulerAngles = rot;
            tool.transform.localScale = Vector3.one;
            tool.layer = 11;
            foreach (Transform child in tool.GetComponentsInChildren<Transform>(true))
            {
                child.gameObject.layer = LayerMask.NameToLayer("fuse");  // add any layer you want. 
            }
            tools.addtool(tool_name, tool);

        }


    }
}
