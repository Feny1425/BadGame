using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnPlayer : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.HasKey("playerPX") 
            && PlayerPrefs.HasKey("playerPY")
            && PlayerPrefs.HasKey("playerPZ"))
        {
            Vector3 load =(new Vector3(PlayerPrefs.GetFloat("playerPX"), PlayerPrefs.GetFloat("playerPY"), PlayerPrefs.GetFloat("playerPZ")));
            transform.position = load;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
