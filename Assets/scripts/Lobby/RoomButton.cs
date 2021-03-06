using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

public class RoomButton : MonoBehaviourPunCallbacks, ILobbyCallbacks
{
    // public Text playerNameDisplay;
    public Text nameText;
    public Text sizeText;

    public string roomName;
    public int roomSize;

    public void SetRoom(){
      nameText.text = roomName;
      sizeText.text = roomSize.ToString();
    }
    public void JoinRoomOnClicked(){
      PhotonNetwork.JoinRoom(roomName);
      Debug.Log("Player2 joined");
      SceneManager.LoadScene("WaitingScene");
    }

}
