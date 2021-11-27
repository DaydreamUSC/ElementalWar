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
    public string player1_field_property = "None";
    public bool player2_hasfield = false;
    private GameObject player2_current_field;
    public string player2_field_property = "None";
    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        photonView = GetComponent<PhotonView>();
    }

    public void No()
    {
        Debug.Log("No");
        PlaceField("No");

    }
    // Update is called once per frame
    public void R()
    {
        Debug.Log("Redfield");
        PlaceField("red");

    }
    public void B()
    {
        Debug.Log("Bluefield");
        PlaceField("blue");
    }

    public void Y()
    {
        Debug.Log("Yellowfield");
        PlaceField("yellow");
    }
    // Update is called once per frame

    public void Enlarge()
    {
        Debug.Log("");
        PlaceField("Enlarge");
    }

    public void PlaceField(string property)
    {
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
            change_field_player1(property);
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
            change_field_player2(property);
        }
    }




    [PunRPC]
    public void change_field_player1(string property)
    {
        if (property == "No") {
            //Debug.Log("triggger!!!");
        player1_hasfield = false;

        }
        else if (property == "red") {
            //Debug.Log("triggger!!!");
        player1_current_field = PhotonNetwork.Instantiate("Player1_fire_field", new Vector3(19.3134f, 5.4915f, 5), Quaternion.identity);

        player1_current_field.name = "Player1_fire_field";
        player1_field_property = "red";

        }

        else if (property == "blue")
        {
            player1_current_field =  PhotonNetwork.Instantiate("Player1_frozen_field", new Vector3(19.3455f, 5.6018f, 5), Quaternion.identity);
            player1_current_field.name = "Player1_frozen_field";
            player1_field_property = "blue";
        }
        else if (property == "yellow")
        {
            player1_current_field = PhotonNetwork.Instantiate("Player1_lighting_field", new Vector3(19.3527f, 5.5493f, 5), Quaternion.identity);
            player1_current_field.name = "Player1_lighting_field";
            player1_field_property = "yellow";
        }
        else if (property == "Enlarge")
        {
            player1_current_field = PhotonNetwork.Instantiate("Player1_Enlarge_field", new Vector3(19.3189f,5.6184f, 5), Quaternion.identity);
            player1_current_field.name = "Player1_Enlarge_field";
            player1_field_property = "Enlarge";
        }


        //player1_hasfield = true;
    }


    [PunRPC]
    public void change_field_player2(string property)
    {
        if (property == "No") {
            //Debug.Log("triggger!!!");
        player1_hasfield = false;

        }
        else if (property == "red")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_fire_field", new Vector3(-19.065f, 5.6249f, 5), Quaternion.identity);
            player2_current_field.name = "Player2_fire_field";
            player2_field_property = "red";

        }

        else if (property == "blue")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_frozen_field", new Vector3(-19.0406f, 5.5633f, 5), Quaternion.identity);
            player2_current_field.name = "Player2_frozen_field";
            player2_field_property = "blue";
        }
        else if (property == "yellow")
        {
            Debug.Log("called me!!!");
            player2_current_field = PhotonNetwork.Instantiate("Player2_lighting_field", new Vector3(-18.9644f, 5.5967f, 5), Quaternion.identity);
            player2_current_field.name = "Player2_lighting_field";
            player2_field_property = "yellow";
        }
        else if (property == "Enlarge")
        {
            player2_current_field = PhotonNetwork.Instantiate("Player2_Enlarge_field", new Vector3(-19.0624f, 5.5759f, 5), Quaternion.identity);
            player2_current_field.name = "Player2_Enlarge_field";
            player2_field_property = "Enlarge";
        }
        //player2_hasfield = true;
    }
}
