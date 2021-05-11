using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class flash_button : MonoBehaviour
{
    
    public change_color color;
    int green = 1,red = 2;
    public bool activeBool = false;
    public charge charge;
    
    public void activated()
    {
        if (activeBool)
        {
            activeBool = false;
            charge.stoplost();
            GetComponent<Image>().color = color.change(2);
            
        }
        else
        {
            activeBool = true;
            charge.startlost();
            GetComponent<Image>().color = color.change(1);
            
        }
    }
}
