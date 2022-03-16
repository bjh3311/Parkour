using UnityEngine;
using System.Collections;

public class Big_collider : MonoBehaviour
{
    public Player_control play_control;
    public Animator animator;
    public Texture2D[] textures;
    public Audio_control audio_control;

    public Texture2D[] blink_textures;

    private Move_statu move_statu;


    void Start() {

        this.move_statu = play_control.move_statu;
    }

    private void OnTriggerEnter(Collider other)
    {

        //todo 如果碰撞到了 0.播动画  1.减正能量
        if (Game_parameter.game_statu == Game_statu.gaming_run )
        {
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide") == false && this.move_statu != Move_statu.Down)
            {
                //如果撞到障碍物
                if(other.tag == "Obs"){
                    //0.减正能量
                    Game_parameter.energy-=Game_parameter.xml.obstacle_energy;

                    //1. 播动画
                    if (Game_parameter.energy > 0)
                        this.animator.Play("stumble");

                    //播被撞到的声音
                    this.audio_control.other_source.PlayOneShot(audio_control.hit,3f);
                }

                //碰到了诱惑性物体
                else if (other.tag == "tempt") {

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
            }
        }
    }
}
