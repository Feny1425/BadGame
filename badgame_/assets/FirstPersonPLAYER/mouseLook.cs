using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class mouseLook : MonoBehaviour
{
    [Header("Values")]
    public float y = 0;
    public float RotationSpeedHorizontal = 10;
    public float RotationSpeedVirtical = 10;
    public float minRotateCam = -60;
    public float maxRotateCam = 60;
    public Joystick Movement;
    private float xRotation = 0.0f;
    public bool Bmoved;
    private float yRotation = 0.0f;
    [Header("GameObjects")]
    public Transform playerBody;
    public FixedTouchField2 touchField;
    public playerMovement movement;
    public Vector2 moved = new Vector2(100000, 100000);
    public Graphics graphics;
    Vector2 look = Vector2.zero;
   
    void Start()
    {
        graphics = GameObject.FindGameObjectWithTag("options").GetComponent<Graphics>();
    }
    float Z;
    // Update is called once per frame
    void Update()
    {

        graphics.updateSin();

        RotationSpeedHorizontal = saveGPS.HoriSanti;


        RotationSpeedVirtical = saveGPS.VirtiSanti;


        look = touchField.TouchDist;

        float z = look.y;
        float x = look.x;


        if (touchField.Pressed)
        {
            Jimp(false);
        }
        else
        {
            Jimp(true);
        }

        float mouseX = x * RotationSpeedHorizontal;
        float mouseY = z * RotationSpeedVirtical * Time.deltaTime;

        if (x < 0.1 && x > -0.1)
        {
            mouseX = 0;
        }
        if (x == 1 || x == -1)
        {
            mouseX *= 2;
        }
        if (z < 0.1 && z > -0.1)
        {
            mouseY = 0;

        }
        yRotation -= mouseY;
        yRotation = Mathf.Clamp(yRotation, minRotateCam, maxRotateCam);

        transform.localRotation = Quaternion.Euler(yRotation, 0, 0);
        playerBody.Rotate(Vector3.up * mouseX * Time.deltaTime);
    }

  

    public void Jimp(bool jump)
    {
        if (!jump)
        {
            
            if (!Bmoved)
                moved = touchField.PointerOld;
            Bmoved = true;
        }

        if(jump)
        {
            
            movement.Jump(!V3Equal(touchField.PointerOld, moved));

            moved = new Vector2(100000, 100000);
            Bmoved = false;
        }
        
    }
    public bool V3Equal(Vector3 a, Vector3 b)
    {
        return Vector3.SqrMagnitude(a - b) < 50;
    }
}