using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileController : MonoBehaviour
{

    public float speed = 10;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(transform.position.x, 1, transform.position.z);
        //moves the capsule "up" across the screen
        transform.Translate(Vector3.up * Time.deltaTime * speed);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.name == "Player")
        {
            Debug.Log("hit");
            Destroy(gameObject);
            Destroy(other.gameObject);
        }
    }

    public void addSpeed(float s)
    {
        Debug.Log("Speed added");
        speed += s;
    }
}
