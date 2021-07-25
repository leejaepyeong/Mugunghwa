using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enenmy : MonoBehaviour
{



    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            PlayerController player = other.GetComponent<PlayerController>();


            GameManager.instance.PlayerDeath();
        }
    }
}
