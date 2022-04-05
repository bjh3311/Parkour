using UnityEngine;
using System.Collections;


//定义一个游戏状态的枚举

public class GameManager : MonoBehaviour
{
    public static float energy;                       //에너지
    public Audio_control audio_control;    //오디오 컨트롤
    public Player player_control;  //控制游戏主角的脚本对象
    public Animator animator;              //游戏主角的动画控制器
    public RectTransform EnergyBar;//에너지 바 

    // Use this for initialization
    void Awake()//싱글톤 패턴으로 구현
    {
        GameManager.energy=200f;
    }
    //游戏逻辑
    void Update()
    {
        
        #region Energy
        EnergyBar.sizeDelta=new Vector2(energy,30);
        if (GameManager.energy <= 0)
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
            //패배 오디오
        }
        #endregion
    }
}