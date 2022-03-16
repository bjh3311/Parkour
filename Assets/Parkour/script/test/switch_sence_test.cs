using UnityEngine;
using System.Collections;


public class switch_sence_test : MonoBehaviour {

 
	// Use this for initialization
	void Start () {
      
    

	}
	
	// Update is called once per frame
	void Update () {

       
        //按下空格键
        if (Input.GetKeyDown(KeyCode.Space))
        {

            Destroy(GameObject.Find("kinect_manger"));

            Application.LoadLevel("game_start");
        }
	}
}
