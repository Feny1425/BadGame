using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gravity_controll : MonoBehaviour
{
    public playerMovement player;
    public float gravity = 0;
    // Start is called before the first frame update
    void Start()
    {
        player.changeGravity(gravity);
    }

}
