using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class displayCardName1 : MonoBehaviour
{
    // Start is called before the first frame update
    private static displayCardName1 instance;
    public static displayCardName1 GetInstance(){
      return instance;
    }
    public void Awake(){
      instance = this;
    }

    public Text cardname;
    public void UpdateName( string card_name ){
      //weaponIcon.sprite = icon;
      cardname.text = card_name;
      Debug.Log("This is updatename"+ card_name);

    }
}
