using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class loadLevel : MonoBehaviour
{
    string LEVEL_TAG = "levels";
    public MyGameServices services;
    public GameObject[] levels;
    public GameObject player;
    int level;
    public int level_now;
    public bool truel;
    public Save save;
    void Start()
    {
      
        
        save.SaveData(0, PlayerPrefs.GetInt(LEVEL_TAG, 1)-1);
        if (PlayerPrefs.GetInt(LEVEL_TAG, 1) == 1)
        {

            PlayerPrefs.SetFloat("rotate", 0);
            PlayerPrefs.SetFloat("playerPX", -615.27f);
            PlayerPrefs.SetFloat("playerPY", 4f);
            PlayerPrefs.SetFloat("playerPZ", -31.13f);
        }
        load();
        player.SetActive(true);
    }
    public void load()
    {
        level_now = PlayerPrefs.GetInt(LEVEL_TAG);
        if (PlayerPrefs.HasKey(LEVEL_TAG))
        {

            level = PlayerPrefs.GetInt(LEVEL_TAG, 1);
            Debug.LogWarning("Level : " + level);
            for (int i = level; i > 1; i--)
            {
                Destroy(levels[i - 2]);
            }

            if (levels[level - 1] != null)
            {

                levels[level - 1].SetActive(true);
                Debug.Log("loaded");
            }

        }
        else
        {
            PlayerPrefs.SetInt(LEVEL_TAG, 1);
            levels[0].SetActive(true);
        }
    }
    public void next(int lvl_num)
    {
        PlayerPrefs.SetInt(LEVEL_TAG, lvl_num);
        PlayerPrefs.SetInt("LEVEL", PlayerPrefs.GetInt(LEVEL_TAG));
        saveGPS.levelSave = lvl_num;

        load();
        Debug.Log("lvl: " + saveGPS.levelSave);
    }

}
