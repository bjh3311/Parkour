using UnityEngine;
using System.Collections;


//定义一个游戏状态的枚举
public enum Game_statu
{
    start_walk,
    gaming_run,
    fail_kneel,
    success
}

public class Game_parameter : MonoBehaviour
{

    public static XML xml;                          //对应的xml文件
    public static Game_statu game_statu;            //游戏进行中的4种状态
    public static int energy;                       //正能量的值
    public static ArrayList GUI_texture_move_list;  //存放碰到到精灵物体的动画的列表
    public static ArrayList blink_list;             //存放减血屏幕闪烁动画

    public static float unit;                       //GUI 单位长度
    public static int runway_count = 2;             //表示有现在有多少个跑道场景,出来的时候 就有两个
    public static float distance = 0;               //游戏主角的奔跑距离 
    public static int current_way = 1;                //当前为几号跑道

    public Audio_control audio_control;    //控制声音播放的对象
    public Transform player_tranform;      //游戏主角的位置信息
    public Player_control player_control;  //控制游戏主角的脚本对象
    public Animator animator;              //游戏主角的动画控制器
    public bool is_choose = false;                 //是否进行选择        

    // Use this for initialization
    void Awake()
    {

        //实例化xml对象
        Game_parameter.xml = new XML();

        //初始化能量值
        Game_parameter.energy = Game_parameter.xml.init_energy;

        //初始化游戏进行的状态,速度为步行速度
        Game_parameter.game_statu = Game_statu.start_walk;

        //游戏主角初始化速度
        this.player_control.speed = Game_parameter.xml.walk_speed;

        //实例化存放碰到到精灵物体的动画的列表
        if (Game_parameter.GUI_texture_move_list != null)
        {
            Game_parameter.GUI_texture_move_list.Clear();
        }
        else
        {
            Game_parameter.GUI_texture_move_list = new ArrayList();
        }

        //实例化存放减血屏幕闪烁动画的列表
        if (Game_parameter.blink_list != null)
        {
            Game_parameter.blink_list.Clear();
        }
        else
        {
            Game_parameter.blink_list = new ArrayList();
        }


        //已经生成了多少跑道
        Game_parameter.runway_count = 2;

        //玩家已经奔跑的距离
        Game_parameter.distance = 0;

        //当前跑道编号
        Game_parameter.current_way = 1;
    }

    void Start()
    {
        //初始化GUI单位长度
        Game_parameter.unit = (float)Camera.main.pixelWidth / (float)700;
    }

