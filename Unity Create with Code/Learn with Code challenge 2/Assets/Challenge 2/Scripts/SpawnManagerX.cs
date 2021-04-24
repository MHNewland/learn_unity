﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManagerX : MonoBehaviour
{
    public GameObject[] ballPrefabs;

    private float spawnLimitXLeft = -15;
    private float spawnLimitXRight = 7;
    private float spawnPosY = 30;

    private float startDelay = 1.0f;
    private float spawnIntervalMin = 2.0f;
    private float spawnIntervalMax = 5.0f;
    private float elapsedTime = 0;
    private float tempDealy =0; 

    // Start is called before the first frame update
    void Start()
    {
        Invoke("SpawnRandomBall", startDelay);
    }


    // Spawn random ball at random x position at top of play area
    void SpawnRandomBall ()
    {

        // Generate random ball index and random spawn position
        int ballIndex = Random.Range(0, ballPrefabs.Length);
        Vector3 spawnPos = new Vector3(Random.Range(spawnLimitXLeft, spawnLimitXRight), spawnPosY, 0);

        // instantiate ball at random spawn location
        Instantiate(ballPrefabs[ballIndex], spawnPos, ballPrefabs[ballIndex].transform.rotation);

        //update spawn interval
        tempDealy = Random.Range(spawnIntervalMin, spawnIntervalMax);
    }


    private void Update()
    {
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= tempDealy)
        {
            //spawn the ball
            SpawnRandomBall();
            //reset elapsed time to properly delay
            elapsedTime = 0;
        }
    }

}
