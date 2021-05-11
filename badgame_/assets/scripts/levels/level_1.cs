using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class level_1 : MonoBehaviour
{
    public GameObject missionText;
    public GameObject flashlight;
    public GameObject button;
    
    // Start is called before the first frame update
    void Start()
    {
        missionText.SetActive(true);
        missionText.GetComponent<TextMeshProUGUI>().text = "find way to open the door";
        flashlight.SetActive(false);
        button.SetActive(false);

    }
   

}
