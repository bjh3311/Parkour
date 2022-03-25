using UnityEngine;
using System.Collections;

public class CameraChase : MonoBehaviour
{

    //public Animator animator;

    public Transform player_transform;



    //奔跑的时摄像机 跟随的参数
    public float run_distance_away;
    public float run_distance_up;
    public float run_speed;

    //무릎을 꿇을때 카메라 변수
    /*
    public float kneel_distance_away;
    public float kneel_distance_up;
    public float kneel_speed;
    */

    private bool is_rotation = false;

    private Vector3 targetPosition;

    private GameObject MCamera;


    void Start()
    {
        /*
        this.player_transform = GameObject.Find("Player").transform;
        MCamera = GameObject.Find("Main Camera");
        */
    }

    // Update is called once per frame
    void LateUpdate()
    {
        //预热走
        /*if (Game_parameter.game_statu == Game_statu.start_walk)
        {

            targetPosition = player_transform.position + Vector3.up * walk_distance_up + player_transform.forward * walk_distance_away;

            transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * walk_speed);

            transform.LookAt(player_transform);
        }*/

        //游戏跑
        //if (Game_parameter.game_statu == Game_statu.gaming_run)
        {

            targetPosition = player_transform.position + Vector3.up * run_distance_up + player_transform.forward * run_distance_away;

            // targetPosition = new Vector3(targetPosition.x, 50, targetPosition.z);

            transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * run_speed);
            //transform.rotation = Quaternion.LookRotation(new Vector3(player_transform.position.x, transform.position.y-20f, player_transform.position.z) - transform.position, Vector3.up);
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(new Vector3(player_transform.position.x, transform.position.y - 20f, player_transform.position.z)
                - transform.position), 1 * Time.deltaTime);
           //transform.LookAt(player_transform);
            //transform.rotation = Quaternion.LookRotation(new Vector3(transform.rotation.x, player_transform.rotation.y, transform.rotation.z));
     
           //transform.Rotate(new Vector3(100, 100, 100)); 
             // transform.rotation = Quaternion 
           //transform.rotation=Quaternion.AngleAxis(0, 45, 0);    
            //transform.Rotate(new Vector3(transform.rotation.x, 360f, 1.5f));
        }


        //失败跪
        /*
        else if (Game_parameter.game_statu == Game_statu.fail_kneel)
        {
            targetPosition = player_transform.position + Vector3.up * kneel_distance_up + player_transform.forward * kneel_distance_away;

            transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * kneel_speed);

            transform.LookAt(player_transform);
        }
        */


        //成功走
        /*
        else if (Game_parameter.game_statu == Game_statu.success)
        {

            //最后场景 跑的时候
            if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("run") == true)
            {
                targetPosition = player_transform.position + Vector3.up * end_run_distance_up + player_transform.forward * end_run_distance_away;
                transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * end_run_speed);
            }
            //走的时候
            else if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("walk") == true)
            {
                transform.LookAt(player_transform);
                if(is_rotation == false)
                {
                    Hashtable parameters = new Hashtable();
                    parameters.Add("x", transform.position.x + 280);
                    parameters.Add("y", transform.position.y + 150);
                    parameters.Add("z", transform.position.z + 300);
                    parameters.Add("time", 8);
                    //parameters.Add("easetype", iTween.EaseType.easeOutSine);
                    //iTween.MoveTo(MCamera, parameters);
                    is_rotation = true;

                }
            }
        }
        */
      
    }
}
