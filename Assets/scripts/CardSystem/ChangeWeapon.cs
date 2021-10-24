using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class ChangeWeapon : MonoBehaviour
{
  //private shooting shoot;
  public EnergyBar energyBar;
  /*
  public void Awake(){
    shoot = GameObject.FindObjectOfType<shooting>();
  }
  */
  // Start is called before the first frame update
  void Start()
  {
      //shoot = GameObject.FindObjectOfType<shooting>();
      //Debug.Log("initialize bulletSpeed and bulletPower");
  }

  void Update(){
    if(Input.GetKeyDown(KeyCode.Alpha1)){
      if(energyBar.getCurrentEnergy() >= 7 && Player.PlayerShootSpeed<256f){
        Change();
        energyBar.UseEnergy(7); 
      }
    }
    //int bs = bulletSpeed;
    //shoot.UpdateShoot(bulletSpeed);
    HUD.GetInstance().UpdateWeaponUI(Player.PlayerShootPower, Player.PlayerShootSpeed);
    //shoot.UpdateShoot(bs);
  }
  void Change(){
    Player.PlayerShootPower *= 2;
    Player.PlayerShootSpeed *= 2;
    
    AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Weapon Card: double bulletPower and bulletSpeed", new Dictionary<string, object>{
        { "PlayerShootPower", Player.PlayerShootPower },
        { "PlayerShootSpeed", Player.PlayerShootSpeed },
        { "Player", System.Environment.UserName }
    });
    Debug.Log("[Analytics] Click Weapon Card: double bulletPower and bulletSpeed:" + analyticsResult);
  }
  // Update is called once per frame
}
