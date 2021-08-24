using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enenmy : MonoBehaviour
{
    public GameObject DestroyEffect;

    bool isDestroy = false;

    private void Update()
    {
        transform.Rotate(-10f, 0, 0);
    }


    void DestroyStone()
    {
        GameObject stoneEffect = Instantiate(DestroyEffect, transform.position, Quaternion.identity);
        Destroy(stoneEffect, 0.6f);
        StartCoroutine(TryDestroy());
    }

    IEnumerator TryDestroy()
    {
        isDestroy = true;
        GameManager.instance.ScoreUp(50);

        yield return new WaitForSeconds(0.2f);

        Destroy(gameObject);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            if (isDestroy) return;

            PlayerController player = other.GetComponent<PlayerController>();


            GameManager.instance.PlayerDeath();
        }
        else if(other.tag == "PlayerAttack")
        {
            DestroyStone();
        }
    }
}
