using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class achivment : MonoBehaviour
{
    public string ID;
    
    public bool steps;
    public int steps1;
    // Start is called before the first frame update
    void Start()
    {
        if (!steps)
            MyGameServices.unlock(ID);
        else
            MyGameServices.stepsAchievement(ID, steps1);
    }

}
