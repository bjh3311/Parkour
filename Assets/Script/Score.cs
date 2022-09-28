using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    private float score = 0.0f;
    private int difficultyLevel=1;
    private int maxDifficultyLevel=6;
    private int scoreToNextLevel=30;//30점 기준으로 속도가 빨라진다

    private float cursorTime=0.15f;
    public Image[] Up;
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
            StartCoroutine("SpeedUp");
            LevelUp();
        }   
        score+=Time.deltaTime;
        scoreText.text=((int)score).ToString();
    }
    void LevelUp()
    {
        GameManager.instance.audio_control.other_source.PlayOneShot(GameManager.instance.audio_control.SpeedUp,1f);
        if(difficultyLevel==maxDifficultyLevel)//최대 레벨은 10레벨
        {
            return;
        }
        scoreToNextLevel+=30;
        difficultyLevel++;
        GameManager.instance.mapSpeed+=100;
    }
    IEnumerator SpeedUp()
    {
        int temp=3;
        while(temp>0)
        {
            Up[3].gameObject.SetActive(true);
            Up[7].gameObject.SetActive(true);
            yield return new WaitForSecondsRealtime(cursorTime);
            Up[2].gameObject.SetActive(true);
            Up[6].gameObject.SetActive(true);
            yield return new WaitForSecondsRealtime(cursorTime);
            Up[1].gameObject.SetActive(true);
            Up[5].gameObject.SetActive(true);
            yield return new WaitForSecondsRealtime(cursorTime);
            Up[0].gameObject.SetActive(true);
            Up[4].gameObject.SetActive(true);
            yield return new WaitForSecondsRealtime(cursorTime);
            foreach(Image image in Up)//다 꺼준다
            {
                image.gameObject.SetActive(false);
            }
            yield return new WaitForSecondsRealtime(cursorTime);
            temp--;
        }
        
    }
}
