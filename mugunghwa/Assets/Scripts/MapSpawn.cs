using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapSpawn : MonoBehaviour
{
    public GameObject[] MapPrefabs;

    float moveDistance = 0.5f;
    int moveCount = 0;
    int mapNum = 0; 

 

    public void MapMove()
    {
        moveCount++;

        for (int i = 0; i < MapPrefabs.Length; i++)
        {
            MapPrefabs[i].transform.position -= new Vector3(0, 0, moveDistance);
        }


        if(moveCount >= 39)
        {
            moveCount = 0;

            MapPrefabs[mapNum].transform.position = new Vector3(0.03f, 0.04f, 41.89f);

            mapNum++;

            if (mapNum > 2)
                mapNum = 0;
        }
    }


}
