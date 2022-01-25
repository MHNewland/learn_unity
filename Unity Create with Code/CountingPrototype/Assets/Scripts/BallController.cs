using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController: MonoBehaviour
{

    private float force = 5;
    private bool subAddForce;
    private float deltaSpeed = 10;

    private Rigidbody ballObjectRB;
    private GameObject golfBall;
    private GameObject ballObject;
    private GameObject focalPoint;
    private GameObject mainCamera;

    // Start is called before the first frame update
    void Start()
    {
        //need to add objects for camera to follow
        ballObject = GameObject.Find("BallObject");
        golfBall = GameObject.Find("GolfBall");
        ballObjectRB = ballObject.GetComponent<Rigidbody>();
        focalPoint = GameObject.Find("FocalPoint");
        mainCamera = GameObject.Find("Main Camera");

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
            ballObjectRB.AddForce(mainCamera.transform.forward * force, ForceMode.Impulse);
            force = 5;
        }

        //Need to prevent pressing Space/rotate until ball is stopped
        golfBall.transform.RotateAround(ballObject.transform.position, Vector3.up, Input.GetAxis("Horizontal"));

    }

    private void LateUpdate()
    {
        focalPoint.transform.position = ballObject.transform.position;
    }
}
