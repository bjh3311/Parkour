using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject Slide;
    public GameObject Jump;
    public GameObject Left;
    public GameObject Right;
    
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
    }
    IEnumerator Activate(GameObject temp)
    {
        temp.SetActive(true);
        yield return new WaitForSecondsRealtime(3.5f);
        temp.SetActive(false);
    }
}
