using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishController : MonoBehaviour
{
    public SpawnManager spawner;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider collider)
    {
        if(collider.gameObject.transform.position.y > transform.position.y)
        {
            spawner.SpawnFinish();
            Debug.Log("finish");
            Destroy(gameObject);
        }
        Debug.Log("hit");

    }
}
