using UnityEngine;
using System.Collections;

public enum Status//상태 
{
    run_forward,
    kneel,
    stumble,
    Left,
    Right,
    Up,
    Down
}

public class Player : MonoBehaviour
{
    private Animator animator;

    

    public Audio_control audio_control;
    
    /*
    public Game_parameter game_parameter;
    public Rigidbody rb;*/
    
    private float x_speed = 10;   //좌우로 움직이는 속도

    //控制左右移动的变量
    public int current_way = 1;                //왼쪽,중앙, 오른쪽 0，1，2
    public int target_way = 1;                 //왼쪽,중앙, 오른쪽 0，1，2
    private int[] x_offset = { -50, 0, 50 };    //左中右3根道 在x轴上的偏移量
    private float x_move_left = 0;              //x축의 나머지 offset

    //控制上下移动的变量
    public float jump_height;//점프높이
    public float jumpSpeed = 80;
    private float havejump_height = 0;//이미 점프한 높이
    private bool isUp = true;

    //主角位移状态
    public Status stat;//현재 상태

    void Start()
    {
        //初始化管理游戏场景的脚本对象
        //this.env = Camera.main.GetComponent<EnvGenerator>();

        //初始化速度
        // this.speed = this.game_parameter.xml.walk_speed;

        //弹跳高度 
        //this.jump_height = Game_parameter.xml.jump_height;

        //初始化位移状态
        stat = Status.run_forward;//시작 할 때는 run forward로
        animator=this.gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        /*
        if (Game_parameter.game_statu != Game_statu.start_walk && Game_parameter.game_statu != Game_statu.gaming_run && Game_parameter.game_statu != Game_statu.success)
        {
            return;
        }
        */
        /*#region 캐릭터 음성 재생 제어
        if (!this.audio_control.player_source.isPlaying)
        {
            //todo 步行状态，播放步行脚步身
            //if (this.move_statu == Move_statu.walk_forward)
            //{
            //    //this.audio_control.player_source.clip = this.audio_control.foot;
            //    //this.audio_control.player_source.Play();
            //}

            //跑步状态，播放跑步脚步身
            if (this.stat == Status.run_forward)
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
        */

        /*
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
        */


        #region 좌우로 움직임
        //방향 전환하는 구문 , 한번에 순간이동이 아닌 x_speed만큼 딱딱딱 이동하기 위한 구문이다 
        if (this.current_way != this.target_way)
        {
            float move = (this.target_way - this.current_way) * this.x_speed;
            this.x_move_left -= move;
            this.transform.position = new Vector3(transform.position.x + move, transform.position.y, transform.position.z);
            if ((this.x_move_left < 0.5f && (this.target_way - this.current_way > 0)) ||
                (this.x_move_left > -0.5f && (this.target_way - this.current_way < 0)))//다 움직였다면
            {
                this.transform.position = new Vector3(transform.position.x + this.x_move_left, transform.position.y,
                    transform.position.z);

                //变更当前跑道
                this.current_way = this.target_way;//방향을 맞춰준다
                this.stat = Status.run_forward;
                //모든 이동이 끝나야만 Left나 Right상태에서 run_forward상태로 만들어준다
            }
        }
        #endregion

        #region 점프를한다
        if (this.stat == Status.Up)
        {
            float yMove = jumpSpeed * Time.deltaTime;
            // float yMove = 2.5f;
            if (isUp)
            {
                if ((jump_height - havejump_height) < 0.5f || this.transform.position.y > (this.jump_height + 0.5f))//고점에 다다르면
                {
                    this.transform.position = new Vector3(this.transform.position.x, this.jump_height, this.transform.position.z);
                    //this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y + (jump_height - havejump_height), this.transform.position.z);  
                    isUp = false;
                    havejump_height = jump_height;//최대 높이에 도달하였다
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

                    //位移状态
                    this.stat = Status.run_forward;

                    //是否是向上跳
                    isUp = true;

                    return;
                }
                yMove=yMove+1.5f;
                havejump_height -= yMove;
            }
            this.transform.position = new Vector3(this.transform.position.x, havejump_height, this.transform.position.z);
        }
        #endregion

        #region
        if (Input.GetKeyDown(KeyCode.W))//점프
        {
            this.move_up_animation();
        }
        else if (Input.GetKey(KeyCode.S))//슬라이드는 누르는동안 계속 실행
        {
            //run상태일 때만 slide를 할 수 있다.
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run")&& this.stat == Status.run_forward)
            {
                
                this.animator.SetBool("isSlide",true);
                this.audio_control.player_source.clip=this.audio_control.slide;
                this.audio_control.player_source.loop=true;//슬라이드 하는동안엔 계속 소리가 들려야한다
                this.audio_control.player_source.Play();
            }
        }
        else if(Input.GetKeyUp(KeyCode.S))//슬라이드버튼을 떼어 냈을 때
        {
            //slide 상태일 때만 작동
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide")&& this.stat == Status.Down)
            {
                this.animator.SetBool("isSlide",false);
                this.audio_control.player_source.clip=null;
                this.audio_control.player_source.loop=false;//슬라이드가 끝나면 loop를 꺼준다
            }
        }
        else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))//왼쪽
        {
            this.move_left_animation();
        }
        else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))//오른쪽
        {
            this.move_right_animation();
        }
        #endregion


        #region 누워있을때의 상태변환 함수
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide"))
        {
            //位移状态
            this.stat = Status.Down;
        }
        else if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") && this.stat == Status.Down)
        {
            this.stat = Status.run_forward;
        }
        #endregion
    }

    public void move_left_animation()//왼쪽으로 가는 함수
    {

        if (stat!= Status.run_forward)//달리고 있을때만 왼쪽으로 갈 수 있다
        {
            return;
        }
        if(current_way==0)//가장 왼쪽에 붙어있으면 종료시킨다
        {
            return;
        }
        if (this.current_way != this.target_way)//target에 도착한것이 아니면 종료시킨다
        {
            return;
        }
        /*
        GameObject gebi = GameObject.FindGameObjectWithTag("gebi");
        if (gebi != null)
        {
            float gebi_z = gebi.transform.position.z;

            if (Game_parameter.distance > (gebi_z - 3000 + 300) &&
                Game_parameter.distance < (gebi_z - 3000 + 1000))
                return;
        }
        */
        //如果左右移动中,就直接return 
        //改变跑道
        this.target_way--;//왼쪽으로 가는거니 target_way를 하나 빼준다
        this.x_move_left = this.x_offset[0];

        animator.Play("run_left");//한번만 실행시켜준다

        
        this.audio_control.player_source.clip=this.audio_control.left_right;
        this.audio_control.player_source.Play();
        
        this.stat = Status.Left;
    }

    public void move_right_animation()//오른쪽으로 가는 함수
    {
        /* 게임상태가 실행중이 아니라면, 즉 GameOver거나 등등 이면 실행시키지 않는다
        if (Game_parameter.game_statu != Game_statu.gaming_run)
            return;
        */
        if (stat!= Status.run_forward)//달리고 있을때만 오른쪽으로 갈 수 있다
        {
            return;
        }
        if(current_way==2)//가장 오른쪽에 붙어있으면 종료시킨다
        {
            return;
        }
        if (this.current_way != this.target_way)//target에 도착이 끝나기전에는 못 바꾼다
        {
            return;
        }

        //오른쪽턴,왼쪽턴에 있으면 움직이면 안된다 
        /*GameObject gebi = GameObject.FindGameObjectWithTag("gebi");
        if (gebi != null)
        {
            float gebi_z = gebi.transform.position.z;

            if (Game_parameter.distance > (gebi_z - 3000 + 300) &&
                Game_parameter.distance < (gebi_z - 3000 + 1000))
                return;
        }*/
        //오른쪽으로 가는것이니 target_way를 ++해준다
        this.target_way++;
        this.x_move_left = this.x_offset[2];

        //오른쪽으로 가는 애니메이션을 한번만 실행시켜준다
        this.animator.Play("run_right");

        this.audio_control.player_source.clip=this.audio_control.left_right;
        this.audio_control.player_source.Play();

        //상태를 Right로 만들어준다
        this.stat = Status.Right;
    }

    //점프하는 함수
    public void move_up_animation()
    {
        //run상태일 때만 점프를 할 수 있다
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") && this.stat == Status.run_forward)
        {
            //점프 모션을 한번 취한다
            this.animator.Play("jump");
            this.audio_control.player_source.clip=this.audio_control.jump;
            this.audio_control.player_source.Play();
            this.stat = Status.Up;
            //상태를 Up으로 바꿔준다
        }
    }

    //变道的函数
    /*
    public void change_runway(int index)
    {

        //如果左右移动中,就直接return 
        if (this.current_way != this.target_way || this.stat != Status.run_forward || index == this.current_way)
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
    */
}
