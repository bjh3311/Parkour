using UnityEngine;
using System.Collections;

public class alpha_test : MonoBehaviour
{
    int count = 0;
    Color color;
	// Use this for initialization
	void Start () {
        print(this.GetComponent<Renderer>().material.color);

        color = this.GetComponent<Renderer>().material.color;
	
	}
	
	// Update is called once per frame
	void Update () {

        count++;
      
        if (count % 40 <= 20)
        {
            this.GetComponent<Renderer>().material.color = new Color(color.r, color.g, color.b, -10000);
        }
        else {
            this.GetComponent<Renderer>().material.color = this.color;
        }
	}
}
