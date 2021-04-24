using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public float horizontalInput;
    public float playerSpeed = 10.0f;
    public float xRange = 23;
    public GameObject projectilePrefab;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //get left/right input
        horizontalInput = Input.GetAxis("Horizontal");

        //move character left/right within constraints
        transform.Translate(Vector3.right * horizontalInput * playerSpeed * Time.deltaTime);
        if(transform.position.x < -xRange)
        {
            transform.position = new Vector3(-xRange, transform.position.y, transform.position.z);
        }else if (transform.position.x > xRange)
        {
            transform.position = new Vector3(xRange, transform.position.y, transform.position.z);
        }

        //get "fire" input
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("space");
            //launch projectile from player
            Instantiate(projectilePrefab, transform.position + new Vector3(0,2,0), projectilePrefab.transform.rotation);
        }
    }
}
