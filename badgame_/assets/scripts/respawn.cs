using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class respawn : MonoBehaviour
{
    public detecte detecte;
    public Transform spawn;
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(detecte != null)
        {
            if (detecte.collide)
            {
                if(player.GetComponent<playerMovement>()!= null)
                    player.GetComponent<playerMovement>().enabled = false;
                player.transform.position = spawn.position;
                if (player.GetComponent<playerMovement>() != null)
                    player.GetComponent<playerMovement>().enabled = true;
            }
        }
        else
        {
            if (player.GetComponent<playerMovement>() != null)
                player.GetComponent<playerMovement>().enabled = false;
            player.transform.position = spawn.position;
            if (player.GetComponent<playerMovement>() != null)
                player.GetComponent<playerMovement>().enabled = true;
        }
    }
}