    //游戏逻辑
    void Update()
    {

        //获取玩家当前移动奔跑距离
        Game_parameter.distance = this.player_tranform.position.z;

        #region 处于 开始行走状态时
        //处于 开始行走状态时
        if (Game_parameter.game_statu == Game_statu.start_walk)
        {
            //定义速度
            this.player_control.speed = Game_parameter.xml.walk_speed;

            //超过了 行走距离
            if (Game_parameter.distance > Game_parameter.xml.walk_distance)
            {
                //0.修改成跑动画 
                this.animator.SetBool("walk_run", true);
                this.animator.SetBool("run_walk", false);

                //1.修改游戏状态
                Game_parameter.game_statu = Game_statu.gaming_run;

                //2.修改位移状态
                this.player_control.move_statu = Move_statu.run_forward;
            }
        }
        #endregion


        #region 处于奔跑状态时
        else if (Game_parameter.game_statu == Game_statu.gaming_run)
        {

            //不同距离 速度不一样
            this.player_control.speed = Game_parameter.xml.run_speed + Game_parameter.xml.add_speed * ((int)(Game_parameter.runway_count - 2) / 3);


            //如果玩家处于岔路口，对路径进行选择
            #region 
            if (distance > (xml.runaway_amount - 2) * 3000 + 100 && distance < (xml.runaway_amount - 2) * 3000 + 250)
            {
                if (is_choose == false)
                {
                    //运行跑步动画，还原速度
                    //this.player_control.speed = 0;
                    //this.animator.SetBool("walk_run", false);
                    //this.animator.SetBool("run_walk", true);

                    if (Random.Range(0, 2) == 0)
                        this.turn(true);
                    else
                        this.turn(false);
                }

            }
            #endregion


            //判断有没有跑道终点
            #region
            if (Game_parameter.distance > (Game_parameter.xml.runaway_amount - 1) * 3000)
            {
                //修改游戏状态 为成功
                Game_parameter.game_statu = Game_statu.success;

                //播放游戏胜利的声音
                this.audio_control.other_source.PlayOneShot(audio_control.win, 0.8f);

                //把背景音乐改为水墨风背景音乐
                this.audio_control.bg_source.clip = audio_control.win_bg;
                this.audio_control.bg_source.Play();
            }
            #endregion


            //判断正能量有没有用完
            #region MyRegion
            if (Game_parameter.energy <= 0)
            {
                //修改运动状态--走到跪
                this.animator.SetBool("run_walk", true);
                this.animator.SetBool("walk_run", false);
                this.animator.SetBool("walk_fail", true);

                //修改位移状态状态
                this.player_control.move_statu = Move_statu.walk_forward;

                //修改游戏状态 为失败
                Game_parameter.game_statu = Game_statu.fail_kneel;

                //把背景音乐停止掉,播放游戏失败的声音
                this.audio_control.other_source.PlayOneShot(audio_control.lose, 1f);
                this.audio_control.bg_source.Stop();

                //destory掉 所有身后的障碍物
                GameObject[] obstacles_array = GameObject.FindGameObjectsWithTag("Obs");
                for (int i = 0; i < obstacles_array.Length; i++)
                {
                    Destroy(obstacles_array[i]);
                }

                //destory掉 所有能量物体
                #region MyRegion
                GameObject[] mei_array = GameObject.FindGameObjectsWithTag("mei");
                for (int i = 0; i < mei_array.Length; i++)
                {
                    Destroy(mei_array[i]);
                }

                GameObject[] lan_array = GameObject.FindGameObjectsWithTag("lan");
                for (int i = 0; i < lan_array.Length; i++)
                {
                    Destroy(lan_array[i]);
                }

                GameObject[] zhu_array = GameObject.FindGameObjectsWithTag("zhu");
                for (int i = 0; i < zhu_array.Length; i++)
                {
                    Destroy(zhu_array[i]);
                }

                GameObject[] ju_array = GameObject.FindGameObjectsWithTag("ju");
                for (int i = 0; i < ju_array.Length; i++)
                {
                    Destroy(ju_array[i]);
                }
                #endregion

                //destory掉所有诱惑物体
                GameObject[] tempt_array = GameObject.FindGameObjectsWithTag("tempt");
                for (int i = 0; i < tempt_array.Length; i++)
                {
                    Destroy(tempt_array[i]);
                }


                //正能量物体飞舞动画 都移除掉
                Game_parameter.GUI_texture_move_list.Clear();
                #endregion

            }
        }
        #endregion


        #region 失败状态
        else if (Game_parameter.game_statu == Game_statu.fail_kneel)
        {

            //定义速度
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("walk"))
            {
                this.player_control.speed = Game_parameter.xml.walk_speed;
            }
            else
            {
                this.player_control.speed = 0;
            }


            //判断下跪的动画有没有播完 如果播完 就切换到开始场景
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("null") == true)
            {
                //todo 切换到开始场景
                //this.Awake();
                //Application.LoadLevel("game_start");
            }

        }
        #endregion


        #region 跑到终点状态
        else if (Game_parameter.game_statu == Game_statu.success)
        {

            //控制速度
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run"))
                this.player_control.speed = Game_parameter.xml.run_speed;
            else
                this.player_control.speed = Game_parameter.xml.walk_speed;


            GameObject end_house = GameObject.FindGameObjectWithTag("end");

            if (end_house != null)
            {
                WayPoints wayPoints = end_house.transform.Find("waypoints").GetComponent<WayPoints>();//获取路径

                float end_z = wayPoints.points[wayPoints.points.Length - 1].position.z;

                //到达终点已经跑了一截，就让他开始走
                if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run"))
                {
                    //修改动画状态---为走
                    this.animator.SetBool("run_walk", true);
                    this.animator.SetBool("walk_run", false);

                    //修改游戏主角的位移状态
                    this.player_control.move_statu = Move_statu.walk_forward;
                }

                //判断玩家到了最终那个距离就切换到结束场景
                else if (Game_parameter.distance > (end_z - 1))
                {
                    //切换场景到 结束场景
                    //this.Awake();
                    //Application.LoadLevel("game_over");
                }

            }



        }
        #endregion

    }

    //转弯的函数
    public void turn(bool left_or_right)
    {
        if (distance > (xml.runaway_amount - 2) * 3000 + 100 && distance < (xml.runaway_amount - 2) * 3000 + 250)
        {
            if (is_choose == false)
            {
                //设置waypoints
                GameObject gebi = GameObject.FindGameObjectWithTag("gebi");
                Forest forest = gebi.GetComponent<Forest>();

                //设置house的x轴 位置
                GameObject house = GameObject.FindGameObjectWithTag("end");

                //走左边
                if (left_or_right == true)
                {
                    forest.wayPoints = gebi.transform.Find("waypoints1").GetComponent<WayPoints>();//获取路径
                    house.transform.position = new Vector3(-1840, 0, house.transform.position.z);
                }

                //走右边
                else
                {
                    forest.wayPoints = gebi.transform.Find("waypoints").GetComponent<WayPoints>();//获取路径
                    house.transform.position = new Vector3(1830, 0, house.transform.position.z);
                }

                //运行跑步动画，还原速度
                this.player_control.speed = Game_parameter.xml.run_speed + Game_parameter.xml.add_speed * ((int)(Game_parameter.runway_count - 2) / 3);
                this.animator.SetBool("walk_run", true);
                this.animator.SetBool("run_walk", false);

                //is_choose=true,已经选过了
                is_choose = true;
            }
        }
    }
}