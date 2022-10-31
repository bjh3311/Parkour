using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class Obj : MonoBehaviour
{
    public float distance;//Obj간의 간격
    public float spawnZ;
    public int amount;//씬에서 Object의 총 갯수
    public List<GameObject> active=new List<GameObject>();//화면에 나와있는 Object들
    public List<GameObject> unactive=new List<GameObject>();//화면에 안나와있는 예비 Object들
    public Obj(GameObject[] temp,float spawnZ,int amount,float distance)//Obj클래스 생성자
    {
        this.spawnZ=spawnZ;
        this.amount=amount;
        this.distance=distance;
        GameObject here;
        for(int i=0;i<temp.Length;i++)
        {
            for(int j=0;j<3;j++)
            {
                here=Instantiate<GameObject>(temp[i]);
                here.SetActive(false);
                this.unactive.Add(here);
            }
        }
        for(int i=0;i<this.amount;i++)
        {
            Spawn();
        }
    }
    public void Spawn()//Obj생성
    {
        int randomIndex=Random.Range(0,this.unactive.Count);
        this.unactive[randomIndex].SetActive(true);
        this.unactive[randomIndex].transform.position=new Vector3(this.unactive[randomIndex].transform.position.x,
        this.unactive[randomIndex].transform.position.y,spawnZ);
        this.active.Add(this.unactive[randomIndex]);
        this.unactive.RemoveAt(randomIndex);
        this.spawnZ=this.spawnZ+this.distance;
    }
    public void Delete()//Obj삭제
    {
        this.unactive.Add(this.active[0]);//맨앞의 맵을 unactiveMap 리스트에 추가해준다
        this.active[0].SetActive(false);
        this.active.RemoveAt(0);
    }
}
public class ObjManager : MonoBehaviour
{
    public Transform playerTransform;//플레이어 위치
    public GameObject[] ObsPrefabs;//장애물 프리펩들
    public GameObject[] MapPrefabs;//맵 프리펩들
    public GameObject[] ItemPrefabs;//아이템 프리펩들
    private float MapLength=3000f;//한 맵의 크기가 3000f이다
    private Obj Obstacle;
    private Obj Map;
    private Obj Item;
    void Awake()
    {
        Obstacle=new Obj(ObsPrefabs,100f,27,200f);//장애물의 화면의 총 갯수는 27개
        Map=new Obj(MapPrefabs,700f,2,3000f);//맵은 화면에 총 2개
        Item=new Obj(ItemPrefabs,300f,54,600f);//Item은 화면에 총 18개(빈 오브젝트 포함)
    }
    void Update()//위치를 계속 확인하며 spawn과 delete를 계속한다
    {
        if(playerTransform.position.z-2000f>Map.spawnZ-(Map.amount*Map.distance))
        {
            Map.Spawn();
            Map.Delete();
        }
        if(playerTransform.position.z-300f>Obstacle.spawnZ-(Obstacle.amount*Obstacle.distance))
        {

            Obstacle.Spawn();
            Obstacle.Delete();
        }
        if(playerTransform.position.z-300f>Item.spawnZ-(Item.amount*Item.distance))
        {
            Item.Spawn();
            Item.Delete();
        }
    }
}

