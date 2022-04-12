using UnityEngine;
using System.Collections;

public class Blink{

    public int frame_account=0;            //记录当前处于哪一帧    
    public Texture2D[] textures;
    public bool is_dead=false;

    public Blink(Texture2D[] texttures)
    {
        this.textures = texttures;
    }

    //精灵的游戏逻辑函数
    public void draw()
    {
        if (is_dead == false) {

            this.frame_account++;
            if (this.frame_account/2 == this.textures.Length-1)
            {
                this.frame_account = 0;
                this.is_dead = true;
            }

            GUI.DrawTexture(new Rect(0, 0, Camera.main.pixelWidth, Camera.main.pixelHeight), this.textures[frame_account/2]);

        }

    }
}
