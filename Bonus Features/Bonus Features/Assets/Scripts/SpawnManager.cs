using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{

    public GameObject[] obstaclePrefab;
    private Vector3 spawnPos = new Vector3(25, 0, 0);
    public float spawnRate = 2;
    private int obstacleIndex;


    //spawn random obstacles at the spawn position and start their "MoveMeLeft" coroutine
    IEnumerator SpawnObstacles()
    {
        while (true) { 
            yield return new WaitForSeconds(spawnRate);
            obstacleIndex = Random.Range(0, obstaclePrefab.Length);
            Instantiate(obstaclePrefab[obstacleIndex], spawnPos, obstaclePrefab[obstacleIndex].transform.rotation);
        }
    }

    public void StopSpawning()
    {
        StopCoroutine("SpawnObstacles");
    }
}
