using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;

public class cardselection2 : MonoBehaviour
{
  public Text card;
  public int addHP2 = 20;
  public float addSpeed2 = 20f;
  public EnergyBar energyBar;




  // Start is called before the first frame update
  void Start()
  {
    int num = Random.Range(0,3);//0~2
    if(num==0){
        displayCardName2.GetInstance().UpdateName("Cure");
    }
    if(num==1){
        displayCardName2.GetInstance().UpdateName("Speed");
    }
    if(num==2){
        displayCardName2.GetInstance().UpdateName("Weapon");
    }

  }

  // Update is called once per frame
  void Update()
  {
    int num;
    if(Input.GetKeyDown(KeyCode.Alpha2)){
      if(card.text=="Cure"){
        Cure();
        num = Random.Range(0,3);
        Select(num);
      }
      if(card.text=="Speed"){
        Speed();
        num = Random.Range(0,3);
        Select(num);
      }
      if(card.text=="Weapon"){
        Weapon();
        num = Random.Range(0,3);
        Select(num);
      }

    }






  }
  void Select(int num){
    if(num==0){
        displayCardName2.GetInstance().UpdateName("Cure");
    }
    if(num==1){
        displayCardName2.GetInstance().UpdateName("Speed");
    }
    if(num==2){
        displayCardName2.GetInstance().UpdateName("Weapon");
    }
  }


  void Cure(){
    displayCardName2.GetInstance().UpdateName("Cure");
    if(energyBar.getCurrentEnergy() >= 6 && Player.currentHP<Player.maxHealth){

        Player.currentHP += addHP2;
        energyBar.UseEnergy(6); // consume EP
        AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: Cure", new Dictionary<string, object>{
            { "currentHP", Player.currentHP},
            { "Player", System.Environment.UserName }
        });
        Debug.Log("[Analytics] Click Skill Card: Cure:" + analyticsResult);

    }
  }

  void Speed(){
    displayCardName2.GetInstance().UpdateName("Speed");
    if(energyBar.getCurrentEnergy() >= 3 && Move.moveSpeed<120f){

        Move.moveSpeed += addSpeed2;
        energyBar.UseEnergy(3);
        AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: MoveSpeedUp", new Dictionary<string, object>{
            { "currentSpeed", Move.moveSpeed },
            { "Player", System.Environment.UserName }
        });
        Debug.Log("[Analytics] Click Skill Card: MoveSpeedUp:" + analyticsResult);

    }
  }

  void Weapon(){
    displayCardName2.GetInstance().UpdateName("Weapon");
    if(energyBar.getCurrentEnergy() >= 7 && Player.PlayerShootSpeed<256f){

      Change();
      energyBar.UseEnergy(7);

    }
  }

  void Change(){
    Player.PlayerShootPower *= 1;
    Player.PlayerShootSpeed *= 2;

    AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Weapon Card: double bulletPower and bulletSpeed", new Dictionary<string, object>{
        { "PlayerShootPower", Player.PlayerShootPower },
        { "PlayerShootSpeed", Player.PlayerShootSpeed },
        { "Player", System.Environment.UserName }
    });
    Debug.Log("[Analytics] Click Weapon Card: double bulletPower and bulletSpeed:" + analyticsResult);
  }
}
