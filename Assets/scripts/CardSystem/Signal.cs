using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Signal : MonoBehaviour
{
    // Start is called before the first frame update
    private static Signal instance;
    public static Signal GetInstance(){
      return instance;
    }
    public void Awake(){
      instance = this;
    }

    public Text sign;
    public void UpdateName( string sign_name ){
      //weaponIcon.sprite = icon;
      sign.text = sign_name;
      Debug.Log("This is updatename"+ sign_name);

    }
}
