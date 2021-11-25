using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class bullet_property : MonoBehaviour
{
    public SpriteRenderer bulletSprite;
    public string col;
    private PhotonView photonView;
    public string owner;
    public char ownerID;
    public Vector3 scale;
    public BoxCollider2D Collider;
    public int bullet_Damage;
    // Start is called before the first frame update
    void Start()
    {
        bulletSprite = GetComponent<SpriteRenderer>();
        col = "white";
        photonView = GetComponent<PhotonView>();
        scale = transform.localScale;
        Collider = GetComponent<BoxCollider2D>();
        // Debug.Log("bullet_D");
        // Debug.Log(bullet_Damage);
    }

    // Update is called once per frame



    //field_effect
    void OnTriggerEnter2D(Collider2D other)
    {
        ownerID = GetComponent<PhotonView>().Owner.ToString()[2];
        //Debug.Log("ownerID" + ownerid);

        //Player1 field
        if (other.gameObject.tag == "Player1_field" && ownerID.ToString() == "1")
        {
            if (other.gameObject.name == "Player1_fire_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "red");
            }

            if(other.gameObject.name == "Player1_frozen_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "blue");
            }
            if(other.gameObject.name == "Player1_lighting_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "yellow");
            }
            if (other.gameObject.name == "Player1_Enlarge_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "enlarge");
            }
        }

        //Player2 field
        if (other.gameObject.tag == "Player2_field" && ownerID.ToString() == "2")
        {
            if (other.gameObject.name == "Player2_fire_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "red");
            }

            if (other.gameObject.name == "Player2_frozen_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "blue");
            }
            if (other.gameObject.name == "Player2_lighting_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "yellow");
            }
            if (other.gameObject.name == "Player2_Enlarge_field")
            {
                photonView.RPC("change_color", RpcTarget.All, "enlarge");
            }
        }




    }
    void Update()
    {

    }


    [PunRPC]
    public void change_color(string color)
    {
        if (color == "red")
        {
            bulletSprite.color = new Color(1, 0, 0, 1);
            col = "red";
        }

        if (color == "yellow")
        {
            bulletSprite.color = Color.yellow;
            col = "yellow";
        }


        if (color == "blue")
        {
            bulletSprite.color = Color.blue;
            col = "blue";
        }

        if (color == "enlarge")
        {
            transform.localScale = new Vector3(transform.localScale.x*3, transform.localScale.y*3, 1f);
            Collider.size = new Vector3(3f, 3f, 1f);
        }
    }
}
