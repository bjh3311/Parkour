using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapMove : MonoBehaviour
{
    private void Update() 
    {
        //mapSpeed만큼 -z축으로 이동
        transform.Translate(0,0,-GameManager.instance.mapSpeed*Time.deltaTime);//z축으로 이동
    }
}