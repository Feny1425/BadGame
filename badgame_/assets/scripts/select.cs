using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class select : MonoBehaviour
{
    
    public tools tools;
    public int selectSlot;

    private void Update()
    {
        for (int u = 0; u < tools.tool.Count; u++)
        {
            if (u == selectSlot)
            {
                tools.ToolObjectWithNum(u).SetActive(true);
            }
            else
            {
                tools.ToolObjectWithNum(u).SetActive(false);
            }
        }
    }
    public void selected(int i)
    {
        selectSlot = i;
        gameObject.transform.position = tools.slots[i].transform.position;
        for(int u = 0; u < tools.tool.Count; u++)
        {
            if(u == i)
            {
                tools.ToolObjectWithNum(u).SetActive(true);
            }
            else
            {
                tools.ToolObjectWithNum(u).SetActive(false);
            }
        }
    }
}
