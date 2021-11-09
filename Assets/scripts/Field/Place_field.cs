using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Place_field : MonoBehaviour
{
    SpriteRenderer sprite;

    private PhotonView photonView;
    public bool player1_hasfield = false;
    private GameObject player1_current_field;
    public string player1_field_color = "None";
    public bool player2_hasfield = false;
    private GameObject player2_current_field;
    public string player2_field_color = "None";
    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        photonView = GetComponent<PhotonView>();
    }

    public void R(){
      Debug.Log("Redfield");
      if (PhotonNetwork.IsMasterClient)
      {
          if (!player1_hasfield)
          {
              player1_hasfield = true;
          }
          else
          {
              PhotonNetwork.Destroy(player1_current_field);
          }
          change_field_player1("red");
      }else
      {
          if (!player2_hasfield)
          {
              player2_hasfield = true;
          }
          else
          {
                  //Debug.Log("current_field_player2" + player2_current_field.name);
              PhotonNetwork.Destroy(player2_current_field);
          }
          change_field_player2("red");
      }

    }
    public void B(){
      Debug.Log("Bluefield");
      if (PhotonNetwork.IsMasterClient)
      {
          if (!player1_hasfield)
          {
              player1_hasfield = true;
          }
          else
          {
              PhotonNetwork.Destroy(player1_current_field);
          }
          change_field_player1("blue");
      }

      else
      {
          if (!player2_hasfield)
          {
              player2_hasfield = true;
          }
          else
          {
              PhotonNetwork.Destroy(player2_current_field);
          }
          change_field_player2("blue");
      }
    }

    public void Y(){
      Debug.Log("Yellowfield");
      if (gameObject.name == "Player1")
      {
          if (!player1_hasfield)
          {
              player1_hasfield = true;
          }
          else
          {

              PhotonNetwork.Destroy(player1_current_field);
          }
          change_field_player1("yellow");
      }

      else
      {
          if (!player2_hasfield)
          {
              player2_hasfield = true;
          }
          else
          {
              PhotonNetwork.Destroy(player2_current_field);
          }
          change_field_player2("yellow");
      }
    }
    // Update is called once per frame


    [PunRPC]
    public void change_field_player1(string color)
    {
        if (color == "red") {
            //Debug.Log("triggger!!!");
        player1_current_field = PhotonNetwork.Instantiate("Player1_fire_field", new Vector3(16.6f, 0, -5), Quaternion.identity);

        player1_current_field.name = "Player1_fire_field";
        player1_field_color = "red";

        }

        if (color == "blue")
        {
            player1_current_field =  PhotonNetwork.Instantiate("Player1_frozen_field", new Vector3(16.6f, 0, -5), Quaternion.identity);

            player1_current_field.name = "Player1_frozen_field";
            player1_field_color = "blue";
        }
        if (color == "yellow")
        {
            player1_current_field = PhotonNetwork.Instantiate("Player1_lighting_field", new Vector3(16.6f, 0, -5), Quaternion.identity);
            player1_current_field.name = "Player1_lighting_field";
            player1_field_color = "yellow";
        }
        //player1_hasfield = true;
    }


    [PunRPC]
    public void change_field_player2(string color)
    {
        if (color == "red")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_fire_field", new Vector3(-16.9f, 0, -5), Quaternion.identity);
            player2_current_field.name = "Player2_fire_field";
            player2_field_color = "red";

        }

        if (color == "blue")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_frozen_field", new Vector3(-16.9f, 0, -5), Quaternion.identity);
            player2_current_field.name = "Player2_frozen_field";
            player2_field_color = "blue";
        }
        if (color == "yellow")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_lighting_field", new Vector3(-16.9f, 0, -5), Quaternion.identity);
            player2_current_field.name = "Player2_lighting_field";
            player2_field_color = "yellow";
        }
        //player2_hasfield = true;
    }
}
