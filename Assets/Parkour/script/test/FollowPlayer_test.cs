using UnityEngine;
using System.Collections;

public class FollowPlayer_test : MonoBehaviour
{

    //private Transform player;

    //private Vector3 offset = Vector3.zero;
    //private bool haveChangeOffset = false;
    //public float moveSpeed = 4;



    public float distanceAway;          // distance from the back of the craft  

    public float distanceUp;            // distance above the craft  

    public float smooth;             // how smooth the camera movement is  



    private Vector3 targetPosition;     // the position the camera is trying to be in  


    Transform follow;

    //void Awake() {
    //    this.player = GameObject.Find("Player").transform;
    //    offset = transform.position - player.position;
    //}

    void Start()
    {

        follow = GameObject.Find("shusheng").transform;

    }



    void LateUpdate()
    {

        targetPosition = follow.position + Vector3.up * distanceUp + follow.forward * distanceAway;

        transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * smooth);

        print("=========>>>>>>>>>>");
        transform.LookAt(follow);
    }


}
