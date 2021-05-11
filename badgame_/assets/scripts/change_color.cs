using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class change_color : MonoBehaviour
{
    public string[] hex_colors;
    
    public Color change(int color_num)
    {
        Color color;
        ColorUtility.TryParseHtmlString(hex_colors[color_num - 1], out color);
        return color;
    }
    public void changewithbool(bool onetwo)
    {
        if(hex_colors.Length == 2)
        {
            if (onetwo)
            {
                gameObject.GetComponent<Image>().color = change(1);
               
            }
            else
            {
                gameObject.GetComponent<Image>().color = change(2);
            }
        }
    }
}
