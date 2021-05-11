using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class tools : MonoBehaviour
{
    public List<TextMeshProUGUI> Tools = new List<TextMeshProUGUI>();
    public GameObject[] slots;
    public List<GameObject> tool = new List<GameObject>();
    public List<string> toolName;

   
    public void addtool(string tool_name, GameObject tool)
    {
        for(int i = 0;i < Tools.Count; i++)
        {
            if (Tools[i].text == tool_name)
            {
                Tools[i].text = tool_name + " x2";
                break;
            }
            else if(Tools[i].text.Contains(tool_name + " x"))
            {
                int u = int.Parse(Tools[toolName.IndexOf(tool_name)].text.Replace(tool_name + " x", ""));
                Tools[i].text = tool_name + " x" + (u + 1);
                break;
            }
            else if (Tools[i].text == "")
            {
                this.tool.Add(tool);
                Tools[i].text = tool_name;
                toolName.Add(tool_name);
                break;
            }
        }
    }
    public void addtool(string tool_name)
    {
        for (int i = 0; i < Tools.Count; i++)
        {
            if (Tools[i].text == tool_name)
            {
                Tools[i].text = tool_name + " x2";
                break;
            }
            else if (Tools[i].text.Contains(tool_name + " x"))
            {
                int u = int.Parse(Tools[toolName.IndexOf(tool_name)].text.Replace(tool_name + " x", ""));
                Tools[i].text = tool_name + " x" + (u + 1);
                break;
            }
            
        }
    }
    public void losetool(string tool_name)
    {
        if (Tools[toolName.IndexOf(tool_name)].text.Contains(tool_name + " x"))
        {
            int i = int.Parse(Tools[toolName.IndexOf(tool_name)].text.Replace(tool_name + " x", ""));
            if(i > 2)
            {
                Tools[toolName.IndexOf(tool_name)].text = tool_name + " x" + (i - 1);

            }
            else
            {
                Tools[toolName.IndexOf(tool_name)].text = tool_name;

            }
        }
        else 
        {
            this.tool.Remove(tool[toolName.IndexOf(tool_name)]);
            toolName.Remove(tool_name);
            check();

        }

    }

    private void check()
    {
        for(int i = 0; i< slots.Length; i++)
        {
            if(toolName.Count > i)
            {
                Tools[i].text = toolName[i];
            }
            else
            {
                Tools[i].text = "";

            }
        }
    }
    public bool ToolObject(string tool_name)
    {
        return toolName.Contains(tool_name);
    }
    public GameObject ToollObject(string tool_name)
    {
        return tool[toolName.IndexOf(tool_name)];
    }
    public GameObject ToolObjectWithNum(int num)
    {
        return tool[num];
    }
    public int toolCount(string tool_name)
    {
        if (Tools[toolName.IndexOf(tool_name)].text.Contains(tool_name + " x"))
        {
            int i = int.Parse(Tools[toolName.IndexOf(tool_name)].text.Replace(tool_name + " x", ""));
            return i;
        }
        else 
        {
            return 1;

        }
    }
}
