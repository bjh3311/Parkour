using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlertDialog : MonoBehaviour
{

    AndroidJavaClass unityClass;
    AndroidJavaObject unityActivity;
    AndroidJavaObject pluginInstance;

    void Start()//시작할때 플러그인을 설정과 Alert창을 미리 만들어둔다
    {
        InitializePlugins("com.redtiger.native_plugin.PluginClass");
        CreateAlert();
    }
    void InitializePlugins(string pluginName)
    {
        unityClass=new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        unityActivity=unityClass.GetStatic<AndroidJavaObject>("currentActivity");
        pluginInstance=new AndroidJavaObject(pluginName);
        if(pluginInstance==null)//플러그인을 제대로 인식 못했을 시에
        {
            Debug.Log("Plugin instance Null!!");
            return;
        }
        pluginInstance.CallStatic("receiveUnityActivity",unityActivity);
    }
    void CreateAlert()//플러그인에서 CreateAlert를 호출한다
    {
        pluginInstance.Call("CreateAlert");
    }
    public void ShowAlert()//플러그인에서 ShowAlert를 호출한다
    {
        pluginInstance.Call("ShowAlert");
    }
}
//현재 유니티 활동을 Android 플러그인에 보내는 스크립트 