using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{

    public GameObject enemyPrefab;
    public GameObject powerupPrefab;
    public float spawnRange = 9;
    private int enemyCount;
    private int waveNumber = 1;

    // Start is called before the first frame update
    void Start()
    {
        SpawnEnemyWave(waveNumber);
    }

    // Update is called once per frame
    void Update()
    {
        enemyCount = FindObjectsOfType<EnemyController>().Length;
        if(enemyCount == 0)
        {
            waveNumber++;
            SpawnEnemyWave(waveNumber);
        }
    }

    private Vector3 generateSpawnPosition()
    {
        float spawnX = Random.Range(-spawnRange, spawnRange);
        float spawnZ = Random.Range(-spawnRange, spawnRange);
        Vector3 spawnPos = new Vector3(spawnX, 0, spawnZ);
        return spawnPos;
    }

    private void SpawnEnemyWave(int waveSize)
    {
        Instantiate(powerupPrefab, generateSpawnPosition(), powerupPrefab.transform.rotation);

        for (int i = 0; i < waveSize; i++) { 
            Instantiate(enemyPrefab, generateSpawnPosition(), enemyPrefab.transform.rotation);
        }
    }
}
