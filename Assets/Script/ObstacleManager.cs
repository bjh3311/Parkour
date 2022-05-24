using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleManager : MonoBehaviour
{
    public GameObject[] ObsPrefabs;
    public Transform playerTransform;
    private float spawnZ=100f;
    private int amountObsOnScreen=21;
    public List<GameObject> activeObs;//화면에 나와있는 장애물들
    private List<GameObject> unactiveObs;
    private float ObsLength=200f;
    // Start is called before the first frame update
    void Start()
    {
        activeObs=new List<GameObject>();
        unactiveObs=new List<GameObject>();
        GameObject temp;
        for(int i=0;i<21;i++)//각 장애물이 3개씩 들어가있다
        {
            for(int j=0;j<3;j++)
            {
               temp=Instantiate<GameObject>(ObsPrefabs[i]);
               temp.SetActive(false);
               unactiveObs.Add(temp);
            }
        }
        for(int i=0;i<21;i++)
        {
            SpawnObs();
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(playerTransform.position.z-300f>spawnZ-(amountObsOnScreen*ObsLength))//위치를 계속 확인하며 spawn과 delete를 계속한다
        {
            SpawnObs();
            DeleteObs();
        }
    }
    private void SpawnObs()//함수 사용시 파라미터에 아무것도 안넣으면 -1이 들어감
    {
        int randomIndex=Random.Range(0,unactiveObs.Count);
        unactiveObs[randomIndex].SetActive(true);
        unactiveObs[randomIndex].transform.position=new Vector3(unactiveObs[randomIndex].transform.position.x,
        unactiveObs[randomIndex].transform.position.y,spawnZ);
        activeObs.Add(unactiveObs[randomIndex]);
        unactiveObs.RemoveAt(randomIndex);
        spawnZ=spawnZ+ObsLength;
    }
    private void DeleteObs()
    {
        unactiveObs.Add(activeObs[0]);//맨앞의 맵을 unactiveMap 리스트에 추가해준다
        activeObs[0].SetActive(false);
        activeObs.RemoveAt(0);
    }
}
