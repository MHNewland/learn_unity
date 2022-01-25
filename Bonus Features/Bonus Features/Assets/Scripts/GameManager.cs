using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public TextMeshProUGUI scoreText;
    public Button startButton;
    public Button restartButton;
    public TextMeshProUGUI titleText;
    public TextMeshProUGUI finalScoreText;

    private ArrayList movingObjects = new ArrayList();
    private PlayerController playerControllerScript;
    private SpawnManager spawnManagerScript;
    private MoveLeft moveLeftScript;
    private GameObject background;
    private GameObject playerGO;
    private float startTime;
    private float speed = 3;
    private float journeyLength;
    private float score;
    private string scoreStr;

    // Start is called before the first frame update
    void Start()
    {
        score = 0;
        journeyLength = Vector3.Distance(Vector3.zero, new Vector3(2.5f, 0f, 0f));
        scoreText.text = "Score: ";
        background = GameObject.Find("Background");
        playerGO = GameObject.Find("Player");
        playerControllerScript = playerGO.GetComponent<PlayerController>();
        spawnManagerScript = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();
        
        //start checking if the game is over
        StartCoroutine("IsGameOver");
    }

    // Update is called once per frame
    void Update()
    {
        scoreStr = Mathf.FloorToInt(score).ToString();
        scoreText.text = "Score: " + scoreStr;

        if (Input.GetKey(KeyCode.LeftShift))
        {
            playerControllerScript.dashing = true;
            movingObjects = FindMovingObjects();
            foreach (GameObject movingGO in movingObjects)
            {
                moveLeftScript = movingGO.GetComponent<MoveLeft>();
                moveLeftScript.dashing = true;
            }
        }else
        {
            playerControllerScript.dashing = false;
            movingObjects = FindMovingObjects();
            foreach (GameObject movingGO in movingObjects)
            {
                moveLeftScript = movingGO.GetComponent<MoveLeft>();
                moveLeftScript.dashing = false;
            }
        }

    }

    private ArrayList FindMovingObjects()
    {
        ArrayList movingObject = new ArrayList();
        //find all obstacles in the scene and add them to the movingObjects array
        foreach (GameObject obstacle in GameObject.FindGameObjectsWithTag("Obstacle"))
        {
            movingObject.Add(obstacle);
        }
        movingObject.Add(background);

        return movingObject;
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void StartGame()
    {
        startTime = Time.time;
        StartCoroutine("StartAnim");
        spawnManagerScript.StartCoroutine("SpawnObstacles");
        restartButton.gameObject.SetActive(false);
        startButton.gameObject.SetActive(false);
        titleText.gameObject.SetActive(false);
        scoreText.gameObject.SetActive(true);
        finalScoreText.gameObject.SetActive(false);


    }

    IEnumerator IsGameOver()
    {
        while (true)
        {
            //if the game is over, stop spawning obstacles,
            //create a list of everything that's moving left 
            //and stop them from moving left
            if (playerControllerScript.isGameOver)
            {
                spawnManagerScript.StopCoroutine("SpawnObstacles");
                StopCoroutine("ScoreCounter");
                movingObjects = FindMovingObjects();
                foreach (GameObject movingGO in movingObjects)
                {
                    moveLeftScript = movingGO.GetComponent<MoveLeft>();
                    moveLeftScript.StopCoroutine("MoveMeLeft");
                }
                finalScoreText.text = "updated";
                restartButton.gameObject.SetActive(true);
                scoreText.gameObject.SetActive(false);
                finalScoreText.text = "Final Score: " + scoreStr;
                finalScoreText.gameObject.SetActive(true);
                yield break;
            }
            yield return null;
        }
    }

    IEnumerator StartAnim()
    {
        //don't allow player to jump until start animation is finished
        playerControllerScript.isOnGround = false;

        while (true)
        {
            // Distance moved equals elapsed time times speed..
            float distCovered = (Time.time - startTime) * speed;

            // Fraction of journey completed equals current distance divided by total distance.
            float fractionOfJourney = distCovered / journeyLength;

            // Set our position as a fraction of the distance between the markers.    
            playerGO.transform.position = Vector3.Lerp(Vector3.zero, new Vector3(2.5f, 0), fractionOfJourney);
            if (playerGO.transform.position.x >= 2.4) break;
            yield return null;
        }
        playerControllerScript.isOnGround = true;
        //start calculating score after animation is completed
        StartCoroutine("ScoreCounter");
    }

    IEnumerator ScoreCounter()
    {
        while (true)
        {
            if (!playerControllerScript.dashing)
            {
                score += Time.deltaTime * 100;
            }
            else
            {
                score += Time.deltaTime * 200;
            }
            yield return null;
        }
    }
}
