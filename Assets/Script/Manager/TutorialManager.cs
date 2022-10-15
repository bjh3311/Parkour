using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject Slide;
    public GameObject Jump;
    public GameObject Left;
    public GameObject Right;
    public GameObject Tuto_BG;

    void Update()
    {

        if (GameManager.instance.count ==500)
        {
            Left.SetActive(true);
            Right.SetActive(true);
        }
        else if (GameManager.instance.count ==1000  )
        {
            Left.SetActive(false);
            Right.SetActive(false);
            Jump.SetActive(true);
        }
        else if (GameManager.instance.count ==1500)
        {
            Jump.SetActive(false);
            Slide.SetActive(true);
        }
        else if (GameManager.instance.count==2050)
        {
            GameManager.instance.count++;
            Slide.SetActive(false);
            Time.timeScale=0f;
            Tuto_BG.SetActive(true);
        }
    }
    public void Resume()
    {
        Time.timeScale=1f;
        Tuto_BG.SetActive(false);
        PlayerPrefs.SetInt("isNew",2);//튜토리얼을 끝냈으므로 2로만들어준다
    }
}
