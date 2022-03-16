using UnityEngine;
using System.Collections;


public class EnvGenerator : MonoBehaviour {


    public Forest forest1;
    public Forest forest2;
    public GameObject[] forests;

    public void GenerateForest()
    {
        //加完之后 表示要创建的跑道的索引
        Game_parameter.runway_count++;

        //创建普通的跑道
        if (Game_parameter.runway_count <Game_parameter.xml.runaway_amount-1) {
            int type = Random.Range(0, 3);

            GameObject newForest = GameObject.Instantiate(forests[type],
                new Vector3(0, 0, (Game_parameter.runway_count) * 3000), Quaternion.Euler(0, 180, 0)) as GameObject;

            forest1 = forest2;
            forest2 = newForest.GetComponent<Forest>();
        }

        //创建隔壁岔路场景
        else if (Game_parameter.runway_count == Game_parameter.xml.runaway_amount - 1) {

            GameObject newForest = GameObject.Instantiate(forests[forests.Length - 2],
               new Vector3(0, 0, (Game_parameter.runway_count) * 3000), Quaternion.Euler(0, 0, 0)) as GameObject;

            forest1 = forest2;
            forest2 = newForest.GetComponent<Forest>();
        }


        //创建终点跑道
        else if (Game_parameter.runway_count == Game_parameter.xml.runaway_amount)
        {
            float z = (Game_parameter.runway_count - 1) * 3000 + 1508;

            GameObject newForest = GameObject.Instantiate(forests[forests.Length - 1],
                new Vector3(0, 0, (Game_parameter.runway_count) * 3000), Quaternion.Euler(0, 180, 0)) as GameObject;

            forest1 = forest2;
            forest2 = newForest.GetComponent<Forest>();
        }

        //进入了终点跑道,不再创建跑道，修改游戏状态 
        else if (Game_parameter.runway_count == Game_parameter.xml.runaway_amount + 1)
        {
            forest1 = forest2;
        }

        //跑过了终点场景，直接切换到游戏结束场景
        else if (Game_parameter.runway_count == Game_parameter.xml.runaway_amount + 2)
        {
            //Application.LoadLevel("game_over");
        }
    }
}