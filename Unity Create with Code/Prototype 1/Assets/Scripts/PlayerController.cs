using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController: MonoBehaviour
{

    [SerializeField] float speed = 20.0f;
    [SerializeField] float turnSpeed = 45.0f;
    public float horizontalInput;
    public float forwardInput;


    // Update is called once per frame
    void FixedUpdate()
    {
        //gets input from player
        //horizontal = left/right arrow keys and A/D
        //forward = up/down arrow keys and W/S
        horizontalInput = Input.GetAxis("Horizontal");
        forwardInput = Input.GetAxis("Vertical");

        //move the vehicle forward
        transform.Translate(Vector3.forward * Time.deltaTime * speed * forwardInput);
        //turn vehicle
        transform.Rotate(Vector3.up * Time.deltaTime * turnSpeed * horizontalInput);
    }
}
