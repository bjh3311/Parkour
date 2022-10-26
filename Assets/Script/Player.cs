using UnityEngine;
using System.Collections;

public enum Status//상태 
{
    run_forward,
    kneel,
    Left,
    Right,
    Up,
    Down
}

public class Player : MonoBehaviour
{
    private Animator animator;
    public Audio_control audio_control;

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
    public Status stat;//현재 상태

    void Start()
    {
        stat = Status.run_forward;//시작 할 때는 run forward로
        animator=this.gameObject.GetComponent<Animator>();
    }

    void Update()
    {
        if(Time.timeScale==0)//정지하면 다 멈춘다
        {
            return;
        }
        this.transform.position=new Vector3(transform.position.x,transform.position.y,transform.position.z+GameManager.instance.mapSpeed*Time.deltaTime);
        //player는 뭐가 됐든 계속 앞으로 나아간다.
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
                    isUp = false;
                    havejump_height = jump_height;//최대 높이에 도달하였다
                    this.transform.position = new Vector3(transform.position.x, jump_height, this.transform.position.z);
                    return;
                }
                havejump_height += yMove;
            }
            else
            {
                if (this.transform.position.y < -0.5f)
                {
                    this.transform.position = new Vector3(this.transform.position.x, 0, this.transform.position.z);
                    havejump_height = 0;//땅바닥에 닿으면 
                    this.stat = Status.run_forward;
                    isUp = true;
                    return;
                }
                yMove=yMove+1.5f;
                havejump_height -= yMove;
            }
            this.transform.position = new Vector3(this.transform.position.x, havejump_height, this.transform.position.z);
        }
        #endregion

        #region 누워있을때의 상태변환 함수
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide"))
        {
            
            this.stat = Status.Down;
        }
        else if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") && this.stat == Status.Down)
        {
            this.stat = Status.run_forward;
        }
        #endregion
    }
    public void Slide_down()//슬라이드 버튼 누르는동안
    {
        //run상태일 때만 slide를 할 수 있다.
        if ((this.animator.GetCurrentAnimatorStateInfo(0).IsName("run")&& this.stat == Status.run_forward)||
        this.animator.GetCurrentAnimatorStateInfo(0).IsName("stumble"))//피격 애니메이션 도중에도 Slide를 할 수 있어야 한다
        {       
            this.animator.Play("slide");
            this.animator.SetBool("isSlide",true);
            this.audio_control.player_source.clip=this.audio_control.slide;
            this.audio_control.player_source.loop=true;//슬라이드 하는동안엔 계속 소리가 들려야한다
            this.audio_control.player_source.Play();
        }
    }
    public void Slide_Up()//슬라이드 버튼 떼면
    {
        //slide 상태일 때만 작동
        if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("slide")&& this.stat == Status.Down)
        {
            this.animator.SetBool("isSlide",false);
            this.audio_control.player_source.clip=null;
            this.audio_control.player_source.loop=false;//슬라이드가 끝나면 loop를 꺼준다
        }
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
        if ((this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") && this.stat == Status.run_forward)||
        this.animator.GetCurrentAnimatorStateInfo(0).IsName("stumble"))//피격중에도 점프를 할 수 있게한다
        {
            //점프 모션을 한번 취한다
            this.animator.Play("jump");
            this.audio_control.player_source.clip=this.audio_control.jump;
            this.audio_control.player_source.Play();
            this.stat = Status.Up;
            //상태를 Up으로 바꿔준다
        }
    }
}
