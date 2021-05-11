using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class openDoor : MonoBehaviour
{
    public Animator animator;
    public float delayS;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(delay());
    }

   IEnumerator delay()
    {
        yield return new WaitForSeconds(delayS);
        animator.SetBool("open", true);

    }
}
