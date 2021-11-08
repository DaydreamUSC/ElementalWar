using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
public class RoomMatching : MonoBehaviourPunCallbacks, ILobbyCallbacks
{
    // Start is called before the first frame update
    void Start()
    {
      isLoaded = false;
    }
    public static bool isLoaded = false;
    void Update(){
      if(PhotonNetwork.InRoom && (PhotonNetwork.CurrentRoom.PlayerCount == 2)  && !isLoaded && PhotonNetwork.CurrentRoom.CustomProperties.ContainsKey("Player2ID")){
        isLoaded = true;
        if(PhotonNetwork.CurrentRoom.CustomProperties["Player1ID"] == PhotonNetwork.LocalPlayer){
          //Debug.Log("Inside CheckReady()");
          SceneManager.LoadScene("MainGame");
        }
      }
    }

    public override void OnJoinedRoom(){
      Debug.Log("Inside OnjoinedRoom()");
      if(PhotonNetwork.InRoom && PhotonNetwork.CurrentRoom.PlayerCount == 2){
        Debug.Log("Player2 Joined Room");
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"Player2ID", PhotonNetwork.LocalPlayer}});
      }
      else if(PhotonNetwork.InRoom && PhotonNetwork.CurrentRoom.PlayerCount == 1){
        Debug.Log("Player1 Joined Room");
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"Player1ID", PhotonNetwork.LocalPlayer}});
        //Debug.Log("Player1ID: "+PhotonNetwork.LocalPlayer);
      }
      else{
        Debug.Log("In OnJoinedRoom() More than 2 Players");
      }
    }
    public void LeaveWaitingRoom(){
        PhotonNetwork.Disconnect();
    }
    public override void OnLeftRoom(){
        SceneManager.LoadScene("Lobby");
    }
}
