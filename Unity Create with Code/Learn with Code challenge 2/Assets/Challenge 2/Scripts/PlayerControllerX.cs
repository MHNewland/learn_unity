using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public GameObject dogPrefab;

    public float fetchDelay = 1;
    private float elapsedTime;

    // Update is called once per frame
    void Update()
    {
        //make sure the elapsed tiime is longer than the delay
        //so that users can't spam
        elapsedTime += Time.deltaTime;
        if (elapsedTime > fetchDelay)
        {
            // On spacebar press, send dog
            if (Input.GetKeyDown(KeyCode.Space))
            {
                Instantiate(dogPrefab, transform.position, dogPrefab.transform.rotation);
                //reset elapsedTime to properly delay
                elapsedTime = 0;
            }
        }
    }
}
