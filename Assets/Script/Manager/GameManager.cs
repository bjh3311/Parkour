using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

using System.IO;



public class GameManager : MonoBehaviour
{

    
    public float energy;                       //에너지
    public Audio_control audio_control;    //오디오 컨트롤
    public Player player_control;  //控制游戏主角的脚本对象
    public Animator animator;              //游戏主角的动画控制器
    public RectTransform EnergyBar;//에너지 바 

    public int count;

    public Texture num_3;
    public Texture num_2;
    public Texture num_1;

    // Use this for initialization

    public Texture2D[] blink_textures;
    public bool is_Blink=false;
    private int frame_account=0;
    public GameObject Pasue_BG;//정지 배경화면
    public GameObject Over_BG;

    public Image start_BG;//시작 모자이크 효과
    public Image Smoke;
    private float threshold=0f;
    private float smoking_threshold=1.01f;

    public float mapSpeed=0f;

    private LeaderBoard LeaderBoard;

    public GameObject[] UI;

    public CameraChase CameraScript;

    public bool is_Smoke;//smoking효과가 되어있는가?

    public ArrayList GUI_move_list; 

    private bool is_Start;//처음에 모자이크 효과가 끝난 후에 is_Start를 true로 바꿔준다

    public float unit;//GUI 단위 길이
    public static GameManager instance=null;
    void Awake()//싱글톤 패턴으로 구현
    {
        instance=this;
        this.energy=350f;
        count=0;
        start_BG.material.SetFloat("_Threshold",0f);//처음엔 까맣게 시작
        Smoke.material.SetFloat("_Threshold",1.01f);
        is_Start=false;
        is_Smoke=false;
        StartCoroutine("Mozaic");
        Application.targetFrameRate=60;
        LeaderBoard=this.gameObject.GetComponent<LeaderBoard>();
        //게임매니저에 붙어있는 LeaderBoard 스크립트를 참조한다.

        if (GUI_move_list != null)
        {
            GUI_move_list.Clear();
        }
        else
        {
            GUI_move_list = new ArrayList();
        }
        unit = (float)Camera.main.pixelWidth / (float)700;
    }
    //游戏逻辑
    void Update()
    {
        #region Energy
        EnergyBar.sizeDelta=new Vector2(energy,60);
        if (this.energy <= 0)
        {
            if(player_control.stat!=Status.kneel)//패배상태가 아닐경우에 다른효과음 다 꺼주고 패배 효과음을 한번 켜준다
            {
                this.audio_control.other_source.PlayOneShot(audio_control.lose, 0.5f);//패배 효과음을 킨다
                this.audio_control.bg_source.Stop();//배경음악은 끈다
                this.audio_control.player_source.Stop();//플레이어 효과음도 끈다
                StartCoroutine("GameOver");
                LeaderBoard.AddLeaderboard();//리더보드에 점수를 기록시킨다.
            }
            player_control.stat=Status.kneel;//패배상태로 만들어준다
            //패배 애니메이션
            this.animator.SetBool("isSlide", false);
            this.animator.SetBool("isFail", true);
            mapSpeed=Mathf.Lerp(mapSpeed,0,0.04f);//맵을 천천히 정지시킨다 
            GUI_move_list.Clear();
        }
        #endregion
    }
    private void OnGUI() 
    {
        if(!is_Start)//is_Start가 false이면 종료시킨다
        {
            return;
        }
        if(Time.timeScale==0)//정지 상태면 
        {
            return ;
        }
        //3,2,1 카운트 다운
        #region
        count++;
        if (count < 280 && count > 180)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_3);
            if (count == 181)
            {
                CameraScript.enabled=true;
                this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
            if(count==185)
            {
                foreach(GameObject temp in UI)
                {
                    temp.gameObject.SetActive(true);
                }
            }
        }
        else if (count > 280 && count < 380)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_2);

            if (count == 281)
            {
                this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
        }
        else if (count > 380 && count < 480)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_1);
            if (count == 381)
            {
                this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
        }
        else if(count==481)//마지막에는 맵을 움직이기 시작한다
        {
            start_BG.gameObject.SetActive(false);
            mapSpeed=200f;
        }
        #endregion

        #region 장애물에 걸렸을때 Blink효과
        if(is_Blink)
        {
            this.frame_account++;
            if (this.frame_account/2 == this.blink_textures.Length-1)
            {
                this.frame_account = 0;
                this.is_Blink = false;
            }
            GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth, Camera.main.pixelHeight), this.blink_textures[frame_account/2]);
        }
        #endregion
    }
    public void Pause()
    {
        if(player_control.stat==Status.kneel)//만약 에너지가 다달아서 죽은 상태면 Pause가 작동안되게 한다
        {
            return;
        }
        Time.timeScale=0f;
        Pasue_BG.SetActive(true);
    }
    public void Resume()
    {
        Time.timeScale=1f;
        Pasue_BG.SetActive(false);
    }
    public void Restart()
    {
        User u=new User(false);
        string temp=JsonUtility.ToJson(u);
        File.WriteAllText(Application.persistentDataPath+"/User.json",temp);//json 저장
        SceneManager.LoadScene("Stage");
    }
    public void Quit()
    {
        User u=new User(false);
        string temp=JsonUtility.ToJson(u);
        File.WriteAllText(Application.persistentDataPath+"/User.json",temp);//json 저장
        SceneManager.LoadScene("Main");
    }
    IEnumerator Mozaic()
    {
        while(true)
        {
            start_BG.material.SetFloat("_Threshold", threshold);
            threshold+=0.1f;
            yield return new WaitForSeconds(0.05f);    
            if(threshold>=1.01f)
            {
                yield return new WaitForSeconds(0.5f);
                is_Start=true;
                break;
            }
        }
    }
    IEnumerator Smoking()//안개 끼는 효과
    {
        is_Smoke=true;
        while(true)
        {
            Smoke.material.SetFloat("_Threshold",smoking_threshold);
            smoking_threshold=smoking_threshold-0.05f;
            yield return new WaitForSeconds(0.05f);
            if(smoking_threshold<=0.3f)
            {
                yield return new WaitForSecondsRealtime(4.0f);//4초동안 안개낀 상태
                StartCoroutine("UnSmoking");
                break;
            }
        }
    }
    IEnumerator UnSmoking()//안개 걷어내는 효과
    {
        while(true)
        {
            Smoke.material.SetFloat("_Threshold",smoking_threshold);
            smoking_threshold=smoking_threshold+0.05f;
            yield return new WaitForSeconds(0.05f);
            if(smoking_threshold>=1.01f)
            {
                is_Smoke=false;
                break;
            }
        }
    }
    IEnumerator GameOver()
    {
        yield return new WaitForSeconds(3.5f);
        Over_BG.gameObject.SetActive(true);
    }
}