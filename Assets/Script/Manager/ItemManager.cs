using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemManager : MonoBehaviour
{
    public GameObject[] ItemPrefabs;
    public Transform playerTransform;
    private float spawnZ=300f;
    private int amountItemOnScreen=18;
    public List<GameObject> activeItem;//화면에 나와있는 장애물들
    private List<GameObject> unactiveItem;
    private float ItemLength=600f;

    private int[] dx=new int[]{0,50,-50};
    void Start()
    {
        activeItem=new List<GameObject>();
        unactiveItem=new List<GameObject>();
        GameObject temp;
        for(int i=0;i<18;i++)//각 아이템이 3개씩 들어가있다
        {
            for(int j=0;j<3;j++)
            {
               temp=Instantiate<GameObject>(ItemPrefabs[i]);
               temp.SetActive(false);
               unactiveItem.Add(temp);
            }
        }
        for(int i=0;i<18;i++)
        {
            SpawnObs();
        }
    }
    void Update()
    {
        if(playerTransform.position.z-300f>spawnZ-(amountItemOnScreen*ItemLength))//위치를 계속 확인하며 spawn과 delete를 계속한다
        {
            SpawnObs();
            DeleteObs();
        }
    }
    private void SpawnObs()
    {
        int pos=Random.Range(0,3);
        int randomIndex=Random.Range(0,unactiveItem.Count);
        unactiveItem[randomIndex].SetActive(true);
        unactiveItem[randomIndex].transform.position=new Vector3(dx[pos],30,spawnZ);
        activeItem.Add(unactiveItem[randomIndex]);
        unactiveItem.RemoveAt(randomIndex);
        spawnZ=spawnZ+ItemLength;
    }
    private void DeleteObs()
    {
        unactiveItem.Add(activeItem[0]);//맨앞의 item을 unactiveItem 리스트에 추가해준다
        activeItem[0].SetActive(false);
        activeItem.RemoveAt(0);
    }
}
