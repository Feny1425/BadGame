using UnityEngine;
using GooglePlayGames;
using System.Text;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;



public class MyGameServices :  MonoBehaviour
{
    public static MyGameServices Instance { get; private set; }

    
   
    // Use this for initialization
    void Start()
    {

        Instance = this;

      


        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
            .EnableSavedGames().Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.Activate();

        if (!Social.localUser.authenticated)
        {
            SignIn();
        }

    }
    public void SignIn()
    {
        if (Social.localUser.authenticated)
        {
            return;
        }

        Social.localUser.Authenticate(success => {

            Debug.Log("sign in:   "+success);

                 
           
        });
    }
   
    public static void unlock(string id)
    {
        UnlockAchievement(id);
    }
    public static void stepsAchievement(string id,int incre)
    {
        IncrementAchievement(id, incre);
    }

    #region Achievements
    public static void UnlockAchievement(string id)
    {
        Social.ReportProgress(id, 100, success => { });
    }

    public static void IncrementAchievement(string id, int stepsToIncrement)
    {
        PlayGamesPlatform.Instance.IncrementAchievement(id, stepsToIncrement, success => { });
    }

    public static void ShowAchievementsUI()
    {
        Social.ShowAchievementsUI();
    }
    #endregion /Achievements

    #region Leaderboards
    public static void AddScoreToLeaderboard(string leaderboardId, long score)
    {
        Social.ReportScore(score, leaderboardId, success => { });
    }

    public static void ShowLeaderboardsUI()
    {
        Social.ShowLeaderboardUI();
    }
    #endregion /Leaderboards

}
