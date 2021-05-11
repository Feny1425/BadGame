using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class next_st : MonoBehaviour
{
    public bool opis = false;
    public GameObject st;
    public bool active;
    public bool end,after_end = false;
    public Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (st == null)
            end = true;
        if (!end)
        {
            if (opis)
            {
                active = !(GetComponent<start_anim>().started);
            }
            else
            {
                active = GetComponent<start_anim>().started;
            }
            if (after_end)
            {


                if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("idle"))
                {
                    st.SetActive(active);
                }
            }
            else
            {
                st.SetActive(active);
            }
        }
    }

}
