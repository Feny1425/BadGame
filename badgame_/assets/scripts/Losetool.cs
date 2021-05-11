using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Losetool : MonoBehaviour
{
    public tools tool;
    public string tool_Name;
    public GameObject toolDes;

    public void loseTool()
    {
        if (tool.toolCount(tool_Name) == 1)
        {
            toolDes = tool.ToollObject(tool_Name);
            tool.losetool(tool_Name);
            Destroy(toolDes);
        }
        else
        {
            tool.losetool(tool_Name);
        }
        
    }
}
