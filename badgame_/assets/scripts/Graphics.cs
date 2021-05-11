using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;
using TMPro;

public class Graphics : MonoBehaviour
{
    public float V, H ,S;
    public int quality;
    public TMP_Dropdown dropdown;
    public Slider SintivityHorizontal;
    public Slider SintivityVertical;
    public Slider VolumeS;
    public AudioMixer volume;
     private void Start()
    {
        //SintivityHorizontal
        
            SintivityHorizontal.value = PlayerPrefs.GetFloat("SintivityHorizontal", 10);
            H = PlayerPrefs.GetFloat("SintivityHorizontal", 10);
        

        
            SintivityVertical.value = PlayerPrefs.GetFloat("SintivityVertical", 10);
            V = PlayerPrefs.GetFloat("SintivityVertical",10);

        
        
            VolumeS.value = PlayerPrefs.GetFloat("Volume",0);
            S = PlayerPrefs.GetFloat("Volume",0);
            volume.SetFloat("MasterVolume", S);
        
            
            QualitySettings.SetQualityLevel(PlayerPrefs.GetInt("Quality",0));
            dropdown.value = PlayerPrefs.GetInt("Quality",0);

        

    }
   
    public void horizontalSinti(float val)
    {
        PlayerPrefs.SetFloat("SintivityHorizontal", val);
        H = PlayerPrefs.GetFloat("SintivityHorizontal");
        updateSin();
    }
    public void VerticalSinti(float val)
    {
        PlayerPrefs.SetFloat("SintivityVertical", val);
        V = PlayerPrefs.GetFloat("SintivityVertical");
        updateSin();
    }
    public void Volume(float val)
    {

        PlayerPrefs.SetFloat("Volume", val);
        S = PlayerPrefs.GetFloat("Volume");
        volume.SetFloat("MasterVolume", S);
    }
    public float normal_sinti(string Ppr,float val)
    {
        
        PlayerPrefs.SetFloat(Ppr, val);
        

        return val;
    }

    [System.Obsolete]
    public void graph(int val)
    {
        quality = val;
        QualitySettings.SetQualityLevel(val);
        PlayerPrefs.SetInt("Quality", val);
        

       
    }
   
    public void quit()
    {
        Application.Quit();
    }
    public void mainmenu()
    {
        SceneManager.LoadScene(0);
    }
    public void updateSin()
    {
        saveGPS.HoriSanti = PlayerPrefs.GetFloat("SintivityHorizontal", 10);
        saveGPS.VirtiSanti = PlayerPrefs.GetFloat("SintivityVertical", 10);
    }
}
