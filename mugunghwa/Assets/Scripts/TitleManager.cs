using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TitleManager : MonoBehaviour
{
    public Material[] materials;

    float degree;
    int skynum = 0;

    public Text[] BestScoreTxt;

    public GameObject SelectMapPanel;

    public MapBestScore mapBestScore;

    private void Start()
    {
        for (int i = 0; i < BestScoreTxt.Length; i++)
        {
            BestScoreTxt[i].text = "Best\n" + mapBestScore.BestScore[i].ToString();
        }
    }

    private void Update()
    {
        RotateSkyBox();
    }

    void RotateSkyBox()
    {
        degree += 10 * Time.deltaTime;

        if (degree >= 360)
        {
            degree = 0;
            skynum++;
            if (skynum >= 4)
                skynum = 0;

            RenderSettings.skybox = materials[skynum];
        }


        RenderSettings.skybox.SetFloat("_Rotation", degree);
    }

    public void Btn(int num)
    {
        switch(num)
        {
            case 1:
                SelectMapPanel.SetActive(true);
                break;
            case 2:
                SceneManager.LoadScene(num);
                break;
            case 3:
                Application.Quit();
                break;
        }
    }

    public void SelecMapBtn(int _num)
    {
        switch(_num)
        {
            case 1:
                SceneManager.LoadScene("WoodMap");
                
                break;
            case 2:
                SceneManager.LoadScene("DesertMap");
                break;

        }

        mapBestScore.CurrentMapNum = _num - 1;
    }

}
