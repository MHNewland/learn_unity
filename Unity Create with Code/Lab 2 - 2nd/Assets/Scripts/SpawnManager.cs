using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{

    public GameObject missile;

    private float xBound = 25;
    private float zBound = 17;

    private float elapsedTime = 0;
    private float spawnSpeedOrigin;
    private float spawnSpeed = 1;
    private float spawnSpeedIncr = 0.1f;
    private float offset = 10;
    private int counter = 0;

    // Start is called before the first frame update
    void Start()
    {
        spawnSpeedOrigin = spawnSpeed;
        missile.GetComponent<MissileController>().speed = 10;
    }

    // Update is called once per frame
    void Update()
    {
        elapsedTime += Time.deltaTime;
        if(elapsedTime >= spawnSpeed)
        {
            Vector3 startPos = getStartPosition();

            Vector3 endPos = getEndPosition(startPos);
            //Quaternion quaternion = Quaternion.a

            Vector3 targetDir = endPos - startPos;
            Vector3 up = missile.transform.up;
            float angle = Vector3.SignedAngle(targetDir, up, Vector3.up);


            //float angle = Vector3.SignedAngle(startPos, endPos, Vector3.forward);
            /*
            Debug.Log("angle " + angle);
            Debug.Log("target " + targetDir);
            Debug.Log("startPos " + startPos);
            Debug.Log("endPos " + endPos);
            */

            Instantiate(missile, startPos, missile.transform.rotation * Quaternion.AngleAxis(angle, Vector3.right));
            elapsedTime = 0;
        }

    }

    private Vector3 getStartPosition()
    {
        int side = Random.Range(1, 4);
        Vector3 position = Vector3.zero;


        //determine whichh side the missile will start on
        switch (side){
            //left
            case 1:
                //Debug.Log("left");
                position = new Vector3(-xBound - offset, 0, Random.Range(-zBound, zBound));
                break;
            //top
            case 2:
                //Debug.Log("top");
                position = new Vector3(Random.Range(-xBound, xBound), 0, zBound + offset);
                break;
            //right
            case 3:
                //Debug.Log("right");
                position = new Vector3(xBound + offset, 0, Random.Range(-zBound, zBound));
                break;
            //bottom
            case 4:
                //Debug.Log("bottom");
                position = new Vector3(Random.Range(-xBound, xBound), 0, -zBound - offset);
                break;
            default:
                break;
        }

        //Debug.Log("position: " + position);

        return position;
    }

    Vector3 getEndPosition(Vector3 startPosition)
    {
        Vector3 endPosition = Vector3.zero;
        

        //if started on Left
        if (startPosition.x < -xBound)
        {
            endPosition = new Vector3(Random.Range(0, xBound), 0, Random.Range(-zBound, zBound));
        }

        //if started on Top
        if (startPosition.z > zBound)
        {
            endPosition = new Vector3(Random.Range(-xBound, xBound), 0, Random.Range(-zBound, 0));
        }

        //if started on the Right
        if (startPosition.x > xBound)
        {
            endPosition = new Vector3(Random.Range(-xBound, 0), 0, Random.Range(-zBound, zBound));
        }

        //if started on the bottom
        if (startPosition.z < -zBound)
        {
            endPosition = new Vector3(Random.Range(-xBound, xBound), 0, Random.Range(0, zBound));
        }

        return endPosition;
    }

    public ArrayList getBounds()
    {
         ArrayList bounds = new ArrayList { xBound, zBound, offset};
         return bounds;
    }

    public void Difficulty()
    {
        counter += 1;
        Debug.Log("dif " + counter + " " + missile.GetComponent<MissileController>().speed);
        if (counter == missile.GetComponent<MissileController>().speed)
        {
            Debug.Log("reset counter");
            counter = 0;
            missile.GetComponent<MissileController>().addSpeed(1);
            if (spawnSpeed > 0 + spawnSpeedIncr)
            {
                Debug.Log("Spawn Speed incr");
                spawnSpeed -= spawnSpeedIncr;
            }
            else
            {
                spawnSpeed = spawnSpeed / 2;
                Debug.Log("stupid Spawn Speed");
            }
        }
    }

}
