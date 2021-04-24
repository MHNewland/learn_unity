using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //destroy object when it hits something.
    void OnTriggerEnter(Collider other)
    {
        Debug.Log("hit");
        Destroy(gameObject);
        Destroy(other.gameObject);
    }
}
