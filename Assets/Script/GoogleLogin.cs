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
        
    }
    public void Logout()
    {
        
    }
}
