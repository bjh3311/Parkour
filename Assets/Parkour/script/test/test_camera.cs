using UnityEngine;
using System.Collections;

public class test_camera : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        #region 按下上下左右键
        //方向键上
        if (Input.GetKey(KeyCode.UpArrow))
        {
            float z = this.transform.position.z - 0.1f;
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, z);
        }
        //方向键下
        else if (Input.GetKey(KeyCode.DownArrow))
        {
            float z = this.transform.position.z + 0.1f;
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, z);

        }
        //方向键左
        else if (Input.GetKey(KeyCode.LeftArrow))
        {

            float x = this.transform.position.x+ 0.1f;
            this.transform.position = new Vector3(x, this.transform.position.y, this.transform.position.z);
        }
        //方向键右
        else if (Input.GetKey(KeyCode.RightArrow))
        {
            float x = this.transform.position.x - 0.1f;
            this.transform.position = new Vector3(x, this.transform.position.y, this.transform.position.z);
        }


        //空格键用于测试
        else if (Input.GetKeyDown(KeyCode.Space))
        {
            //KinectManager manager = KinectManager.Instance;
            //print(manager.get_tacked_count()); 
        }

        #endregion
	}
}
