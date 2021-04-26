using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DifficultyButton : MonoBehaviour
{

    public int difficulty;
    public GameManager gameManager;

    private Button button;
    // Start is called before the first frame update
    void Start()
    {
        button = GetComponent<Button>();
        button.onClick.AddListener(SetDifficulty);
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    void SetDifficulty()
    {
        gameManager.StartGame(difficulty);
    }
 
}
