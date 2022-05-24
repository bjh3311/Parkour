using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    private float score = 0.0f;
    private int difficultyLevel=1;
    private int maxDifficultyLevel=10;
    private int scoreToNextLevel=10;

    public Text scoreText;
    // Start is called before the first frame update
    // Update is called once per frame
    void Update()
    {
        if(GameManager.instance.count<331)//시작하기전에는 스코어가 안올라간다
        {
            return;
        }
        if(GameManager.instance.energy<=0)//피가 다닳으면 스코어가 안올라간다
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
        if(difficultyLevel==maxDifficultyLevel)//최대 레벨은 20레벨
        {
            return;
        }
        scoreToNextLevel*=2;
        difficultyLevel++;
        GameManager.instance.mapSpeed+=50;
        GameManager.instance.ObsLength+=50f;
    }
}
