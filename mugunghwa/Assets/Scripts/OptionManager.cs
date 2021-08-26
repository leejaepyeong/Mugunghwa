using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class OptionManager : MonoBehaviour
{
    public Material[] materials;
    public GameObject[] TextObj;
    public Text[] TextPage;
    public Text pageTxt;

    public Button PreBtn;
    public Button NextBtn;

    float degree;
    int skynum = 0;

    int pastPage;
    int textPage = 0;
    int maxPage;

    private void Start()
    {
        maxPage = TextObj.Length - 1;

        WriteText();
    }

    void WriteText()
    {
        TextPage[0].text = "<color=red><size=40>'무궁화 꽃이 피었습니다'</size></color> 게임" + "\n장애물을 부수며 나아가는 게임\n무한 런으로 기록을 세워봅시다";
        TextPage[1].text = "<color=red><size=44>Attack</size></color>" + "버튼을 통해 공격\n다가오는 바위를 부실 수 있습니다.\n목숨은 총 3개입니다";
        TextPage[2].text = "<color=red><size=44>Walk</size></color>" + "버튼을 통해 전진\n술레의 말이 끝날 시 움직이면\nGame Over";
        TextPage[3].text = "바위를 부시고 전진하면 점수 획득\n목숨을 다 잃거나 술레에게 걸리면\n" + "<color=red><size=44>Game Over</size></color>";
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

    public void ReadBtn(int num)
    {
        switch(num)
        {
            case 0:
                if (textPage == maxPage)
                    NextBtn.interactable = true;

                pastPage = textPage;
                textPage--;
                OpenPage(textPage, pastPage);

                if (textPage == 0)
                {
                    PreBtn.interactable = false;
                }

                break;
            case 1:
                if(textPage == 0)
                    PreBtn.interactable = true;

                pastPage = textPage;
                textPage++;
                OpenPage(textPage, pastPage);

                if (textPage == maxPage)
                {
                    NextBtn.interactable = false;
                }
                break;
        }
    }

    void OpenPage(int _page, int _pastPage)
    {
        pageTxt.text = (_page + 1) + " / " + (maxPage + 1);
        TextObj[_pastPage].SetActive(false);
        TextObj[_page].SetActive(true);
    }

    public void TitleBtn()
    {
        SceneManager.LoadScene(0);
    }
}
