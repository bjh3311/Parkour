using UnityEngine;
using System.Collections;


//枚举 主角的位移状态
public enum Move_statu
{
    walk_forward,
    run_forward,
    kneel,
    stumble,
    Left,
    Right,
    Up,
    Down
}

public class Player_control : MonoBehaviour
{
    public Animator animator;
    public Rigidbody rigibody;
    public Audio_control audio_control;
    public Game_parameter game_parameter;
    public float speed;
    private float x_speed = 10;                       //x轴上左右移动的速度

    private EnvGenerator env;                   //管理游戏场景的脚本对象

    //控制左右移动的变量
    public int current_way = 1;                //表示当前道路，从左到右分别是 0，1，2
    public int target_way = 1;                 //表示要切换到的道路，从左到右分别是 0，1，2
    private int[] x_offset = { -30, 0, 30 };    //左中右3根道 在x轴上的偏移量
    private float x_move_left = 0;              //x轴上的剩余偏移量

    //控制上下移动的变量
    public float jump_height;
    public float jumpSpeed = 80;
    private float havejump_height = 0;
    private bool isUp = true;

    //主角位移状态
    public Move_statu move_statu;

    void Start()
    {
        //初始化管理游戏场景的脚本对象
        this.env = Camera.main.GetComponent<EnvGenerator>();

        //初始化速度
        // this.speed = this.game_parameter.xml.walk_speed;

        //弹跳高度 
        this.jump_height = Game_parameter.xml.jump_height;

        //初始化位移状态
        this.move_statu = Move_statu.run_forward;
    }

    // Update is called once per frame
    void Update()
    {

        if (Game_parameter.game_statu != Game_statu.start_walk && Game_parameter.game_statu != Game_statu.gaming_run && Game_parameter.game_statu != Game_statu.success)
            return;

        #region 控制人物声音的播放
        if (!this.audio_control.player_source.isPlaying)
        {
            //todo 步行状态，播放步行脚步身
            //if (this.move_statu == Move_statu.walk_forward)
            //{
            //    //this.audio_control.player_source.clip = this.audio_control.foot;
            //    //this.audio_control.player_source.Play();
            //}

            //跑步状态，播放跑步脚步身
            if (this.move_statu == Move_statu.run_forward)
            {

                //this.audio_control.player_source.clip = this.audio_control.foot;
                //this.audio_control.player_source.Play();

            }
            //其他情况就暂停
            else
            {
                // this.audio_control.player_source.Pause();
            }

        }
        #endregion


        #region 控制游戏主角向前的移动
        //让角色一直向前运动
        Vector3 taget_point = env.forest1.GetNextTargetPoint();
        taget_point = new Vector3(taget_point.x + this.x_offset[this.current_way], taget_point.y, taget_point.z);
        Vector3 dir = taget_point - transform.position;
        Vector3 moveDir = dir.normalized * this.speed * Time.deltaTime;
        this.transform.position += moveDir;
        this.transform.rotation = Quaternion.LookRotation(new Vector3(taget_point.x, transform.position.y, taget_point.z) - transform.position, Vector3.up);

        this.transform.LookAt(new Vector3(taget_point.x, this.transform.position.y, taget_point.z));
        #endregion


        #region 控制游戏主角左右的移动
        //如果当前道路与目标道路不一样，就改变道路
        if (this.current_way != this.target_way)
        {

            float move = (this.target_way - this.current_way) * this.x_speed;

            this.x_move_left -= move;

            this.transform.position = new Vector3(transform.position.x + move, transform.position.y, transform.position.z);

            if ((this.x_move_left < 0.5f && (this.target_way - this.current_way > 0)) ||
                (this.x_move_left > -0.5f && (this.target_way - this.current_way < 0)))
            {
                this.transform.position = new Vector3(transform.position.x + this.x_move_left, transform.position.y,
                    transform.position.z);

                //变更当前跑道
                this.current_way = this.target_way;
                Game_parameter.current_way = this.current_way;

                this.x_move_left = 0;

                //位移状态
                this.move_statu = Move_statu.run_forward;
            }
        }
        #endregion


        #region 控制游戏主角的跳跃
        if (this.move_statu == Move_statu.Up)
        {
            float yMove = jumpSpeed * Time.deltaTime;
            // float yMove = 2.5f;
            if (isUp)
            {
                if ((jump_height - havejump_height) < 0.5f || this.transform.position.y > (this.jump_height + 0.5f))
                {
                    this.transform.position = new Vector3(this.transform.position.x, this.jump_height, this.transform.position.z);
                    //this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y + (jump_height - havejump_height), this.transform.position.z);  
                    isUp = false;
                    havejump_height = jump_height;//已经达到最大高度，将高度赋值
                    this.transform.position = new Vector3(transform.position.x, jump_height, transform.position.z);
                    //this.transform.position = new Vector3(this.transform.position.x, havejump_height, this.transform.position.z);

                    return;
                }

                havejump_height += yMove;
            }
            else
            {
                if (this.transform.position.y < -0.5f)
                {
                    this.transform.position = new Vector3(this.transform.position.x, 0, this.transform.position.z);

                    havejump_height = 0;//已经达到最小高度，将高度赋值


                    //播放落地的脚步声
                    this.audio_control.player_source.PlayOneShot(this.audio_control.foot_land, 1f);

                    //位移状态
                    this.move_statu = Move_statu.run_forward;

                    //是否是向上跳
                    isUp = true;

                    return;
                }
                havejump_height -= yMove;
            }

            this.transform.position = new Vector3(this.transform.position.x, havejump_height, this.transform.position.z);
        }
        #endregion


        #region 按下上下左右键


        //方向键上
        if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
        {
            this.move_up_animation();
        }
        //方向键下
        else if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
        {
            this.move_down_animation();

        }
        //方向键左
        else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
        {

            this.move_left_animation();
        }
        //方向键右
        else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
        {
            this.move_right_animation();
        }


        #endregion


        #region 位移状态由动画决定
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide"))
        {
            //位移状态
            this.move_statu = Move_statu.Down;
        }
        else if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") && this.move_statu == Move_statu.Down)
        {
            this.move_statu = Move_statu.run_forward;
        }
        #endregion
    }

