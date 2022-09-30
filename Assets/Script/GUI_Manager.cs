using UnityEngine;
using System.Collections;

public class GUI_Manager : MonoBehaviour
{
    

    //正能量 里面外面两张GUI贴图的矩形
    private Rect rect_outside;
    private Rect rect_inside;

    //里面图片的最大宽度 和 实际宽度
    private float max_width;
    private float inside_width;

    private float unit;  //GUI 단위길이

    private int count = 0; //루프 카운터


    //调试图片用的x,y,w,h
    //public float x = 56.6f;
    //public float y = 18.5f;
    //public float w = 111.1f;
    //public float h = 25.1f;

    void Start()
    {
        this.unit = GameManager.instance.unit;
        this.max_width = 130 * unit;
        //能量值外图片的位置 宽高
        this.rect_outside = new Rect(-15 * unit, -unit, 250 * unit, 84 * unit);
    }

    void OnGUI()
    {
        #region
        //显示碰撞到正能量物体的动画
        for (int i = 0; i < GameManager.instance.GUI_move_list.Count; i++)
        {
            GUI_move move = (GUI_move)GameManager.instance.GUI_move_list[i];
            if (move.is_dead == true)//만약 move가 끝났다면
            {
                if (GameManager.instance.energy+move.value >= 350f)
                {
                    GameManager.instance.energy=350f;
                }
                else
                {
                    GameManager.instance.energy += move.value;//텍스쳐 움직임이 끝난 후 에너지 회복
                }              
                GameManager.instance.GUI_move_list.RemoveAt(i);
            }
            else
            {
                move.draw();
            }
        }
        #endregion
    }
}
