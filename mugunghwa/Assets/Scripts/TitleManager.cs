using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public Material[] materials;

    float degree;
    int skynum = 0;

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
                SceneManager.LoadScene(num);
                break;
            case 2:
                SceneManager.LoadScene(num);
                break;
            case 3:
                Application.Quit();
                break;
        }
    }

}
