  // using System.Collections;
  // using System.Collections.Generic;
  // using UnityEngine;
  // using Photon.Pun;
  // using Photon.Realtime;
  // using System.IO;
  // using UnityEngine.SceneManagement;
  // using UnityEngine.UI;
  //
  //
  // public class PhotonRoom : MonoBehaviourPunCallbacks, IInRoomCallbacks
  // {
  //     public static PhotonRoom room;
  //     private PhotonView PV;
  //
  //     public bool isGameLoaded;
  //     public int currentScene;
  //
  //     //Player info
  //     Player[] photonPlayers;
  //     public int playersInRoom;
  //     public int myNumberInRoom;
  //
  //     public int playersInGame;
  //
  //     //Delayed Start
  //     private bool readyToCount;
  //     private bool readyToStart;
  //     public float startingTime;
  //     private float lessThanMaxPlayers;
  //     private float atMaxPlayers;
  //     private float timeToStart;
  //
  //     public GameObject lobbyGO;
  //     public GameObject roomGO;
  //     public Transform playersPanel;
  //     public GameObject playerListingPrefab;
  //     public GameObject startButton;
  //
  //
  //     private void Awake(){
  //       if(PhotonRoom.room == null){
  //         PhotonRoom.room = this;
  //       }else{
  //         if(PhotonRoom.room != this){
  //           Destroy(PhotonRoom.room.gameObject);
  //           PhotonRoom.room  = this;
  //         }
  //       }
  //
  //       DontDestroyOnLoad(this.gameObject);
  //     }
  //
  //     public override void OnEnable(){
  //       base.OnEnable();
  //       PhotonNetwork.AddCallbackTarget(this);
  //       SceneManager.sceneLoaded += OnSceneFinishedLoading;
  //     }
  //
  //     public override void OnDisable(){
  //       base.OnDisable();
  //       PhotonNetwork.RemoveCallbackTarget(this);
  //       SceneManager.sceneLoaded -= OnSceneFinishedLoading;
  //     }
  //
  //     //use this for Instantialization
  //     void start(){
  //       PV = GameComponent<PhotonView>();
  //       readyToCount = false;
  //       readyToStart = false;
  //       lessThanMaxPlayers = startingTime;
  //       atMaxPlayers = 6;
  //       timeToStart = startingTime;
  //     }
  //
  //     void update(){
  //       if(MultiplayerSetting.multiplayerSetting.delayStart){
  //         if(playersInRoom == 1){
  //           RestartTimer();
  //         }
  //         if(!isGameLoaded){
  //           if(readyToStart){
  //             atMaxPlayers -= TIme.deltaTime;
  //             lessThanMaxPlayers = atMaxPlayers;
  //             timeToStart = atMaxPlayers;
  //           }else if(readyToCount){
  //             lessThanMaxPlayers -= Time.deltaTime;
  //             timeToStart = lessThanMaxPlayers;
  //           }
  //
  //           Debug.Log("Display time to start to the players " + timeToStart);
  //           if(timeToStart <= 0){
  //             StartGame();
  //           }
  //         }
  //       }
  //     }
  //
  //     public override void OnJoinedRoom(){
  //       base.OnJoinedRoom();
  //       Debug.Log("We are now in a room");
  //
  //       lobbyGO.SetActive(false);
  //       roomGO.SetActive(true);
  //       if(PhotonNetwork.IsMasterClient){
  //         startButton.SetActive(true);
  //       }
  //       ClearPlayerListings();
  //       ListPlayers();
  //
  //       photonPlayers = PhotonNetwork.PlayerList;
  //       playersInRoom = photonPlayers.Length;
  //       myNumberInRoom = playersInRoom;
  //       PhotonNetwork.NickName = myNumberInRoom.ToString();
  //       //for delay start only
  //       if(MultiplayerSetting.multiplayerSetting.delayStart){
  //         Deug.Log("Displayer players in room out of max players possible(" + playersInRoom +": "+MultiplayerSetting);
  //         if(playersInRoom > 1){
  //           readyToCount = true;
  //         }
  //         if(playersInRoom == MultiplayerSetting.multiplayerSetting.maxPlayers){
  //           readyToStart = true;
  //           if(!PhotonNetwork.IsMasterClient){
  //             return;
  //           }
  //           PhotonNetwork.CurrentRoom.IsOpen = false;
  //         }
  //       }
  //       // else{
  //       //   StartGame();
  //       // }
  //     }
  //
  //     void ClearPlayerListings(){
  //       for(int i = playersPanel.childCount - 1; i >= 0; i--){
  //         Destroy(playersPanel.GetChild(i).gameObject);
  //       }
  //     }
  //     void ListPlayers(){
  //       if(PhotonNetwork.InRoom){
  //         foreach(Player player in PhotonNetwork.PlayerList){
  //           GameObject tempListing = Instantiate(playerListingPrefab, playersPanel);
  //           Text tempText = tempListing.trasform.GetChild(0).GetComponent<Text>();
  //           tempText.text = player.NickName;
  //         }
  //       }
  //     }
  //
  //     public override void OnPlayerEnteredRoom(Player newPlayer){
  //       //update when a new player joins
  //       base.OnPlayerEnteredRoom(newPlayer);
  //       Debug.Log("A new player has joined the room");
  //       ClearPlayerListings();
  //       ListPlayers();
  //       photonPlayers = PhotonNetwork.PlayerList;
  //       playersInRoom++;
  //       //delay start OnJoinedLobby
  //       if(MultiplayerSetting.multiplayerSetting.delayStart){
  //         Debug.Log("Displayer players in room out of max players possible" + playersInRoom +": "+MultiplayerSetting);
  //         if(playersInRoom > 1){
  //           readyToCount = true;
  //         }
  //         if(playersInRoom == MultiplayerSetting.multiplayerSetting.maxPlayers){
  //           readyToStart = true;
  //           if(!PhotonNetwork.IsMasterClient){
  //             return;
  //           }
  //           PhotonNetwork.CurrentRoom.IsOpen = false;
  //         }
  //       }
  //     }
  //
  //     public void StartGame(){
  //       isGameLoaded = true;
  //       if(!PhotonNetwork.IsMasterClient){
  //         return;
  //       }
  //       if(MultiplayerSetting.multiplayerSetting.delayStart){
  //         PhotonNetwork.CurrentRoom.IsOpen = false;
  //       }
  //       PhotonNetwork.LoadLevel(MultiplayerSetting.multiplayerSetting.multiplayerScene);
  //     }
  //
  //     void RestartTimer(){
  //         //restarts the time for when players leave the room(Delay start)
  //         lessThanMaxPlayers = startingTime;
  //         timeToStart = startingTime;
  //         atMaxPlayers = 2;
  //         readyToCount = false;
  //         readyToStart = false;
  //     }
  //
  //     void OnSceneFinishedLoading(Scene scene, LoadSceneMode mode){
  //         //called when multiplayer scene is loaded
  //         currentScene = scene.buildIndex;
  //         if(currentScene == MultiplayerSetting.multiplayerSetting.multiplayerScene){
  //           isGameLoaded = true;
  //           //for delay start game
  //           if(MultiplayerSetting.multiplayerSetting.delayStart){
  //             PV.RPC("RPC_LoadedGameScene", RpcTarget.MasterClient);
  //           }
  //
  //           //for non delay start game
  //           else{
  //             RPC_CreatePlayer();
  //           }
  //         }
  //     }
  //
  //     [PunRPC]
  //     private void RPC_LoadedGameScene(){
  //       playersInGame++;
  //       if(playersInGame == PhotonNetwork.PlayerList.Length){
  //         PV.RPC("RPC_CreatePlayer", RpcTarget.ALL);
  //       }
  //     }
  //
  //     [PunRPC]
  //     private void RPC_CreatePlayer(){
  //       //create player network controller but not play character
  //       PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PhotonNetworkPlayer"), transform.position, Quan); //!!!
  //     }
  //
  //     public override void onPlayerLeftRoom(Player otherPlayer){
  //       base.onPlayerLeftRoom(otherPlayer);
  //       Debug.Log(otherPlayer.NickName + "has left the game");
  //       playersInRoom--;
  //       ClearPlayerListings();
  //       ListPlayers();
  //     }
  // }
