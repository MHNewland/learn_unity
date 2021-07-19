using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController: MonoBehaviour
{

    public float force = 5;
    private bool subAddForce;
    private float deltaSpeed = 5;

    private Rigidbody ballObjectRB;
    private GameObject golfBall;
    private GameObject ballObject;
    private GameObject focalPoint;

    // Start is called before the first frame update
    void Start()
    {
        //need to add objects for camera to follow
        ballObject = GameObject.Find("BallObject");
        golfBall = GameObject.Find("GolfBall");
        ballObjectRB = ballObject.GetComponent<Rigidbody>();
        focalPoint = GameObject.Find("FocalPoint");                          
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            if (force <= 5){
                subAddForce = true;
            }else if (force >= 25)
            {
                subAddForce = false;
            }

            if (subAddForce)
            {
                force += Time.deltaTime * deltaSpeed;
            }
            else
            {
                force -= Time.deltaTime * deltaSpeed;
            }
        }

        if (Input.GetKeyUp(KeyCode.Space)){
            ballObjectRB.AddForce(ballObjectRB.transform.forward * force, ForceMode.Impulse);
            force = 5;
        }

        //Need to get the camera to rotate with the ball as well as prevent pressing Space/rotate until ball is stopped
        transform.Rotate(0, Input.GetAxis("Horizontal"), 0);

    }

    private void LateUpdate()
    {
        focalPoint.transform.position = ballObject.transform.position;
        focalPoint.transform.rotation = new Quaternion(0.0f, ballObject.transform.rotation.y, 0.0f, 0.0f);
    }
}
