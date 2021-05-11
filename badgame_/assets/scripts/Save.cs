using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Save : MonoBehaviour
{
    public MyGameServices services;
    public Graphics graphics;
    public Transform playerData;
    public Vector3[] spawns;
    string savee = "32rsad";
    // Start is called before the first frame update
    private void Start()
    {
        if(PlayerPrefs.GetInt(savee) != 1)
        {
            Debug.Log("OLDsaveGPS:" + saveGPS.levelSave);
            saveGPS.levelSave = 1;

            Debug.LogError("NEWsaveGPS:" + saveGPS.levelSave.ToString());
 
            PlayerPrefs.SetInt(savee, 1);
            reset();
        }
    }
    public void SaveData(int rot,int i)
    {
        PlayerPrefs.SetFloat("playerPX", spawns[i].x);
        PlayerPrefs.SetFloat("playerPY", spawns[i].y);
        PlayerPrefs.SetFloat("playerPZ", spawns[i].z);
        PlayerPrefs.SetFloat("rotate", rot);
        Vector3 pos = new Vector3(PlayerPrefs.GetFloat("playerPX"), PlayerPrefs.GetFloat("playerPY"), PlayerPrefs.GetFloat("playerPZ"));

        Debug.Log("save : "+pos);

    }
    public void reset()
    {
        
        PlayerPrefs.SetFloat("rotate", 0);
        PlayerPrefs.SetFloat("playerPX", -615.27f); 
        PlayerPrefs.SetFloat("playerPY", 4f); 
        PlayerPrefs.SetFloat("playerPZ", -31.13f);
        PlayerPrefs.SetInt("LEVEL", 1);
        PlayerPrefs.SetString("endT","no");

    }
    public void DeleteSaves()
    {
        PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
    }
}
