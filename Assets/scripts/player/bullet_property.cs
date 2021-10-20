using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullet_property : MonoBehaviour
{
    SpriteRenderer sprite;
    string col;
    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        col = "white";
    }

    // Update is called once per frame



    void Update()
    {

    }


    public void change_color(string color)
    {
        if (color == "red")
        {
            sprite.color = new Color(1, 0, 0, 1);
            col = "red";
        }

        if (color == "yellow")
        {
            sprite.color = Color.yellow;
            col = "yellow";
        }


        if (color == "blue")
        {
            sprite.color = Color.blue;
            col = "blue";
        }
    }

    public string get_color()
    {
        return col;
    }

}
