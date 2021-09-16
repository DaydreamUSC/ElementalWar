using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game_Manager : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject player1;
    public GameObject player2;

    void Start()
    {
        GameObject player1 = GameObject.Find("Player1");
        GameObject player2 = GameObject.Find("Player2");
        player1.SendMessage("Player1Turn"); //assume that it's palyer1's turn when the game starts
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.N))
        {
            player1.SendMessage("Player1Turn");
            
        }

        if (Input.GetKey(KeyCode.B))
        {
            player2.SendMessage("Player2Turn");
        }
    }

}
