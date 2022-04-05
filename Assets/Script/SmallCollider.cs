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
                GameManager.energy -= 40f;

                //播被撞到的声音
                this.audio_control.other_source.PlayOneShot(audio_control.hit, 3f);
                //누워 있다가 갑자기 일어나서 아픈척하는게 좀 어색해서 걍 소리만 내는걸로
            }
            /*

                //碰到了诱惑性物体
                else if (other.tag == "tempt")
                {
                    //0.减正能量
                    Game_parameter.energy -= Game_parameter.xml.tempt_energy;

                    //1. 播动画
                    if (Game_parameter.energy > 0)
                        this.animator.Play("stumble");

                    //播被撞到的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.tempt_collision, 3f);

                    //添加一个屏幕闪烁动画
                    Blink blink = new Blink(blink_textures);
                    Game_parameter.blink_list.Add(blink);


                    //诱惑物体消失
                    Destroy(other.gameObject);

                }


                //如果撞到mei
                else if (other.tag == "mei")
                {
                    //0.生成碰撞后的飞舞动画,添加到游戏参数列表
                    GUI_texture_move move = new GUI_texture_move(textures[0], other.transform.position);
                    Game_parameter.GUI_texture_move_list.Add(move);

                    //播被吃到能量物体的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);

                    //1. 移除当前能量物体 
                    Destroy(other.gameObject);
                }

                //如果撞到lan
                else if (other.tag == "lan")
                {
                    //0.生成碰撞后的飞舞动画,添加到游戏参数列表
                    GUI_texture_move move = new GUI_texture_move(textures[1], other.transform.position);
                    Game_parameter.GUI_texture_move_list.Add(move);

                    //播被吃到能量物体的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);

                    //1. 移除当前能量物体 
                    Destroy(other.gameObject);
                }

                 //如果撞到zhu
                else if (other.tag == "zhu")
                {
                    //0.生成碰撞后的飞舞动画,添加到游戏参数列表
                    GUI_texture_move move = new GUI_texture_move(textures[2], other.transform.position);
                    Game_parameter.GUI_texture_move_list.Add(move);

                    //播被吃到能量物体的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);

                    //1. 移除当前能量物体 
                    Destroy(other.gameObject);
                }

                 //如果撞到ju
                else if (other.tag == "ju")
                {
                    //0.生成碰撞后的飞舞动画,添加到游戏参数列表
                    GUI_texture_move move = new GUI_texture_move(textures[3], other.transform.position);
                    Game_parameter.GUI_texture_move_list.Add(move);

                    //播被吃到能量物体的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.gold, 3f);

                    //1. 移除当前能量物体 
                    Destroy(other.gameObject);
                }
                */
            }
            
        
    }
}
