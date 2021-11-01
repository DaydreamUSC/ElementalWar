using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartButton : MonoBehaviour
{
    public InputField playerNameInput;

    public void StartClicked(){
      Debug.Log("playerName: "+playerNameInput.text);
      LobbyPlayerName.playerNameDisplay = playerNameInput.text;
      SceneManager.LoadScene("Lobby");
    }
}
