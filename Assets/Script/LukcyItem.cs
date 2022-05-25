using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LukcyItem : MonoBehaviour
{
    RaycastHit hit;
    private int layerObs;
    private void Start()
    {
        layerObs=1<<LayerMask.NameToLayer("Obs");//장애물만 감지
    }
    private void OnEnable()//활성활될때마다 
    {
        StartCoroutine("Check");   
    }

    IEnumerator Check()//장애물 위치에 아이템이 생성되었는지 확인한다
    {
        Debug.Log("adif");
        yield return new WaitForSeconds(1.0f);
        if(Physics.Ray)
        hit=Physics.Raycast(this.transform.position,new Vector3(0,-1,0),10f,layerObs);
        if(hit.collider!=null)//아이템이 장애물이랑 같은 x좌표에 있으면
        {
            Debug.Log(hit.collider.name);
            this.transform.position=new Vector3(this.transform.position.x,30,this.transform.position.z);
        }
    }
    
}
