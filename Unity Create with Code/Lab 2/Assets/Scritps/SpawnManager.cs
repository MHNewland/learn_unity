using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    //Timer info
    public float startDelay = 1;
    private float elapsedTime = 0;

    //Platform info
    public float platformSpawnRate = 1;
    private float platformMaxXLimit;
    private float platformMinXLimit;
    private float platformMaxZLimit;
    private float platformMinZLimit;
    private float spawnPosY = 30;
    public GameObject platform;

    //Finish info
    private float finishMaxHeight = 20;
    private float finishMinHeight = 10;
    private float finishXLimit = 20;
    private float finishZLimit = 20;
    public GameObject finish;


    // Start is called before the first frame update
    void Start()
    {
        Invoke(nameof(SpawnFinish), 1);
    }

    public void SpawnFinish()
    {
        Vector3 spawnPos = new Vector3(
            Random.Range(-finishXLimit, finishXLimit),
            Random.Range(finishMinHeight, finishMaxHeight),
            Random.Range(-finishZLimit, finishZLimit));
        Debug.Log(finish.gameObject.ToString());

        Instantiate(finish, spawnPos,finish.transform.rotation);

        platformMaxXLimit = spawnPos.x + 7;
        platformMinXLimit = spawnPos.x - 7;
        platformMaxZLimit = spawnPos.z + 7;
        platformMinZLimit = spawnPos.z - 7;
    }

    // Spawn platform at random x position
    void SpawnPlatform()
    {

        // get random position
        Vector3 spawnPos = new Vector3(
            Random.Range(platformMinXLimit, platformMaxXLimit),
            spawnPosY,
            Random.Range(platformMinZLimit, platformMaxZLimit));

        // instantiate platform at random spawn location
        Instantiate(platform, spawnPos, platform.transform.rotation);
        platformMaxXLimit = spawnPos.x + 7;
        platformMinXLimit = spawnPos.x - 7;
        platformMaxZLimit = spawnPos.z + 7;
        platformMinZLimit = spawnPos.z - 7;

    }


    private void Update()
    {
        elapsedTime += Time.deltaTime;
        if (elapsedTime >= platformSpawnRate)
        {
            //spawn the ball
            SpawnPlatform();
            //reset elapsed time to properly delay
            elapsedTime = 0;
        }
    }
}
