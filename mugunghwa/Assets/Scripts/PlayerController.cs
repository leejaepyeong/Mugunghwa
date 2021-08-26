using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{


    bool isAttack = false;
    [SerializeField]
    private BoxCollider AttackArea;

    public Rigidbody playerRig;
    public Animator anim;

    public bool attackPos;

    public MapSpawn mapSpawn;
    public GameObject[] AttackEffect;

    public void AttackBtn()
    {
        if (GameManager.instance.isDead) return;


        GameManager.instance.isMove = true;
        isAttack = true;

        StartCoroutine(TryAttack());

        if (PlayerMove())
        {
            GameManager.instance.PlayerDeath();

            return;
        }

        GameManager.instance.isMove = false;
    }

    IEnumerator TryAttack()
    {
        attackPos = !attackPos;

        if(attackPos)
        {
            anim.SetTrigger("doAttackLeft");
        }
        else
        {
            anim.SetTrigger("doAttackRight");
        }

        yield return new WaitForSeconds(0.15f);
        
        AttackArea.enabled = true;
        yield return new WaitForSeconds(0.27f);
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
        

        mapSpawn.MapMove();

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
