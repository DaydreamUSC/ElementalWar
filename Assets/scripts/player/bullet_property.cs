using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class bullet_property : MonoBehaviour
{
    public SpriteRenderer bulletSprite;
    public string col;
    private PhotonView photonView;
    // Start is called before the first frame update
    void Start()
    {
        bulletSprite = GetComponent<SpriteRenderer>();
        col = "white";
        photonView = GetComponent<PhotonView>();
    }

    // Update is called once per frame



    void Update()
    {

    }
    public void change_color_rpc(string color)
    {
        photonView.RPC("change_color_RPC", RpcTarget.All, color);
    }



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
    }

    public string get_color()
    {
        return col;
    }

}
