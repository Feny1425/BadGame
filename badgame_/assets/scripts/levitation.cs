using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class levitation : MonoBehaviour
{
    public int re = 1;
    public float speed;
    public playerMovement player;

    // Start is called before the first frame update

    public void Update()
    {
        for (int i = 0; i <= re; i++)
        {

            player.levitation(speed);
            if (i == re - 1)
            {
                gameObject.SetActive(false);
            }
        }
        

    }

}
