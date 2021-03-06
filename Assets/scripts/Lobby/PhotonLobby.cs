using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class PhotonLobby : MonoBehaviourPunCallbacks, ILobbyCallbacks
{
    public static PhotonLobby lobby;
    public string roomName;
    public int roomSize;
    public GameObject roomListingPrefab;
    public Transform roomsPanel;
    public bool randomMatch;
    private void Awake(){
      lobby = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        randomMatch = false;
    }
    
    public override void OnConnectedToMaster(){
      //Debug.Log("Player has connected to the Photon Master server");
      PhotonNetwork.AutomaticallySyncScene = true;

    }
    public override void OnRoomListUpdate(List<RoomInfo> roomList){
      base.OnRoomListUpdate(roomList);
      RemoveRoomListings();
      foreach(RoomInfo room in roomList){
        ListRoom(room);
      }
    }

    void ListRoom(RoomInfo room){
      if(room.IsOpen && room.IsVisible){
        GameObject tempListing = Instantiate(roomListingPrefab, roomsPanel);
        RoomButton tempButton = tempListing.GetComponent<RoomButton>();
        tempButton.roomName = room.Name;
        tempButton.roomSize = room.MaxPlayers;
        tempButton.SetRoom();
      }
    }

    void RemoveRoomListings(){
      while(roomsPanel.childCount != 0){
        Destroy(roomsPanel.GetChild(0).gameObject);
      }
    }

    public void CreateRoom(){
      //Debug.Log("Trying to create a new room");
      RoomOptions roomOps = new RoomOptions(){
        IsVisible = true,
        IsOpen = true,
        MaxPlayers = (byte)roomSize
      };
      randomMatch = false;
      PhotonNetwork.CreateRoom(roomName, roomOps, TypedLobby.Default);
      SceneManager.LoadScene("WaitingScene");
      //PhotonNetwork.SetMasterClient(PhotonNetwork.LocalPlayer);
      //SceneManager.LoadScene("MainGame");
    }
    public override void OnCreateRoomFailed(short returnCode, string message){
      Debug.Log("Tried to create a new room but failed, there must be a room with the same name.");
    }

    public void OnRoomNameChanged(string nameIn){
      roomName = nameIn;

    }

    public void OnRoomSizeChanged(string sizeIn){
      // roomSize = int.Parse(sizeIn);
      roomSize = 2;

    }
    
    public void JoinLobbyOnClick(){
      randomMatch = false;
      if(!PhotonNetwork.InLobby){
        PhotonNetwork.JoinLobby();
      }
    }
    public void QuickMatch(){
      randomMatch = true;
      PhotonNetwork.JoinLobby();
    }
    public override void OnJoinedLobby(){
      if(randomMatch)
        PhotonNetwork.JoinRandomRoom();
    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        PhotonNetwork.CreateRoom(null, new RoomOptions {MaxPlayers = 2}, TypedLobby.Default);
        SceneManager.LoadScene("WaitingScene");
    }
}
