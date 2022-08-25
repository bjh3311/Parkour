using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KakaoLogin : MonoBehaviour
{
    private AndroidJavaObject ajo;
    // Start is called before the first frame update
    void Start()
    {
        ajo=new AndroidJavaObject("com.Redtiger.Parkour3D.UKakao");
    }
    public void Login()//로그인 버튼
    {
        ajo.Call("KakaoLogin");//UKakao라는 코틀린파일에서 KakaoLogin이라는 함수를 호출한다
    }
}
