using UnityEngine;
using System.Collections;

public class Basic_setting : MonoBehaviour
{

    void Awake()
    {
        //iTween.CameraFadeDestroy();
        //帧率
        Application.targetFrameRate = 60;
    }
    // Use this for initialization
    void Start()
    {
        //渐变
        //iTween.CameraFadeAdd(iTween.CameraTexture(Color.black));
        //iTween.CameraFadeFrom(1, 1.5f);


        //隐藏鼠标
        //Cursor.visible = false;
    }

    // Update is called once per frame
    void Update()
    {

        //按ESC键 退出游戏
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }
}
