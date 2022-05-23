using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    private float score = 0.0f;
    private int difficultyLevel=1;
    private int maxDifficultyLevel=20;
    private int scoreToNextLevel=10;

    public Text scoreText;
    // Start is called before the first frame update
    // Update is called once per frame
    void Update()
    {
        if(GameManager.instance.count<331)
        {
            return;
        }
        if(score>=scoreToNextLevel)
        {
            LevelUp();
        }   
        score+=Time.deltaTime;
        scoreText.text=((int)score).ToString();
    }
    void LevelUp()
    {
        if(difficultyLevel==maxDifficultyLevel)
        {
            return;
        }
        scoreToNextLevel*=2;
        difficultyLevel++;
        GameManager.instance.mapSpeed+=75f;
    }
}
