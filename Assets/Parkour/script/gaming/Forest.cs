using UnityEngine;
using System.Collections;

public class Forest : MonoBehaviour
{

    public float gold_startLength = 50; //每个场景生成能量物体的起始距离
    public float tempt_startLength = 100; //每个场景生成能量物体的起始距离
    public float obstacle_startLength = 5; //每个场景生成障碍物的起始距离
    
    public GameObject[] obstacles;      //障碍物
    public GameObject[] tempts;         //诱惑物体
    public GameObject[] golds;          //能量物体


    private Transform player;
    public WayPoints wayPoints;
    private int targetWayPointIndex;
    private EnvGenerator envGenerator;
    private ArrayList obstacles_positon_list;  //记录障碍物坐标

    //生成障碍物的距离
    private float obstacle_min_distance;
    private float obstacle_max_distance;

    //生成诱惑物体的距离
    private float tempt_min_distance=200;
    private float tempt_max_distance=400;

    //生成能量物体的距离
    private float energy_min_distance;
    private float energy_max_distance;


    // Use this for initialization
    private void Start()
    {
        player = GameObject.Find("Player").transform;//获取player
        wayPoints = transform.Find("waypoints").GetComponent<WayPoints>();//获取路径
        targetWayPointIndex = 1;//player移动目标
        envGenerator = Camera.main.GetComponent<EnvGenerator>();//实例EnvGenerator

        //实例化列表
        obstacles_positon_list = new ArrayList();


        #region 场景的个数不同，生成障碍物的个数不同 
        //场景的个数不同，生成障碍物的个数不同 
        if (Game_parameter.runway_count < 5)
        {
            this.obstacle_min_distance =500;
            this.obstacle_max_distance = 600;
        }
        else if (Game_parameter.runway_count >=5&&Game_parameter.runway_count < 6) {
            this.obstacle_min_distance = 300;
            this.obstacle_max_distance = 500;
        }

        else if (Game_parameter.runway_count >= 6 && Game_parameter.runway_count < 7)
        {
            this.obstacle_min_distance = 400;
            this.obstacle_max_distance = 500;
           
        }
        else
        {
            this.obstacle_min_distance = 400;
            this.obstacle_max_distance = 500;
        }
        #endregion


        #region 场景的个数不同，生成能量物的个数不同
        //场景的个数不同，生成能量物的个数不同 
        if (Game_parameter.runway_count < 4)
        {
            this.energy_min_distance = 1000;
            this.energy_max_distance =1200;
        }
        else if (Game_parameter.runway_count >= 4 && Game_parameter.runway_count < 7)
        {
            this.energy_min_distance = 800;
            this.energy_max_distance = 1000;
        }

        else if (Game_parameter.runway_count >= 7 && Game_parameter.runway_count < 8)
        {
            this.energy_min_distance = 1500;
            this.energy_max_distance = 3000;
        }
        else
        {
            this.energy_min_distance = 1500;
            this.energy_max_distance = 3000;
        }
        #endregion


        #region 场景个数不同，诱惑物体的个数不同
                //场景的个数不同，生成能量物的个数不同 
        if (Game_parameter.runway_count < 4)
        {
            this.tempt_min_distance =3000;
            this.tempt_min_distance =3000;
        }
        else if (Game_parameter.runway_count >= 4 && Game_parameter.runway_count < 7)
        {
            this.tempt_min_distance = 1100;
            this.tempt_min_distance = 1600;
        }

        else if (Game_parameter.runway_count >= 7 && Game_parameter.runway_count < 8)
        {
            this.tempt_min_distance = 1000;
            this.tempt_min_distance = 1600;
        }
        else
        {
            this.tempt_min_distance = 1000;
            this.tempt_min_distance = 1600;
        }
        #endregion


        //todo 如果是岔路，也不生成障碍和正能量物体
        //开始场景和结束场景不添加 障碍物 和能量物体
        if (this.tag != "start" && this.tag != "end" && this.tag != "gebi")
        {
            //生成障碍物
            this.GenerateObstacle();

            //生成诱惑物体
            this.GenerateTempts();

            //生成能力物体
            this.GenerateGolds();
        }
    }

    //生成障碍物
    public void GenerateObstacle()
    {
        float startZ = transform.position.z - 3000;
        float endZ = transform.position.z;
        float z = startZ + obstacle_startLength;

        float[] x_array = { -30, 0, 30, 0, 0};

        while (z < endZ)
        {
            //场景的个数不同，生成障碍物的个数不同 
            z += Random.Range(this.obstacle_min_distance, this.obstacle_max_distance);

            Vector3 obsposition = GetWayPosByZ(z);//获取障碍物坐标

            int obsIndex = Random.Range(0, obstacles.Length);//随机获取一种障碍物

            GameObject go = GameObject.Instantiate(obstacles[obsIndex], obsposition, Quaternion.identity) as GameObject;//创建障碍物

            go.transform.parent = this.transform;

            //如果是石头等不是很大的物体,将其随机摆放到三根道上
            if (obsIndex < 4)
            {
                go.transform.position = new Vector3(obsposition.x + x_array[Random.Range(0, x_array.Length)], obsposition.y, obsposition.z);
            }

            //添加坐标到列表
            this.obstacles_positon_list.Add(obsposition);
        }
    }

