using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;


public class cardselection1 : MonoBehaviour
{
    //public string[] totalcard = new string[] {"weapon1","weapon2","skill1","skill2","field1","field2","field3"};
    public Text card;
    public int addHP1 = 20;
    public float addSpeed1 = 20f;
    public EnergyBar energyBar;
    public GameObject myplayer;




    // Start is called before the first frame update
    void Start()
    {
      int num = Random.Range(0,3);//0~2
      if(num==0){
          displayCardName1.GetInstance().UpdateName("Cure");
      }
      if(num==1){
          displayCardName1.GetInstance().UpdateName("Speed");
      }
      if(num==2){
          displayCardName1.GetInstance().UpdateName("Weapon");
      }

    }

    // Update is called once per frame
    void Update()
    {
      int num;
      if(Input.GetKeyDown(KeyCode.Alpha1)){
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
          displayCardName1.GetInstance().UpdateName("Cure");
      }
      if(num==1){
          displayCardName1.GetInstance().UpdateName("Speed");
      }
      if(num==2){
          displayCardName1.GetInstance().UpdateName("Weapon");
      }
    }


    void Cure(){
      displayCardName1.GetInstance().UpdateName("Cure");
      if(myplayer!=null && energyBar.getCurrentEnergy() >= 6 && Player.currentHP<Player.maxHealth){

          myplayer.SendMessage("CurePlayer",addHP1);
          
          
          energyBar.UseEnergy(6); // consume EP
          AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: Cure", new Dictionary<string, object>{
              { "currentHP", Player.currentHP},
              { "Player", System.Environment.UserName }
          });
          Debug.Log("[Analytics] Click Skill Card: Cure:" + analyticsResult);

      }
    }

    void Speed(){
      displayCardName1.GetInstance().UpdateName("Speed");
      if(energyBar.getCurrentEnergy() >= 3 && Move.moveSpeed<120f){

          Move.moveSpeed += addSpeed1;
          energyBar.UseEnergy(3);
          AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: MoveSpeedUp", new Dictionary<string, object>{
              { "currentSpeed", Move.moveSpeed },
              { "Player", System.Environment.UserName }
          });
          Debug.Log("[Analytics] Click Skill Card: MoveSpeedUp:" + analyticsResult);

      }
    }

    void Weapon(){
      displayCardName1.GetInstance().UpdateName("Weapon");
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
    
    
    
    public void SetPlayer(GameObject input){
        if(myplayer==null && input!=null){
            myplayer=input;
            Debug.Log("Cure added in cardselection1");
        }
    }


}
