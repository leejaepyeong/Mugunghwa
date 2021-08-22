using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public GameObject Floor;


    bool isAttack = false;
    [SerializeField]
    private BoxCollider AttackArea;

    public Rigidbody playerRig;
    public Animator anim;



    public void AttackBtn()
    {
        if (GameManager.instance.isDead) return;


        GameManager.instance.isMove = true;
        isAttack = true;

        StartCoroutine(TryAttack());


        GameManager.instance.isMove = false;
    }

    IEnumerator TryAttack()
    {
        anim.SetTrigger("doAttack");
        AttackArea.enabled = true;
        yield return new WaitForSeconds(0.2f);
        AttackArea.enabled = false;
        isAttack = false;
    }

    public void WalkBtn()
    {
        if (GameManager.instance.isDead) return;

        GameManager.instance.isMove = true;


        StopCoroutine(Walking());
        StartCoroutine(Walking());

        

        if(PlayerMove())
        {
            GameManager.instance.PlayerDeath();

            return;
        }

        Floor.transform.Rotate(0,0,-10f);

        GameManager.instance.ScoreUp(10);

        GameManager.instance.isMove = false;

    }

    IEnumerator Walking()
    {
        anim.SetBool("isWalk", true);

        yield return new WaitForSeconds(0.35f);

        anim.SetBool("isWalk", false);
    }


    bool PlayerMove()
    {
        if (GameManager.instance.isDone)
        {

            return true;
        }

        return false;
    }



}
