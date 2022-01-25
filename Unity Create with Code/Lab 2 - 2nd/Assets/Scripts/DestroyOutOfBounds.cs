using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOutOfBounds : MonoBehaviour
{
    SpawnManager spawnManager;
    private float xBounds = 0;
    private float zBounds = 0;
    private float offset = 0;
    

    // Start is called before the first frame update
    void Start()
    {
        spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();

        ArrayList test = new ArrayList();
        ArrayList boundsOffset = spawnManager.getBounds();
        xBounds = (float)boundsOffset[0];
        zBounds = (float)boundsOffset[1];
        offset = (float)boundsOffset[2];
        //Debug.Log(xBounds + " " + zBounds);
    }

    // Update is called once per frame
    void Update()
    {
        if(gameObject.transform.position.x > xBounds + offset * 2 ||
           gameObject.transform.position.x < -xBounds - offset * 2 ||
           gameObject.transform.position.z > zBounds + offset * 2 ||
           gameObject.transform.position.z < -zBounds - offset * 2 )
        {
            spawnManager.Difficulty();
            Destroy(gameObject);
        }  
    }
}
