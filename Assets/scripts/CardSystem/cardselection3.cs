using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;


public class cardselection3 : MonoBehaviour
{
    //public string[] totalcard = new string[] {"weapon1","weapon2","skill1","skill2","field1","field2","field3"};
    public Text card;
    public int addHP3 = 20;
    public float addSpeed3 = 20f;
    public EnergyBar energyBar;
    public Place_field placefield;
    public GameObject myplayer;

    public bool clicked;


    // Start is called before the first frame update
    void Start()
    {
      clicked = false;
      int num = Random.Range(0,6);//0~5
      if(num==0){
          displayCardName3.GetInstance().UpdateName("Cure");
      }
      else if(num==1){
          displayCardName3.GetInstance().UpdateName("Speed");
      }
      else if(num==2){
          displayCardName3.GetInstance().UpdateName("Weapon");
      }
      else if(num==3){
          displayCardName3.GetInstance().UpdateName("Redfield");
      }
      else if(num==4){
          displayCardName3.GetInstance().UpdateName("Bluefield");
      }
      else if(num==5){
          displayCardName3.GetInstance().UpdateName("Yellowfield");
      }

    }

    // Update is called once per frame
    void Update()
    {
      int num;
      if(Input.GetKeyDown(KeyCode.Alpha3)){
        Debug.Log(clicked);
        if(!clicked){
        clicked = true;
        StartCoroutine(wait());
        Debug.Log(card.text);
        if(card.text=="Cure"){
          energyBar.UseEnergy(7);
          Cure();
          num = Random.Range(0,6);
          Select(num);

        }
        else if(card.text=="Speed"){
          energyBar.UseEnergy(5);
          Speed();
          num = Random.Range(0,6);
          Select(num);
        }
        else if(card.text=="Weapon"){
          energyBar.UseEnergy(8);
          Weapon();
          num = Random.Range(0,6);
          Select(num);
        }
        else if(card.text=="Redfield"){
          energyBar.UseEnergy(3);
          placefield.R();
          num = Random.Range(0,6);
          Select(num);
        }
        else if(card.text=="Bluefield"){
          energyBar.UseEnergy(3);
          placefield.B();
          num = Random.Range(0,6);
          Select(num);
        }
        else if(card.text=="Yellowfield"){
          energyBar.UseEnergy(3);
          //placefield.Y();
          num = Random.Range(0,6);
          Select(num);
        }
      }
      }


    }

    private IEnumerator wait(){

      yield return new WaitForSeconds(1);
      clicked = false;
    }
    void Select(int num){
      if(num==0){
          displayCardName3.GetInstance().UpdateName("Cure");
      }
      else if(num==1){
          displayCardName3.GetInstance().UpdateName("Speed");
      }
      else if(num==2){
          displayCardName3.GetInstance().UpdateName("Weapon");
      }
      else if(num==4){
          displayCardName3.GetInstance().UpdateName("Redfield");
      }
      else if(num==5){
          displayCardName3.GetInstance().UpdateName("Bluefield");
      }
      else if(num==6){
          displayCardName3.GetInstance().UpdateName("Yellowfield");
      }
    }


    void Cure(){
      Debug.Log("Cure");
      displayCardName3.GetInstance().UpdateName("Cure");
      if(myplayer!=null && energyBar.getCurrentEnergy() >= 6 && Player.currentHP<Player.maxHealth){
          Debug.Log(myplayer);
          myplayer.SendMessage("CurePlayer",addHP3);


           // consume EP
          AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: Cure", new Dictionary<string, object>{
              { "currentHP", Player.currentHP},
              { "Player", System.Environment.UserName }
          });
          Debug.Log("[Analytics] Click Skill Card: Cure:" + analyticsResult);

      }
    }

    void Speed(){
      Debug.Log("Speed");
      displayCardName3.GetInstance().UpdateName("Speed");
      if(energyBar.getCurrentEnergy() >= 3 && Move.moveSpeed<120f){

          Move.moveSpeed += addSpeed3;

          AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: MoveSpeedUp", new Dictionary<string, object>{
              { "currentSpeed", Move.moveSpeed },
              { "Player", System.Environment.UserName }
          });
          Debug.Log("[Analytics] Click Skill Card: MoveSpeedUp:" + analyticsResult);

      }
    }

    void Weapon(){
      Debug.Log("Weapon");
      displayCardName3.GetInstance().UpdateName("Weapon");
      if(energyBar.getCurrentEnergy() >= 7 && Player.PlayerShootSpeed<256f){

        Change();


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
