using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enenmy : MonoBehaviour
{
    public GameObject DestroyEffect;

    bool isDestroy = false;
    bool isCrush = false;

    float speed = 2f;

    Rigidbody rig;

    private void Start()
    {
        rig = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if(!GameManager.instance.isDone)
        {
            transform.Rotate(-10f, 0, 0);
            rig.velocity = new Vector3(0, 0, -1f) * speed;
        }
        else
        {
            rig.velocity = Vector3.zero;
        }
            
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

        yield return new WaitForSeconds(0.22f);

        Destroy(gameObject);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player" && !isCrush)
        {
            if (isDestroy) return;

            isCrush = true;

            PlayerController player = other.GetComponent<PlayerController>();
            if(GameManager.instance.Life > 1)
                player.anim.SetTrigger("doDamage");

            Destroy(gameObject);

            GameManager.instance.LifeOut();

            
        }
        else if(other.tag == "PlayerAttack")
        {
            DestroyStone();
        }
    }
}
