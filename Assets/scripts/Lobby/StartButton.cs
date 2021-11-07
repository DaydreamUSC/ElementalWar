using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
public class StartButton : MonoBehaviour
{
    public InputField playerNameInput;

    public void StartClicked(){
      Debug.Log("playerName: "+playerNameInput.text);
      LobbyPlayerName.playerNameDisplay = playerNameInput.text;
      SceneManager.LoadScene("Lobby");
    }
    public void RandomNameClicked(){
      LobbyPlayerName.playerNameDisplay = RandomString();
      Debug.Log("Random Name:"+LobbyPlayerName.playerNameDisplay);

      SceneManager.LoadScene("Lobby");
      //PhotonLobby.QuickMatch();
    }
    public string RandomString(){
      const string glyphs= "abcdefghijklmnopqrstuvwxyz0123456789";
      int charAmount = Random.Range(3, 8); //set those to the minimum and maximum length of your string
      string myString = "";
      for(int i=0; i<charAmount; i++){
        myString += glyphs[Random.Range(0, glyphs.Length)];
      }
      return myString;
    }
}
