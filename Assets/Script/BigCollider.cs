using UnityEngine;
using System.Collections;

public class BigCollider : MonoBehaviour
{
    public Player play_control;
    public Animator animator;
    public Audio_control audio_control;

    private Status stat;


    private void FixedUpdate()//플레이어의 상태를 계속 받아준다
    {
        this.stat = play_control.stat;
    }
    

    private void OnTriggerEnter(Collider other)
    {
        //todo 如果碰撞到了 0.播动画  1.减正能量
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide") == false && this.stat != Status.Down)//슬라이드가 아니어야 한다
        {//BigCollider는 상체쪽에 위치한다. BigCollider가 대나무와 만났는데 슬라이드중이면 피한걸로 해야 한다.
            //如果撞到障碍物
            if(other.tag == "Obs")
            {
                //에너지를 깍는다
                GameManager.instance.energy-=70f;
                if (GameManager.instance.energy > 0)
                {
                    this.animator.Play("stumble");
                }
                //맞는 효과음 낸다
                this.audio_control.player_source.PlayOneShot(audio_control.hit,3f);
                GameManager.instance.is_Blink=true;//깜빡이는 효과
            }
            //如果撞到mei
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
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }
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
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }
            else if (other.tag == "zhu")
            {
                if(GameManager.instance.energy<=140f)
                {   
                    GameManager.instance.energy+=210f;//피 회복
                }
                else
                {
                    GameManager.instance.energy=350f;
                }
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }     
        }
        
    }
}
