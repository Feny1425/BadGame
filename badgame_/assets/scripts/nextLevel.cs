using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class nextLevel : MonoBehaviour
{
    bool start;
    public loadLevel load;
    public Save save;
    public TextMeshProUGUI mission;
    public string missionTxt;
    public int rot = 0;
    public int lvl_num = 2;
    // Update is called once per frame
    private void Update()
    {
        if (load.level_now != lvl_num) {
            save.SaveData(rot,lvl_num);
            
            load.next(lvl_num);
            
        }
    }
    private void Start()
    {
        mission.text = missionTxt;
    }
}
