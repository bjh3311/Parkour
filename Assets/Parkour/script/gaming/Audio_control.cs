using UnityEngine;
using System.Collections;

public class Audio_control : MonoBehaviour {


    public AudioSource bg_source;
    public AudioSource player_source;
    public AudioSource other_source;


    public AudioClip foot_land;
    public AudioClip foot;
    public AudioClip hit;
    public AudioClip gold;
    public AudioClip win_bg;
    public AudioClip lose;
    public AudioClip win;
    public AudioClip di;
    public AudioClip slide;
    public AudioClip left_right;
    public AudioClip jump;
    public AudioClip tempt_collision;


    // Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetKeyDown(KeyCode.Space))
        {
            //source.PlayOneShot(audios[0], 1f);
          
            //source.Play(audios[0].);
            //source[0].pl
            //source[0].clip

            //source.clip = audios[2];
            //source.Play();
        }
	}
}
