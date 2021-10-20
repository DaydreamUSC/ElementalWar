using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.Analytics;

public class Game_Manager : MonoBehaviour
{
    
    // Start is called before the first frame update
    public GameObject player1;
    public GameObject player2;

    void Start()
    {
        Debug.Log("intoGM");
        // UnityEngine.Analytics
        #if ENABLE_CLOUD_SERVICES_ANALYTICS
        Debug.Log("Start   " + AnalyticsSessionInfo.userId + " " + AnalyticsSessionInfo.sessionState + " " + AnalyticsSessionInfo.sessionId + " " + AnalyticsSessionInfo.sessionElapsedTime);
        AnalyticsSessionInfo.sessionStateChanged += OnSessionStateChanged;
        #endif
        
        
        GameObject player1 = GameObject.Find("Player1");
        //GameObject player2 = GameObject.Find("Player2");
        //player1.SendMessage("Player1Turn"); //assume that it's palyer1's turn when the game starts
    }
    // UnityEngine.Analytics
    #if ENABLE_CLOUD_SERVICES_ANALYTICS
    void OnSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged)
    {
        Debug.Log("Call    " + AnalyticsSessionInfo.userId  + " " + sessionState + " " + sessionId + " " + sessionElapsedTime + " " + sessionChanged);
    }
    #endif

    // Update is called once per frame
    void Update()
    {
    }

}


