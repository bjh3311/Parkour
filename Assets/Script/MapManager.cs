using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    public GameObject[] MapPrefabs;
    public Transform playerTransform;
    private float spawnZ=12700f;
    private float MapLength=3000f;
    private int amountMapOnScreen=4;

    private List<GameObject> activeMap;//화면에 나와있는 
    private List<GameObject> unactiveMap;
    void Start()
    {
        activeMap=new List<GameObject>();
        unactiveMap=new List<GameObject>();
        for(int i=0;i<4;i++)//activeMap과 unactiveMap을 합쳐서 각 맵이 3개씩 들어가 있다
        {
            for(int j=0;j<2;j++)
            {
                unactiveMap.Add(MapPrefabs[i]);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(playerTransform.position.z-2000f>spawnZ-(amountMapOnScreen*MapLength))
        {
            SpwanMap();
            DeleteMap();
        }
    }
    private void SpwanMap(int prefabIndex = -1)//함수 사용시 파라미터에 아무것도 안넣으면 -1이 들어감
    {

    }
    private void DeleteMap()
    {
        unactiveMap.Add(activeMap[0]);//맨처음 맵을 unactiveMap 리스트에 추가해준다
        activeMap[0].SetActive(false);
        activeMap.RemoveAt(0);
    }
}
