using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowBall : MonoBehaviour
{

    public GameObject golfBall;

    public int distancex = 10;
    public int distancey = 10;
    public int distancez = 10;

    public int height = 5;

    public float damping = 2.0f;
    public float rotationDamping = 10f;

    void Start()
    {
        golfBall = GameObject.Find("FocalPoint");
    }


    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 wantedPosition;
        wantedPosition = golfBall.transform.TransformPoint(distancex, height, distancez);
        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * 10);
         

        Quaternion wantedRotation = Quaternion.LookRotation(golfBall.transform.position - transform.position, Vector3.up);
        transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        
    }
}
