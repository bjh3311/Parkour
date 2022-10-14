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

        if (GameManager.instance.count ==600)
        {
            StartCoroutine("Activate",Left);
            StartCoroutine("Activate",Right);
        }
        else if (GameManager.instance.count ==1100  )
        {
            StartCoroutine("Activate",Jump);
        }
        else if (GameManager.instance.count ==1600)
        {
            StartCoroutine("Activate",Slide);
        }
        else if (GameManager.instance.count==2100)
        {
            Time.timeScale=0f;
            Tuto_BG.SetActive(true);
        }
    }
    IEnumerator Activate(GameObject temp)
    {
        temp.SetActive(true);
        yield return new WaitForSecondsRealtime(3.5f);
        temp.SetActive(false);
    }
    public void Resume()
    {
        Time.timeScale=1f;
        Tuto_BG.SetActive(false);
        PlayerPrefs.SetInt("isNew",2);//튜토리얼을 끝냈으므로 2로만들어준다
    }
}
