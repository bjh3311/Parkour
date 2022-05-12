using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainManager : MonoBehaviour
{
    public Transform player_transform;
    public Animator player_animator;

    public Button[] Buttons;
    public Image[] Buttons_Image;
    public Image Black;
    private float threshold=1.01f;
    [SerializeField]
    private float dissolveTime;
    // Start is called before the first frame update
    void Start()
    {
        Black.material.SetFloat("_Threshold",1.01f);
    }
    public void GameStart()
    {
        StartCoroutine("Move");
        player_animator.SetBool("isRun",true);
        foreach(Button temp in Buttons)
        {
            temp.interactable=false;
        }
        StartCoroutine("Transparent");
    }
    public void Exit()
    {
        #if UNITY_EDITOR //유니티 에디터에서 작동하게
            UnityEditor.EditorApplication.isPlaying=false;
        #else //실제 플레이환경에서 작동하게
            Application.Quit();
        #endif
    }
    IEnumerator Move()
    {
        while(true)
        {
            yield return null;
            player_transform.position=player_transform.position+new Vector3(0,0,-2);
            if(player_transform.position.z<-20)
            {
                break;
                StartCoroutine("Mozaic");
            }
            
        }
    }
    IEnumerator Transparent()
    {
        byte maxTrans=255;
        while(true)
        {
            maxTrans=(byte)(maxTrans-5);
            yield return new WaitForSeconds(0.01f);
            foreach(Image temp in Buttons_Image)
            {
                temp.color=new Color32(255,255,255,maxTrans);
            }
            if(maxTrans<=0)
            {
                break;
            }
        }
    }
    IEnumerator Mozaic()
    {
         while(true)
        {
            Black.material.SetFloat("_Threshold", threshold);
            threshold-=0.1f;
            yield return new WaitForSeconds(dissolveTime);    
            if(threshold<=0.0f)
            {
                break;
            }
        }
    }
}
