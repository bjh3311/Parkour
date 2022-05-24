using UnityEngine;
using System.Collections;

public class SmallCollider : MonoBehaviour
{

    public Player play_control;
    public Animator animator;
    //public Texture2D[] textures;
    public Audio_control audio_control;

    //public Texture2D[] blink_textures;

    private Status stat;

    private void FixedUpdate()//플레이어의 상태를 계속 받아준다
    {
        this.stat = play_control.stat;
    }

    private void OnTriggerEnter(Collider other)
    {
        
        if (this.stat == Status.Down || this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide") == true)//슬라이드 중일때
        {
            //如果碰到障碍物
            if (other.tag == "Obs")
            {
                //에너지를 깍는다
                GameManager.instance.energy -= 70f;

                //播被撞到的声音
                this.audio_control.other_source.PlayOneShot(audio_control.hit, 3f);
                GameManager.instance.is_Blink=true;
                //누워 있다가 갑자기 일어나서 아픈척하는게 좀 어색해서 걍 소리만 내는걸로
            }
            else if (other.tag == "mei")
            {
                //0.生成碰撞后的飞舞动画,添加到游戏参数列表
                if(GameManager.instance.energy<=280f)
                {   
                    GameManager.instance.energy+=70f;//피 회복
                }
                else
                {
                    GameManager.instance.energy=350f;
                }   
                //播被吃到能量物体的声音
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
            }
            //如果撞到lan
            else if (other.tag == "lan")
            {   
                if(GameManager.instance.energy<=210f)
                {
                    GameManager.instance.energy+=140f;//피 회복
                }
                else
                {
                    GameManager.instance.energy=350f;
                }
                //播被吃到能量物体的声音
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
            }
            //如果撞到zhu
            else if (other.tag == "zhu")
            {
                Debug.Log("우왕");
                if(GameManager.instance.energy<=140f)
                {   
                    GameManager.instance.energy+=210f;//피 회복
                }
                else
                {
                    GameManager.instance.energy=350f;
                }
                //播被吃到能量物体的声音
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
            }
        }
    }
}