    //向左移动，播动画
    public void move_left_animation()
    {

        //如果不是处于游戏奔跑状态 就直接返回
        if (Game_parameter.game_statu != Game_statu.gaming_run)
            return;

        //如果处于转弯那一段 就不左右移动
        GameObject gebi = GameObject.FindGameObjectWithTag("gebi");
        if (gebi != null)
        {
            float gebi_z = gebi.transform.position.z;

            if (Game_parameter.distance > (gebi_z - 3000 + 300) &&
                Game_parameter.distance < (gebi_z - 3000 + 1000))
                return;
        }


        //如果左右移动中,就直接return 
        if (this.current_way != this.target_way || this.current_way == 0 || this.move_statu != Move_statu.run_forward)
            return;

        //改变跑道
        this.target_way--;
        this.x_move_left = this.x_offset[0];

        //播放动画
        this.animator.Play("run_left");

        //播声音
        this.audio_control.player_source.PlayOneShot(this.audio_control.left_right, 3f);
        //this.audio_control.player_source.PlayOneShot(this.audio_control.foot_land, 0.5f);

        //位移状态
        this.move_statu = Move_statu.Left;
    }

    //向右移动，播动画
    public void move_right_animation()
    {
        //如果不是处于游戏奔跑状态 就直接返回
        if (Game_parameter.game_statu != Game_statu.gaming_run)
            return;

        //如果处于转弯那一段 就不左右移动
        GameObject gebi = GameObject.FindGameObjectWithTag("gebi");
        if (gebi != null)
        {
            float gebi_z = gebi.transform.position.z;

            if (Game_parameter.distance > (gebi_z - 3000 + 300) &&
                Game_parameter.distance < (gebi_z - 3000 + 1000))
                return;
        }

        //如果左右移动中,或者不是处于跑动动画 就直接return    this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") == false
        if (this.current_way != this.target_way || this.current_way == 2 || this.move_statu != Move_statu.run_forward)
            return;

        //改变跑道
        this.target_way++;
        this.x_move_left = this.x_offset[2];

        //播放动画
        this.animator.Play("run_right");

        //播声音
        this.audio_control.player_source.PlayOneShot(this.audio_control.left_right, 3f);
        //this.audio_control.player_source.PlayOneShot(this.audio_control.foot_land, 0.5f);

        //位移状态
        this.move_statu = Move_statu.Right;
    }

    //向上移动，播动画
    public void move_up_animation()
    {

        if (Game_parameter.game_statu != Game_statu.gaming_run)
            return;

        //如果游戏物体处于奔跑状态, 给游戏主角一个向上的 ，播放跳跃动画
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run")
            && this.move_statu == Move_statu.run_forward)
        {
            //播动画
            this.animator.Play("jump");

            //播声音
            this.audio_control.player_source.PlayOneShot(this.audio_control.jump, 3f);
            // this.audio_control.player_source.PlayOneShot(this.audio_control.foot_land, 0.5f);

            //位移状态
            this.move_statu = Move_statu.Up;
        }
    }

    //向下移动，播动画
    public void move_down_animation()
    {
        if (Game_parameter.game_statu != Game_statu.gaming_run)
            return;

        //如果游戏物体处于奔跑状态, 播放下滑动画动画
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run")
           && this.move_statu == Move_statu.run_forward)
        {
            //播放滑动动画
            this.animator.Play("slide");

            //播声音
            this.audio_control.player_source.PlayOneShot(this.audio_control.slide, 3f);
            //this.audio_control.player_source.PlayOneShot(this.audio_control.foot_land, 0.5f);
        }
    }

    //变道的函数
    public void change_runway(int index)
    {

        //如果左右移动中,就直接return 
        if (this.current_way != this.target_way || this.move_statu != Move_statu.run_forward || index == this.current_way)
            return;

        //右移
        if (index > this.current_way)
        {
            this.move_right_animation();
        }

        //左移
        if (index < this.current_way)
        {
            this.move_left_animation();
        }
    }
}
