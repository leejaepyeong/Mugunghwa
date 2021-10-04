using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    
    [Header("GamePanel")]
    public GameObject gamePanel;
    public GameObject GoImg;
    public GameObject StopImg;
    public int score = 0;
    public int bestScore = 0;
    public Text scoreTxt;
    public int Life = 3;
    public GameObject LifeGroup;
    public GameObject[] Lifes;

    public float GameTime = 0f;

    public bool isRead = false;
    public bool isDone = false;
    public bool isMove = false;
    public bool isDead = false;

    public int level = 0;
    int maxLevel = 10;
    public Text levelTxt;

    string EnemtTxt = "무궁화꽃이피었습니다";
    public GameObject[] animTxt;

    [Header("OptionPanel")]
    public GameObject optionPanel;


    public PlayerController player;
    public GameObject HitEffect;

    [Header("GameOverPanel")]
    public GameObject gameOverPanel;
    public Text EndScore;
    public Text BestScore;
    public Text EndTxt;
    string[] endTxts = {"이걸 잡혀? 이걸?", "푸훗....푸푸훗..", "답이 없다..너는 답이", "발로해도 이거보단..훗" };
    public MapBestScore mapBestScore;

    [Header("TimeChange")]
    public Material[] skyMaterials; // 하늘 매터리얼

    int skynum = 0; // 하늘배경
    float degree = 0;   //회전각

    private void Start()
    {
        if (instance == null)
            instance = this;

        Lifes = new GameObject[2] { LifeGroup.transform.GetChild(0).gameObject, LifeGroup.transform.GetChild(1).gameObject };
        bestScore = mapBestScore.BestScore[mapBestScore.CurrentMapNum];
    }

    private void Update()
    {
        if(!isRead && !isDead)
            TryTextRead();

        Timer();
        RotateSky();
    }

    void RotateSky()
    {
        degree += 10 * Time.deltaTime;

        if (degree >= 360)
        {
            degree = 0;
            skynum++;
            if (skynum >= 4)
                skynum = 0;

            RenderSettings.skybox = skyMaterials[skynum];
        }


        RenderSettings.skybox.SetFloat("_Rotation", degree);
    }

    void Timer()
    {
        GameTime += Time.deltaTime;
        levelTxt.text = "Level " + level.ToString();

        if(GameTime >= 20 * (level + 1) && level < maxLevel)
        {
            if (level >= 10) return;
            level++;
        }

        
    }

    void TryTextRead()
    {
        isRead = true;

        StartCoroutine(TextRead());
    }

    IEnumerator TextRead()
    {

        float[] random = new float[13];

        for (int i = 0; i < random.Length; i++)
        {
            random[i] = Random.Range(0.28f, 0.82f);
        }

        for (int i = 0; i < EnemtTxt.Length; i++)
        { 

            animTxt[i].SetActive(true);

            yield return new WaitForSeconds(random[i]);
        }

        isDone = true;

        GoImg.SetActive(false);
        StopImg.SetActive(true);

        float randomSet = Random.Range(0.5f, 1.5f);

        yield return new WaitForSeconds(randomSet);

        GoImg.SetActive(true);
        StopImg.SetActive(false);

        for (int i = 0; i < EnemtTxt.Length; i++)
        {
            animTxt[i].SetActive(false);

        }

        isDone = false;
        isRead = false;
    }

    public void ScoreUp(int _score)
    {
        

        score += _score;
        if (score > bestScore)
            bestScore = score;

        scoreTxt.text = "Score " + score;

    }

    public void LifeOut()
    {
        StartCoroutine(PlayerHitEffect());

        Life--;

        if (Life <= 0)
        {
            PlayerDeath();
            return;
        }
            
        Lifes[Life - 1].SetActive(false);
    }

    IEnumerator PlayerHitEffect()
    {
        HitEffect.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        HitEffect.SetActive(false);

    }

    public void ResetBtn()
    {
        score = 0;
        scoreTxt.text = "Score " + score;
        gameOverPanel.SetActive(false);
        gamePanel.SetActive(true);
        isDead = false;
        GameTime = 0f;
        level = 0;
        levelTxt.text = "Level " + level.ToString();

        Life = 3;
        for (int i  = 0; i < 2; i++)
        {
            Lifes[i].SetActive(true);
        }

        player.anim.SetTrigger("doDamage");
        
        GoImg.SetActive(true);
        StopImg.SetActive(false);

    }


    public void PlayerDeath()
    {
        if (isDead) return;

        isDead = true;

        player.anim.SetTrigger("doDeath");

        gamePanel.SetActive(false);
        gameOverPanel.SetActive(true);
        EndScore.text = "Score " + score.ToString() + " 점";
        BestScore.text = "Best " + bestScore.ToString() + " 점";
        mapBestScore.BestScore[mapBestScore.CurrentMapNum] = bestScore ;
        EndTxt.text = endTxts[Random.Range(0, endTxts.Length)];

    }

    public void OptionBtn()
    {
        Time.timeScale = 0;
        optionPanel.SetActive(true);
    }

    public void PlayGameBtn()
    {
        Time.timeScale = 1;
        optionPanel.SetActive(false);
    }

    public void TitleBtn()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(0);
    }
}
