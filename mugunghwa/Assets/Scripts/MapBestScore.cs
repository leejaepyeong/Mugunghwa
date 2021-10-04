using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Score", menuName = "Data/Score")]
public class MapBestScore : ScriptableObject
{
    public int CurrentMapNum; // 1 : Wood 2 : Dessert
    public int[] BestScore;

}
