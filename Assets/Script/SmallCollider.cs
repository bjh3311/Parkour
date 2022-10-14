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

    public Texture2D[] textures;//텍스쳐들 모음집

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
                GUI_move move = new GUI_move(textures[0], other.transform.position,70f);
                GameManager.instance.GUI_move_list.Add(move);
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }
            else if (other.tag == "zhu")
            {   
                GUI_move move = new GUI_move(textures[1], other.transform.position,140f);
                GameManager.instance.GUI_move_list.Add(move);
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }
            else if (other.tag == "ju")
            {
                GUI_move move = new GUI_move(textures[2], other.transform.position,210f);
                GameManager.instance.GUI_move_list.Add(move);
                this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);
                other.gameObject.SetActive(false);//오브젝트 풀링으로 구현하기 위해 SetActive(false)로 한다
            }  
            
            else if (other.tag=="tempt")
            {
                if(!GameManager.instance.is_Smoke)
                {
                    GameManager.instance.StartCoroutine("Smoking");
                }
                
            }
        }
    }
}
