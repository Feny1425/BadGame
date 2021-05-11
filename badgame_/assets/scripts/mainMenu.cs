using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class mainMenu : MonoBehaviour
{
    public static mainMenu Instance { get; private set; }
    public TextMeshProUGUI text;

    


    private void Start()
    {
        
        Instance = this;
              //SintivityHorizontal
        if (!PlayerPrefs.HasKey("SintivityHorizontal"))
        {
            PlayerPrefs.SetFloat("SintivityHorizontal", 0.15f);


        }

        //SintivityVertical
        if (!PlayerPrefs.HasKey("SintivityVertical"))
        {

            PlayerPrefs.SetFloat("SintivityVertical", 0.15f);
        }


    }

    public void Play()
    {

        SceneManager.LoadScene(1);

        if (PlayerPrefs.HasKey("Quality"))
        {
            QualitySettings.SetQualityLevel(PlayerPrefs.GetInt("Quality"));

        }


    }

    public void quit()
    {
        Debug.Log("quit");
        Application.Quit();

    }



    public void a()
    {
       
        MyGameServices.unlock("CgkI3NCKuLMNEAIQAg");
    }


    
    
    public void signInGoogle()
    {
        MyGameServices.Instance.SignIn();
    }
    public void ShowAchievements()
    {
       
        MyGameServices.ShowAchievementsUI();
    }
}
