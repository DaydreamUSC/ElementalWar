using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;

public class PhotonManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public static float startTime;
    public string localComputerName = System.Environment.UserName;
    public static bool isWinner;
    void Start()
    {
        isWinner = true;
        PhotonNetwork.ConnectUsingSettings();
        // UnityEngine.Analytics
        #if ENABLE_CLOUD_SERVICES_ANALYTICS
        Debug.Log("Start   " + AnalyticsSessionInfo.userId + " " + AnalyticsSessionInfo.sessionState + " " + AnalyticsSessionInfo.sessionId + " " + AnalyticsSessionInfo.sessionElapsedTime);
        AnalyticsSessionInfo.sessionStateChanged += OnSessionStateChanged;
        #endif
        //Debug.Log(PhotonNetwork.IsMasterClient);
        /*Debug.Log("PM Player1ID: "+PhotonNetwork.CurrentRoom.CustomProperties["Player1ID"]);
        Debug.Log("PM LocalPlayerID: "+PhotonNetwork.LocalPlayer);*/

        if(PhotonNetwork.CurrentRoom.CustomProperties["Player1ID"] == PhotonNetwork.LocalPlayer){
            GameObject Player1 = PhotonNetwork.Instantiate(StartButton.selectedCharacterName, new Vector3(-15, 0, 5), Quaternion.identity);
            Debug.Log("Instantiate Player1"+PhotonNetwork.LocalPlayer);
            Player1.name = "Player1";
            PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"MasterClientName", LobbyPlayerName.playerNameDisplay}});
        }
        else if(PhotonNetwork.CurrentRoom.CustomProperties["Player2ID"] == PhotonNetwork.LocalPlayer){
            GameObject Player2 = PhotonNetwork.Instantiate(StartButton.selectedCharacterName, new Vector3(15, 0, 5), Quaternion.identity);

            Debug.Log("Instantiate Player2"+PhotonNetwork.LocalPlayer);
            Player2.name = "Player2";
            PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"ClientName", LobbyPlayerName.playerNameDisplay}});
        }
        else{
            Debug.Log("PhotonManager Strat() Player2ID: "+PhotonNetwork.CurrentRoom.CustomProperties["Player1ID"]);
            Debug.Log("PhotonManager Strat() LocalPlayerID: "+PhotonNetwork.LocalPlayer);
        }

        ExitGames.Client.Photon.Hashtable ht = new ExitGames.Client.Photon.Hashtable();
        ht["what"] = 1;
        PhotonNetwork.LocalPlayer.CustomProperties = ht;
    }


    /*public override void OnConnectedToMaster(){
        PhotonNetwork.JoinLobby();
    }
    public override void OnJoinedLobby(){
        PhotonNetwork.JoinRandomRoom();
        //PhotonNetwork.JoinOrCreateRoom("Room", new RoomOptions {MaxPlayers = 2}, TypedLobby.Default);
    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        PhotonNetwork.CreateRoom(null, new RoomOptions {MaxPlayers = 2}, TypedLobby.Default);
    }*/
    /*public override void OnJoinedRoom(){
        startTime = Time.time;
        if (PhotonNetwork.IsMasterClient)
        {
            Debug.Log("Is MasterClient");
            GameObject Player1 = PhotonNetwork.Instantiate("Player1", new Vector3(-15, 0, -5), Quaternion.identity);
            Player1.name = "Player1";
            PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"field", 1}});
            //PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"MasterClientName", System.Environment.UserName}});
            PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"MasterClientName", LobbyPlayerName.playerNameDisplay}});

            //PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"Player1",  System.Environment.UserName}});
        }
        else
        {
            Debug.Log("Is Client");
            int direction = (int)PhotonNetwork.CurrentRoom.CustomProperties["field"];
            GameObject Player2 = PhotonNetwork.Instantiate("Player1", new Vector3(direction*15, 0, -5), Quaternion.identity);
            Player2.name = "Player2";
            //PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"ClientName", System.Environment.UserName}});
            PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"ClientName", LobbyPlayerName.playerNameDisplay}});
        }

        ExitGames.Client.Photon.Hashtable ht = new ExitGames.Client.Photon.Hashtable();
        ht["what"] = 1;
        PhotonNetwork.LocalPlayer.CustomProperties = ht;
        //Debug.Log(PhotonNetwork.IsMasterClient);
    }*/
    public override void OnMasterClientSwitched(Photon.Realtime.Player newMasterClient) {
        /*int fieldSide = -1*Player.side;
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"field", fieldSide}});*/
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"MasterClientName", System.Environment.UserName}});
    }
    public override void OnLeftRoom(){
        if(isWinner)
            SceneManager.LoadScene("WinScene");
        else
            SceneManager.LoadScene("LoseScene");
    }

    // UnityEngine.Analytics
    #if ENABLE_CLOUD_SERVICES_ANALYTICS
    void OnSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged)
    {
        Debug.Log("Call    " + AnalyticsSessionInfo.userId  + " " + sessionState + " " + sessionId + " " + sessionElapsedTime + " " + sessionChanged);
    }
    #endif
}
