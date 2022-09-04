using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;

using GooglePlayGames;
using GooglePlayGames.BasicApi;


public class GoogleLogin : MonoBehaviour
{
    public Text temp;
    void Start()
    {
        
        PlayGamesPlatform.DebugLogEnabled=true;   
        PlayGamesPlatform.Activate();//구글플레이 플랫폼 활성화
        //위의 함수를 실행하면 Social.Active= PlayGamesPlatform.Instance가 된다
    }
    public void Login()//구글플레이 로그인 버튼에 적용
    {
        if(!Social.localUser.authenticated)//현재 기기와 연결된 계정이 인증이 아직 안됐는가?
        {
            Social.localUser.Authenticate(success => 
            {
                if(success)//로그인에 성공시
                {
                    Debug.Log("Authentication successful");
                    string userInfo="Username: " + Social.localUser.userName +
                    "\nUser ID: " + Social.localUser.id +
                    "\nIsUnderage: " + Social.localUser.underage;
                    temp.text=userInfo;
                    Debug.Log(userInfo);
                }
                else
                {
                    Debug.Log("Authentication Failed");
                }
            });
        }
    }
    public void Logout()
    {
        
    }
}
