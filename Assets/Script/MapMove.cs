using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapMove : MonoBehaviour
{
    public float mapSpeed=0f;
    public Transform prev_map;//이전맵보다 3000만큼 뒤에 
    private void Update() 
    {
        //mapSpeed만큼 -z축으로 이동
        transform.Translate(0,0,-mapSpeed*Time.deltaTime);//z축으로 이동
        if(this.gameObject.transform.position.z<=-2200f)//무한 배경을위해 뒤로 보내준다
        {
            this.gameObject.transform.position=prev_map.position+new Vector3(0,0,3000f);
            this.transform.GetChild(0).gameObject.SetActive(false);
            this.transform.GetChild(1).gameObject.SetActive(false);
            this.transform.GetChild(2).gameObject.SetActive(false);
            this.transform.GetChild(3).gameObject.SetActive(false);
            this.transform.GetChild(Random.Range(0,4)).gameObject.SetActive(true);//맵은 계속 랜덤으로 생성되게
        }
        if(this.gameObject.transform.position.z>prev_map.position.z+3000f)//맵 사이사이 벌어짐을 방지해준다
        {
            this.gameObject.transform.position=prev_map.position+new Vector3(0,0,3000f);
        }
    }
}