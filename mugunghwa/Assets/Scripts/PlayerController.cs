using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public GameObject Floor;

    Transform originPos;

    bool isLeft = false;

    public Rigidbody playerRig;

    Animator anim;
 
        

    private void Start()
    {
        originPos = transform;
        anim = GetComponent<Animator>();
    }

  

    public void MoveBtn()
    {
        if (GameManager.instance.isDead) return;

        isLeft = !isLeft;

        GameManager.instance.isMove = true;

        if (PlayerMove())
        {
            GameManager.instance.PlayerDeath();

            return;
        }

        if (isLeft)
        {
            transform.position = originPos.position - new Vector3(0.5f, 0f, 0f);
        }
        else
            transform.position = originPos.position + new Vector3(0.5f, 0f, 0f);

        GameManager.instance.isMove = false;
    }

    public void WalkBtn()
    {
        if (GameManager.instance.isDead) return;

        GameManager.instance.isMove = true;

        anim.SetBool("doWalk",true);

        if(PlayerMove())
        {
            GameManager.instance.PlayerDeath();

            return;
        }

        Floor.transform.Rotate(0,0,-10f);

        GameManager.instance.ScoreUp(10);

        anim.SetBool("doWalk", false);

        GameManager.instance.isMove = false;

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