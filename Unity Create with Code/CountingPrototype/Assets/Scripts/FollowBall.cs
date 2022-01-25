using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowBall : MonoBehaviour
{

    public GameObject focalPoint;

    public Vector3 offsetDistance = Vector3.one * 10;

    private float damping = 10.0f;
    private float rotationDamping = 100f;

    void Start()
    {
        focalPoint = GameObject.Find("FocalPoint");
    }


    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 wantedPosition;
        wantedPosition = focalPoint.transform.TransformPoint(focalPoint.transform.forward + offsetDistance);
        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * damping);
         

        Quaternion wantedRotation = Quaternion.LookRotation(focalPoint.transform.position - transform.position, Vector3.up);
        transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        
    }
}
