using UnityEngine;
using System.Collections;


//定义一个游戏状态的枚举

public class GameManager : MonoBehaviour
{

    public static GameManager instance=null;



    public float energy;                       //에너지
    public Audio_control audio_control;    //오디오 컨트롤
    public Player player_control;  //控制游戏主角的脚本对象
    public Animator animator;              //游戏主角的动画控制器
    public RectTransform EnergyBar;//에너지 바 

    private static int count;

    public Texture num_3;
    public Texture num_2;
    public Texture num_1;

    public MapMove map;
    // Use this for initialization

    public Texture2D[] blink_textures;
    void Awake()//싱글톤 패턴으로 구현
    {
        instance=this;
        this.energy=350f;
        count=0;
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
            }
            player_control.stat=Status.kneel;//패배상태로 만들어준다
            //패배 애니메이션
            this.animator.SetBool("isSlide", false);
            this.animator.SetBool("isFail", true);
            map.mapSpeed=Mathf.Lerp(map.mapSpeed,0,0.04f);//천천히 맵을 정지시킨다
        }
        #endregion
    }
    private void OnGUI() 
    {
        //3,2,1 카운트 다운
        #region
        count++;
        if (count < 130 && count > 30)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_3);
            if (count == 31)
            {
                this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
        }
        else if (count > 130 && count < 230)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_2);

            if (count == 131)
            {
                this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
        }
        else if (count > 230 && count < 330)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
            Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_1);
            if (count == 231)
            {
                    this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
            }
        }
        else if(count==331)//마지막에는 맵을 움직이기 시작한다
        {
            map.mapSpeed=200f;
        }
        #endregion
    }
    public void Blink()
    {
        try
        {
            for(int i=0;i<=18;i++)
            {
                GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth, Camera.main.pixelHeight),this.blink_textures[i]);
            }
        }
        catch(Exception ex)
        {
            Debug.Log(ex);
        }
        
       
    }
}