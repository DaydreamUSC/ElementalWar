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
    public bool isLoaded = false;
    void Update(){
      if(PhotonNetwork.InRoom && PhotonNetwork.CurrentRoom.PlayerCount == 2 && !isLoaded){
        isLoaded = true;
        SceneManager.LoadScene("MainGame");
      }
    }
    public override void OnJoinedRoom(){
      Debug.Log("Inside OnjoinedRoom()");
      if(PhotonNetwork.InRoom && PhotonNetwork.CurrentRoom.PlayerCount == 2){
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"Player2ID", PhotonNetwork.LocalPlayer}});
        //SceneManager.LoadScene("MainGame");
      }
      else{
        PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"Player1ID", PhotonNetwork.LocalPlayer}});
        //Debug.Log("Player1ID: "+PhotonNetwork.LocalPlayer);
      }
    }
    public void LeaveWaitingRoom(){
        PhotonNetwork.Disconnect();
    }
    public override void OnLeftRoom(){
        SceneManager.LoadScene("Lobby");
    }
}
