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
    void Start()
    {
        Black.material.SetFloat("_Threshold",1.01f);
    }
    public void GameStart()
    {
        Black.gameObject.SetActive(true);
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
                StartCoroutine("Mozaic");
                break;
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
                yield return new WaitForSeconds(0.5f);
                StartCoroutine("Load");
                break;
            }
            
        }
    }
    private IEnumerator Load()//씬 불러오기
    {
        AsyncOperation op=SceneManager.LoadSceneAsync("Stage");
        //비동기 방식으로 씬을 불러오는 도중에도 다른 작업을 할 수  LoadSceneAsync 함수
        //로딩의 진행정도는 AsyncOperation Class로 반환된다
        op.allowSceneActivation=false;//로딩이 끝나면 씬을 바로 시작 못하게 한다
        float timer=0.0f;
        while(!op.isDone)//isDone이 false일 때 동안, 즉 Load가 진행중을 의미한다
        {
            yield return null;
            timer+=Time.unscaledDeltaTime;
            if(timer>=1.0f)//타이머가 지나면
            {
                yield return null;
                op.allowSceneActivation=true;
                break;
            }
        }    
    }
    

}
