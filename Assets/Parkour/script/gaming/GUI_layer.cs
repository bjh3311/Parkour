using UnityEngine;
using System.Collections;

public class GUI_layer : MonoBehaviour
{
    public Audio_control audio_control;

    public Texture num_3;
    public Texture num_2;
    public Texture num_1;
    public Texture jump;
    public Texture squat;
    public Texture turn;
    public Texture different;

    public Texture fail_hint;
    public Texture start_hint;
    public Texture success_hint;

    public Texture2D energy_inside;
    public Texture2D energy_outside;

    public Texture2D choose;


    //正能量 里面外面两张GUI贴图的矩形
    private Rect rect_outside;
    private Rect rect_inside;

    //里面图片的最大宽度 和 实际宽度
    private float max_width;
    private float inside_width;

    private float unit;  //GUI单位长度

    private int count = 0; //循环计数器



    //调试图片用的x,y,w,h
    //public float x = 56.6f;
    //public float y = 18.5f;
    //public float w = 111.1f;
    //public float h = 25.1f;




    void Start()
    {

        this.unit = Game_parameter.unit;

        this.max_width = 130 * unit;


        //能量值外图片的位置 宽高
        this.rect_outside = new Rect(-15 * unit, -unit, 250 * unit, 84 * unit);
    }

    void OnGUI()
    {
        //正能量值的显示
        #region
        //计算应该绘制里面的张图片 多长
        float percent = (float)Game_parameter.energy / (float)Game_parameter.xml.max_energy;
        if (percent > 1)
            percent = 1;

        this.inside_width = percent * this.max_width;

        // this.rect_inside = new Rect(x, y, w, h);
        this.rect_inside = new Rect(89 * unit, 36 * unit, this.inside_width, 17 * unit);

        //绘制里外两张能量贴图
        GUI.DrawTexture(this.rect_outside, energy_outside);
        GUI.DrawTexture(this.rect_inside, energy_inside);
        #endregion

        //显示碰撞到正能量物体的动画
        #region
        //显示碰撞到正能量物体的动画
        for (int i = 0; i < Game_parameter.GUI_texture_move_list.Count; i++)
        {

            GUI_texture_move move = (GUI_texture_move)Game_parameter.GUI_texture_move_list[i];

            if (move.is_dead == true)
            {
                Game_parameter.GUI_texture_move_list.RemoveAt(i);


                Game_parameter.energy += Game_parameter.xml.good_object_energy;


                if (Game_parameter.energy > Game_parameter.xml.max_energy)
                {

                    Game_parameter.energy = Game_parameter.xml.max_energy;
                }
            }
            else
            {
                move.draw();
            }

        }
        #endregion

        //显示减血屏幕闪烁的动画
        #region
        for (int i = 0; i < Game_parameter.blink_list.Count; i++)
        {

            Blink blink = (Blink)Game_parameter.blink_list[i];

            if (blink.is_dead == true)
            {
                Game_parameter.blink_list.RemoveAt(i);
            }
            else
            {
                blink.draw();
            }

        }
        #endregion


        //判断位置，递增cout 显示3，2，1,开始寻找图片
        #region
        if (Game_parameter.distance < 250)
        {
            this.count++;

            if (this.count < 90 && this.count > 10)
            {
                GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
                Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_3);//중앙에 숫자 3을 보인다


                if (this.count == 11)
                {
                    this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
                }
            }

            else if (this.count > 90 && this.count < 210)
            {
                GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
                Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_2);

                if (this.count == 91)
                {
                    this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
                }
            }

            else if (this.count > 210 && this.count < 290)
            {
                GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 5,
               Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), num_1);

                if (this.count == 211)
                {
                    this.audio_control.other_source.PlayOneShot(this.audio_control.di, 1f);
                }
            }

            else if (this.count > 290 && this.count < 390 && Game_parameter.distance > 10 && Game_parameter.distance < 3000)
            {
                GUI.DrawTexture(new Rect(0, -20 * unit, Camera.main.pixelWidth, Camera.main.pixelHeight), start_hint);
            }
        }

        #endregion


        // 判断位置 显示 游戏操作提示图片
        #region
        //判断位置 显示 游戏操作提示图片
        else if (Game_parameter.distance > 300 && Game_parameter.distance < 700)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 1.8f, Camera.main.pixelHeight / 20,
                Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), turn);

            //.DrawTexture(new Rect(0, 0,Camera.main.pixelWidth , Camera.main.pixelHeight), turn);

        }

        else if (Game_parameter.distance > 1000 && Game_parameter.distance < 1400)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 1.8f, Camera.main.pixelHeight / 20,
                Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), jump);

            // GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth, Camera.main.pixelHeight), jump);

        }

        else if (Game_parameter.distance > 1700 && Game_parameter.distance < 2100)
        {
            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 1.8f, Camera.main.pixelHeight / 20,
                Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), squat);

            // GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth, Camera.main.pixelHeight), squat);

        }
        #endregion


        //显示难度提示图片
        #region
        if (Game_parameter.distance > (Game_parameter.xml.runaway_amount / 2 - 1) * 3000 - 150 &&
          Game_parameter.distance < (Game_parameter.xml.runaway_amount / 2 - 1) * 3000 + 150)
        {

            GUI.DrawTexture(new Rect(Camera.main.pixelWidth / 4, Camera.main.pixelHeight / 24,
               Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2), different);
        }
        #endregion


        //显示岔路选择的图片
        #region
        if (Game_parameter.distance > (Game_parameter.xml.runaway_amount - 2) * 3000 + 100 &&
         Game_parameter.distance < (Game_parameter.xml.runaway_amount - 2) * 3000 + 250)
        {
            //GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth , Camera.main.pixelHeight ), choose);
        }
        #endregion


        //显示失败和成功图片
        #region
        //游戏失败 ,显示失败图片
        else if (Game_parameter.game_statu == Game_statu.fail_kneel)
        {

            GUI.DrawTexture(new Rect(0, -20 * unit, Camera.main.pixelWidth, Camera.main.pixelHeight), fail_hint);

        }

        //游戏胜利，最后500米 显示胜利图片
        else if (Game_parameter.game_statu == Game_statu.success && Game_parameter.distance > 3000 * Game_parameter.xml.runaway_amount - 2200)
        {

            GUI.DrawTexture(new Rect(0, -20 * unit, Camera.main.pixelWidth, Camera.main.pixelHeight), success_hint);
        }
        #endregion

        //GUI.DrawTexture(new Rect(0, 0,Camera.main.pixelWidth, Camera.main.pixelHeight),num_1);
    }
}
