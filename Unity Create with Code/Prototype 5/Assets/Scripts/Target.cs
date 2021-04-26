using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{

    public int pointVal;
    public ParticleSystem exploosionParticle;

    private Rigidbody targetRb;
    private GameManager gameManager;
    private float minSpeed = 16;
    private float maxSpeed = 20;
    private float maxTorque = 10;
    private float xRange = 4;
    private float ySpawnPos = -6;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        targetRb = GetComponent<Rigidbody>();
        targetRb.AddForce(GetRandomForce(), ForceMode.Impulse);
        targetRb.AddTorque(GetRandomTorque(), GetRandomTorque(), GetRandomTorque(), ForceMode.Impulse);
        transform.position = GetRandomSpawnPos();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    Vector3 GetRandomForce()
    {
        return Vector3.up * Random.Range(minSpeed, maxSpeed);

    }

    float GetRandomTorque()
    {
        return Random.Range(-maxTorque, maxTorque);
    }

    Vector3 GetRandomSpawnPos()
    {
        return new Vector3(Random.Range(-xRange, xRange), ySpawnPos);
    }

    private void OnMouseDown()
    {
        if (gameManager.isGameActive)
        {
            Instantiate(exploosionParticle, transform.position, exploosionParticle.transform.rotation);
            gameManager.UpdateScore(pointVal);
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        //if a good object hits the trigger, end the game
        if (other.gameObject.CompareTag("Sensor"))
        {
            if (!gameObject.CompareTag("Bad")) { 
                gameManager.GameOver();
            }
            Destroy(gameObject);
        }
    }
}
