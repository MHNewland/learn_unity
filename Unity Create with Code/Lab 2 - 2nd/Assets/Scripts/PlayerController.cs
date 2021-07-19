using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float speed = 20;

    private float xBound = 24.5f;
    private float zBound = 17f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        transform.Translate(new Vector3(
            Input.GetAxis("Horizontal") * Time.deltaTime * speed,
            0,
            Input.GetAxis("Vertical") * Time.deltaTime * speed));

        //Constrain X pos
        if(transform.position.x > xBound)
        {
            transform.position = new Vector3(-xBound, transform.position.y, transform.position.z);
        }else if (transform.position.x < -xBound)
        {
            transform.position = new Vector3(xBound, transform.position.y, transform.position.z);

        }

        //Constrain Z pos
        if (transform.position.z > zBound)
        {
            transform.position = new Vector3(-transform.position.x, transform.position.y, -zBound);
        }
        else if (transform.position.z < -zBound)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, zBound);

        }
    }
}