    //生成诱惑物体
    public void GenerateTempts()
    {
        float tempt_startZ = transform.position.z - 3000;
        float tempt_endZ = transform.position.z;

        float z = tempt_startZ + tempt_startLength;

        float[] x_array = { -30, 0, 30, 0 };

        while (z < tempt_endZ)
        {
            z += Random.Range(this.tempt_min_distance, this.tempt_max_distance);

            Vector3 tempt_position = GetWayPosByZ(z);//获取障碍物坐标

            tempt_position = new Vector3(tempt_position.x + x_array[Random.Range(0, x_array.Length)], 10, tempt_position.z);
           
            //从列表中获取坐标元素
            for (int i = 0; i < obstacles_positon_list.Count; i++)
            {
                Vector3 v3 = (Vector3)obstacles_positon_list[i];

                if (tempt_position.z < (v3.z + 30) && tempt_position.z > (v3.z - 30))
                {
                    //如果很靠近障碍物 就不生成
                    //tempt_position = new Vector3(v3.x, y_array[1], tempt_position.z);
                    return;
                }
            }

            int tempt_index = Random.Range(0, this.tempts.Length);
            GameObject tempt = GameObject.Instantiate(tempts[tempt_index], tempt_position, Quaternion.identity) as GameObject;//创建小鸟

            tempt.transform.parent = this.transform;

           
        }
    }

    //生成能量物体
    public void GenerateGolds()
    {
        float gold_startZ = transform.position.z - 3000;
        float gold_endZ = transform.position.z;

        float z = gold_startZ + gold_startLength;

        float[] y_array = { 0, 25 };
        float[] x_array = { -30, 0, 30, 0};

        while (z < gold_endZ)
        {
            Vector3 golds_position = GetWayPosByZ(z);//获取障碍物坐标

            golds_position = new Vector3(golds_position.x + x_array[Random.Range(0, x_array.Length)], y_array[0], golds_position.z);
            //从列表中获取坐标元素
            for (int i = 0; i < obstacles_positon_list.Count; i++)
            {
                Vector3 v3 = (Vector3)obstacles_positon_list[i];

                if (golds_position.z < (v3.z + 30) && golds_position.z > (v3.z - 30))
                {
                    golds_position = new Vector3(v3.x, y_array[1], golds_position.z);
                    break;
                }
                else
                {

                }
            }

            int goldIndex = Random.Range(0, golds.Length);
            GameObject glod = GameObject.Instantiate(golds[goldIndex], golds_position, Quaternion.identity) as GameObject;//创建小鸟

            glod.transform.parent = this.transform;

            z += Random.Range(this.energy_min_distance, this.energy_max_distance);
        }
    }

    //获取下一个路径点的坐标
    public Vector3 GetNextTargetPoint()
    {
        float player_x = player.position.x;
        if (Game_parameter.current_way == 0) {
            player_x += 30;
        }
        else if (Game_parameter.current_way ==2)
        {
            player_x -= 30;
        }

        float distance=Mathf.Sqrt(Mathf.Pow((wayPoints.points[targetWayPointIndex].position.z - player.position.z),2)+
            Mathf.Pow((player_x - wayPoints.points[targetWayPointIndex].position.x), 2));
       
        //if ((wayPoints.points[targetWayPointIndex].position.z - player.position.z) < 10)
        if(distance<10)
        {
            targetWayPointIndex++;

            if (targetWayPointIndex >= (wayPoints.points.Length - 1))
            {
                envGenerator.GenerateForest();//生成下一个forest

                //不是最后的场景 就去除掉
                if (Game_parameter.game_statu == Game_statu.gaming_run)
                {
                    Destroy(this.gameObject, 15);//间隔15秒之后销毁前一个
                }

                return wayPoints.points[targetWayPointIndex - 1].position;

                //return envGenerator.forest1.GetNextTargetPoint();
            }
            return wayPoints.points[targetWayPointIndex].position;
        }
        else
        {
            return wayPoints.points[targetWayPointIndex].position;
        }
    }

    //获取障碍物坐标
    private Vector3 GetWayPosByZ(float z)
    {
        Transform[] points = wayPoints.points;
        int index = 0;
        for (int i = 0; i < points.Length - 1; i++)
        {
            if (z <= points[i + 1].position.z && z >= points[i].position.z)
            {
                index = i;
                break;
            }
        }
        return Vector3.Lerp(points[index].position, points[index + 1].position,
                                  (z - points[index].position.z) / (points[index + 1].position.z - points[index].position.z));

    }
}



















