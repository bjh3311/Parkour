using UnityEngine;
using System.Collections;

public class GUI_move
{

    private Texture2D texture;      //移动的贴图
    private Rect rect;              //绘制矩形
    private Vector3 end_position;   //结束位置

    private float unit;        //单位坐标长度
    private float x;           //绘制图片的x点
    private float y;           //绘制图片的y点
    private float width;       //贴图的初始宽度 
    private float height;      //贴图的初始高度

    float a;       //二次函数斜率

    public bool is_dead = false;          //是否还继续有效  

    public float value;          

    public GUI_move(Texture2D texture, Vector3 position,float value)
    {
        this.texture = texture;

        this.value=value;

        this.unit = GameManager.instance.unit;

        this.width = 100 * unit;
        this.height = 100 * unit;

        //转换一下传进来的坐标,获取起始位置
        position = Camera.main.WorldToScreenPoint(position);
        this.x = position.x - this.width / 2;
        this.y = Camera.main.pixelHeight - (position.y + this.height / 2);


        this.a = y / Mathf.Pow(x, 2);

        //初始化绘制矩形
        this.rect = new Rect(this.x, this.y, this.width, this.height);

        this.end_position = new Vector3(0, 0, 0);
    }
    public void draw()
    {
        if (this.is_dead == false)
        {
            //绘制图片
            GUI.DrawTexture(this.rect, this.texture);

            this.y -= 3 * unit;  //y轴匀速
            this.x = Mathf.Sqrt(this.y / a);//todo 这里应该是一个抛物线公式

            this.width -= 1 * unit;
            this.height -= 1 * unit;

            //初始化绘制矩形
            this.rect = new Rect(this.x, this.y, this.width, this.height);

            //위치가 화면밖을 벗어나는지 확인한다
            if (this.x <= 150 || this.width <= 50)
            {
                this.is_dead = true;
            }
        }
    }

}
