using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LobbyPlayerName : MonoBehaviour
{
    public static string playerNameDisplay;
    public Text playerName;

    void Start(){
      playerName.text = playerNameDisplay;
    }
}
