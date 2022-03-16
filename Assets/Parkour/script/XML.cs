using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Xml;
using UnityEngine;
using System.Collections;

public class XML
{
    private XmlDocument xml;         //xml文件

    public float walk_speed;         //步行速度
    public float run_speed;          //奔跑速度 
    public float add_speed;          //每个场景之间的速度叠加
    public int runaway_amount;       //总共需要跑多少个跑道   

    public float walk_distance;      //前面一段步行距离
    public int count_energy;    //奔跑多少距离损耗一点正能量
  
    public int init_energy;          //初始化正能量的值
    public int max_energy;           //最大正正能量的值

    public int obstacle_energy;      //障碍物损耗的正能量
    public int tempt_energy;         //诱惑物体损耗的正能量
    public int good_object_energy;   //有益物体增加的正能量

    public float obstacle_min_distance;  //障碍物 相距最小距离
    public float obstacle_max_distance;  //障碍物 相距最大距离

    public float energy_min_distance;  //能量物体 相距最小距离
    public float energy_max_distance;  //能量物体 相距最大距离

    public float jump_height;            //弹跳高度
   
    public XML()
    {
        try
        {
            //导入xml
            this.xml = new XmlDocument();

            this.xml.Load(Application.dataPath + @"/Parkour/config.xml");

            this.walk_speed = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("walk_speed").InnerText);
            this.run_speed = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("run_speed").InnerText);
            this.add_speed = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("add_speed").InnerText);
            this.runaway_amount = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("runaway_amount").InnerText);

          
            this.walk_distance = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("walk_distance").InnerText);
            this.count_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("count_energy").InnerText);

            this.init_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("init_energy").InnerText);
            this.max_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("max_energy").InnerText);

            this.obstacle_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("obstacle_energy").InnerText);
            this.tempt_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("tempt_object_energy").InnerText);
            this.good_object_energy = int.Parse(xml.SelectSingleNode("config").SelectSingleNode("good_object_energy").InnerText);

            this.obstacle_min_distance = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("obstacle_min_distance").InnerText);
            this.obstacle_max_distance = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("obstacle_max_distance").InnerText);

            this.energy_min_distance = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("energy_min_distance").InnerText);
            this.energy_max_distance = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("energy_max_distance").InnerText);

            this.jump_height = float.Parse(xml.SelectSingleNode("config").SelectSingleNode("jump_height").InnerText);

        }

        catch (Exception e)
        {
            Console.WriteLine(" 配置文件编写错误  " + e);
        }

    }
}


