using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class ChangeWeapon : MonoBehaviour
{
  static public int bulletPower=8;
  static public int bulletSpeed=8;
  //private shooting shoot;

  /*
  public void Awake(){
    shoot = GameObject.FindObjectOfType<shooting>();
  }
  */
  // Start is called before the first frame update
  void Start()
  {
      //shoot = GameObject.FindObjectOfType<shooting>();
      bulletPower = 8; //Weapon bullet Power
      bulletSpeed = 8; //Weapon bullet Power
      Debug.Log("initialize bulletSpeed and bulletPower");
  }

  void Update(){
    if(Input.GetMouseButtonDown(0)){
      Change();
      Debug.Log("analyticsResult=" + Analytics.CustomEvent("Click double bulletPower and bulletSpeed"));

      
    }
    //int bs = bulletSpeed;
    //shoot.UpdateShoot(bulletSpeed);
    HUD.GetInstance().UpdateWeaponUI(bulletPower, bulletSpeed);
    //shoot.UpdateShoot(bs);
  }
  void Change(){
    bulletPower = bulletPower*2;
    bulletSpeed = bulletSpeed*2;
  }


  // Update is called once per frame
}
