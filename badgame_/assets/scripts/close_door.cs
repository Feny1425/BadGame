using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class close_door : MonoBehaviour
{
    public detecte detecte;
    public Animator animator;
    public AudioSource audio;
    public doorNeedKey NeedKey;
    public TextMeshProUGUI mission;

    // Update is called once per frame
    void Update()
    {
        if (detecte.collide)
        {
            mission.text = "find the way to fix the elevator ";
            animator.SetBool("open", false);
            audio.Play();
            NeedKey.enabled = true;
            Destroy(gameObject);
        }
    }
}
