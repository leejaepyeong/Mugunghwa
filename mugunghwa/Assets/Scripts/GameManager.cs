using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public int score = 0;
    public int bestScore = 0;
    public Text scoreTxt;

    public float GameTime = 0f;

    public bool isRead = false;
    public bool isDone = false;
    public bool isMove = false;
    public bool isDead = false;

    public int level = 0;
    int maxLevel = 10;
    public Text levelTxt;

    string EnemtTxt = "무궁화 꽃이 피었습니다";
    string SpeakTxt;
    public Text SpeakEnemyTxt;

    public GameObject GoImg;
    public GameObject StopImg;


    public PlayerController player;

    [Header("GameOverPanel")]
    public GameObject gameOverPanel;
    public Text EndScore;
    public Text BestScore;


    [Header("TimeChange")]
    public Material[] skyMaterials; // 하늘 매터리얼

    int skynum = 0; // 하늘배경
    float degree = 0;   //회전각

    private void Start()
    {
        if (instance == null)
            instance = this;


    }

    private void Update()
    {
        if(!isRead)
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
        SpeakTxt = "";

        float[] random = new float[13];

        for (int i = 0; i < random.Length; i++)
        {
            random[i] = Random.Range(0.1f, 0.8f);
        }

        for (int i = 0; i < EnemtTxt.Length; i++)
        {
            SpeakTxt += EnemtTxt[i];

            SpeakEnemyTxt.text = SpeakTxt;
            yield return new WaitForSeconds(random[i]);
        }

        isDone = true;

        GoImg.SetActive(false);
        StopImg.SetActive(true);

        float randomSet = Random.Range(0.5f, 1.5f);

        yield return new WaitForSeconds(randomSet);

        GoImg.SetActive(true);
        StopImg.SetActive(false);



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

    public void ResetBtn()
    {
        score = 0;
        gameOverPanel.SetActive(false);
        isDead = false;
        GameTime = 0f;
        level = 0;

        player.anim.SetTrigger("Reset");

        GoImg.SetActive(true);
        StopImg.SetActive(false);

    }


    public void PlayerDeath()
    {
        isDead = true;

        player.anim.SetTrigger("Death");

        gameOverPanel.SetActive(true);
        EndScore.text = "Score " + score.ToString() + " 점";
        BestScore.text = "Best " + bestScore.ToString() + " 점";


    }


}
