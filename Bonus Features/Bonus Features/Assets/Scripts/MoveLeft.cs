using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLeft : MonoBehaviour
{

    public float moveSpeed = 20;
    public float leftBounds = -15;
    public bool dashing = false;

    private void Start()
    {
        StartCoroutine("MoveMeLeft");
    }

    // Update is called once per frame
    void Update()
    {
        //destroy obstacles that move past the left bounds
        if(transform.position.x < leftBounds && gameObject.CompareTag("Obstacle"))
        {
            Destroy(gameObject);
        }

    }

    //move the object left
    IEnumerator MoveMeLeft()
    {
        while (true)
        {
            if (!dashing)
            {
                transform.Translate(Vector3.left * moveSpeed * Time.deltaTime);
            }
            else
            {
                transform.Translate(Vector3.left * moveSpeed * 1.5f * Time.deltaTime);

            }
            yield return null;
        }
    }
}
