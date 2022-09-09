using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using GooglePlayGames;
using GooglePlayGames.BasicApi;


public class GoogleLogin : MonoBehaviour
{   
    public Text temp;
    void Start()
    {
        
        PlayGamesPlatform.DebugLogEnabled=true;   
        
    }
    public void Login()//구글플레이 로그인 버튼에 적용
    {
        PlayGamesPlatform.Activate();//구글플레이 플랫폼 활성화
        //위의 함수를 실행하면 Social.Active= PlayGamesPlatform.Instance가 된다
        Social.localUser.Authenticate
        (
            (bool success) =>
            {    
                if(success)//성공시에
                {
                    StartCoroutine("LoadMain");
                    string userInfo="Username: " + Social.localUser.userName +
                    "\nUser ID: " + Social.localUser.id +
                    "\nIsUnderage: " + Social.localUser.underage;
                    temp.text=userInfo;
                }
                else
                {
                    temp.text="실패";
                }
            }
        );
    }
     IEnumerator LoadMain()//구글플레이 로그인 성공하고 4초 이따가 Main화면 불러들임
    {
        yield return new WaitForSecondsRealtime(4.0f);
        SceneManager.LoadScene("Main");
    }
}
