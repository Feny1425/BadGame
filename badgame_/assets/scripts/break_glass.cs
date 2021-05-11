using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class break_glass : MonoBehaviour
{
    public Animator animator;
    public GameObject brokenglass,glass,but;
    public detecte detecte;
    public GameObject buttonOBJ;
    public Button button;
    public TextMeshProUGUI text;
    bool shown;
    // Start is called before the first frame update
    void Start()
    {
        button.onClick.AddListener(TaskOnClick);

    }

    // Update is called once per frame
    void Update()
    {

        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("attack"))
        {
            animator.SetBool("attack", false);
            Destroy(glass);
            brokenglass.SetActive(true);
            shown = false;
            detecte.setStop(true);
            detecte.collide = false;
            detecte.enabled = false;
            buttonOBJ.SetActive(false);
        }

        if (detecte.collide)
        {
            buttonOBJ.SetActive(true);
            text.text = "break";
            shown = true;
        }
        else if(shown)
        {
            buttonOBJ.SetActive(false);
            shown = false;
        }
    }
    public void TaskOnClick()
    {
        if(shown)
        Attack();
    }
    public void Attack()
    {
        animator.SetBool("attack", true);
        but.GetComponent<detecte>().enabled = true;
    }
}
