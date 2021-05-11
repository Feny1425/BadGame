using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class playerMovement : MonoBehaviour
{
    [Header("Values")]
    public float Speed = 12;
    public float Gravity = -19.62f;
    public float GroundDistance = 0.4f;
    public bool isGrounded,elevatorgrounded,isTouchingFloor;
    public bool moveforward;
    public float jumpForce = 2;
    public bool jump,upsideDown,startJumping;
    public bool groundmove, moveB, sound = true;
    [Header("Scripts")]
    public CharacterController controller;
    [Header("Vector")]
    Vector3 move;
    Vector3 velocity;
    [Header("GameObjects")]
    public Transform GroundCheck,RoofCheck;
    public LayerMask groundMask;
    public Joystick variableJoystick;
    public GameObject flash;
    public AudioSource audio,audiofall,jumpsound;
    [Header("touch")]
    public Touch touch;
    // Start is called before the first frame update
    void Start()
    {


        gameObject.GetComponent<CharacterController>().enabled = false;
        if (PlayerPrefs.HasKey("playerPX"))
        {
            Vector3 pos = new Vector3(PlayerPrefs.GetFloat("playerPX", -615.27f), PlayerPrefs.GetFloat("playerPY", 4f), PlayerPrefs.GetFloat("playerPZ", -31.13f));

            transform.Rotate(new Vector3(0, PlayerPrefs.GetFloat("rotate",0), 0));
            transform.position = pos;
            Debug.Log(pos);

        }
    }

    // Update is called once per frame
    void Update()
    {
        if(Gravity < 0)
        {
            upsideDown = false;
        }
        if(Gravity > 0)
        {
            upsideDown = true;
        }
        /*        Debug.Log("x : " + PlayerPrefs.GetFloat("playerPX") + " | y : " + PlayerPrefs.GetFloat("playerPY") + " | z : " + PlayerPrefs.GetFloat("playerPZ"));
        */
        gameObject.GetComponent<CharacterController>().enabled = true;

        isGrounded = Physics.CheckSphere(GroundCheck.position, GroundDistance, groundMask);
        isTouchingFloor = Physics.CheckSphere(RoofCheck.position, GroundDistance, groundMask);
       
        if (isGrounded && velocity.y < 0 && !upsideDown)
        {
            velocity.y = -2f;

        }
        if (isTouchingFloor && velocity.y > 0 && upsideDown)
        {
            velocity.y = 2f;

        }

        

        if (!isGrounded)
        {
            audio.Stop();
            sound = true;
            jump = true;
        }
        if(jump && isGrounded)
        {
            audiofall.Play();
            jump = false;
        }
        if (isGrounded && moveB && sound)
        {
            audio.Play();
            sound = false;
        }
       

        float x = variableJoystick.Horizontal + Input.GetAxis("Horizontal");
        float z = variableJoystick.Vertical + Input.GetAxis("Vertical");

        if (moveforward)
        {
            move = transform.right * x + transform.forward* z;
            controller.Move(move * Speed * Time.deltaTime);
        }

        


        velocity.y += (Gravity * Time.deltaTime);
        controller.Move(velocity * Time.deltaTime);

        if(x < 0.1 && x > -0.1 && z < 0.1 && z > -0.1)
        {
            if (moveB)
            {
                audio.Stop();
                sound = true;
            }
            moveforward = false;
            moveB = false;

        }
        else
        {
            moveB = true;
            moveforward = true;
           
        }

    }

  
    public void Jump(bool _moved)
    {
        
        if (isGrounded)
        {
            
            if (!_moved) // Only jump if we didnt move
                {
                
                jumpsound.Play();
                if (upsideDown)
                    velocity.y = -10;
                else
                    velocity.y = Mathf.Sqrt(jumpForce * -2 * Gravity);

            } 
        }
        if (isTouchingFloor && upsideDown) //jump upside down \
        {

            if (!_moved) // Only jump if we didnt move
            {

                jumpsound.Play();
                

            }
        }

    }
    public void respawn(Vector3 spawner)
    {
        transform.position = spawner;
    }

    public void changeGravity(float gravity)
    {
        if(gravity == 0)
        {
            Gravity = -19.62f ;
            jumpForce = 2;
            Speed = 12;
        }
        else
        {
            Gravity = -19.62f * gravity;
            jumpForce = 2 / (gravity + gravity * 0.5f);
            Speed = 12 * gravity;
        }
    }
    public void upsideDownGravity()
    {
            Gravity = Gravity * -1;
    }
    public void speedChange(float speed)
    {
        Speed = speed;
    }
    public void levitation(float speed)
    {
            velocity.y = speed;
    }
}
