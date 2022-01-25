using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Rigidbody rb;
    public float velocityTest;
    public bool jumpTrigger = true;
    public float playerSpeed = 10.0f;
    public float rotateSpeed = 10.0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //show velocity for testing
        velocityTest = rb.velocity.y;

        //use Spacebar to jump
        //make sure player is close to a resting space
        //make sure player can't jump at penicle
        if (Input.GetKeyDown(KeyCode.Space) && 
            (rb.velocity.y > -2 && rb.velocity.y < 2) &&
            jumpTrigger)
        {
            //add velocity in the Y direction and disable jumping
            rb.velocity= new Vector3(0, 10, 0);
            jumpTrigger = false;
            Debug.Log("jump");
        }

        //make sure player can't jump at penicle
        if (rb.velocity.y < -1.75)
        {
            jumpTrigger = true;
        }

        transform.Translate(new Vector3(0,0,
            Input.GetAxis("Vertical") * Time.deltaTime * playerSpeed));
        /*0,
        Input.GetAxis("Vertical") * Time.deltaTime * playerSpeed));*/
        transform.Rotate(Vector3.up, Input.GetAxis("Horizontal"));
        
            
    }
}
