using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class field_effect : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void OnTriggerStay2D(Collider2D other)
    {
        Debug.Log(GetComponent<Place_field>().player1_field_color);
    }


    void Update()
    {



    }
   
    

    

}