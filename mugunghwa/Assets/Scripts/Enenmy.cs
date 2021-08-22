using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enenmy : MonoBehaviour
{
    public GameObject DestroyEffect;


    private void Update()
    {
        transform.Rotate(0, 0, -10f);
    }


    void DestroyStone()
    {

    }

    IEnumerator TryDestroy()
    {
        yield return new WaitForSeconds(1f);

        Destroy(gameObject);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            PlayerController player = other.GetComponent<PlayerController>();


            GameManager.instance.PlayerDeath();
        }
        else if(other.tag == "PlayerAttack")
        {
            DestroyStone();
        }
    }
}
