using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapMove : MonoBehaviour
{
    public float mapSpeed=0f;

    private void Update() 
    {
        //mapSpeed만큼 -z축으로 이동
        transform.Translate(0,0,-mapSpeed*Time.deltaTime);//z축으로 이동
        if(this.gameObject.transform.position.z<=-2200f)//무한 배경을위해 뒤로 보내준다
        {
            this.gameObject.transform.position=new Vector3(0,0,9800f);
        }
    }
}