using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public Transform target;
    public float distance = 8.0f;
    public float height = 4.0f;
    public float damping = 1.0f;
    public bool smoothRotation = true;
    public float rotationDamping = 100.0f;

    void Update()
    {
        transform.position = target.TransformPoint(0, height, -distance);

        Quaternion wantedRotation = Quaternion.LookRotation(target.position - transform.position, target.up);
        transform.rotation = wantedRotation;
        
        transform.LookAt(target, target.up);
    }
}
