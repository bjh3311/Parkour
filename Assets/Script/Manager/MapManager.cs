using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    public GameObject[] MapPrefabs;
    public Transform playerTransform;
    private float spawnZ=6700f;
    private float MapLength=3000f;
    private int amountMapOnScreen=2;//현재 Spawn되어 있는 Map의 개수

    public List<GameObject> activeMap;//화면에 나와있는 
    private List<GameObject> unactiveMap;
    void Start()
    {
        activeMap=new List<GameObject>();
        unactiveMap=new List<GameObject>();
        GameObject temp;
        for(int i=0;i<4;i++)//activeMap과 unactiveMap을 합쳐서 각 맵이 3개씩 들어가 있다
        {
            for(int j=0;j<3;j++)
            {
                temp=Instantiate<GameObject>(MapPrefabs[i]);
                temp.SetActive(false);
                unactiveMap.Add(temp);
            }
        }
        activeMap.Add(MapPrefabs[0]);
        activeMap.Add(MapPrefabs[1]);
    }
    // Update is called once per frame
    void Update()
    {
        if(playerTransform.position.z-2000f>spawnZ-(amountMapOnScreen*MapLength))//위치를 계속 확인하며 spawn과 delete를 계속한다
        {
            SpawnMap();
            DeleteMap();
        }
    }
    private void SpawnMap()//함수 사용시 파라미터에 아무것도 안넣으면 -1이 들어감
    {
        int randomIndex=Random.Range(0,unactiveMap.Count);
        unactiveMap[randomIndex].SetActive(true);
        unactiveMap[randomIndex].transform.position=new Vector3(unactiveMap[randomIndex].transform.position.x,
        unactiveMap[randomIndex].transform.position.y,spawnZ);
        activeMap.Add(unactiveMap[randomIndex]);
        unactiveMap.RemoveAt(randomIndex);
        spawnZ=spawnZ+MapLength;
    }
    private void DeleteMap()
    {
        unactiveMap.Add(activeMap[0]);//맨앞의 맵을 unactiveMap 리스트에 추가해준다
        activeMap[0].SetActive(false);
        activeMap.RemoveAt(0);
    }
}
