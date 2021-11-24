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
    public float addSpeed3 = 30f;
    public EnergyBar energyBar;
    public Place_field placefield;
    public GameObject myplayer;

    private bool clicked;

    // Start is called before the first frame update
    void Start()
    {
      clicked = false;
      int num = Random.Range(0,9);//0~8
      if(num==0){
          displayCardName3.GetInstance().UpdateName("Cure");
      }
      else if(num==1){
          displayCardName3.GetInstance().UpdateName("Speed");
      }
      else if(num==2){
          displayCardName3.GetInstance().UpdateName("DoubleGun");
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
      else if(num == 6){
          displayCardName3.GetInstance().UpdateName("Enlargefield");
      }
      else if(num == 7){
          displayCardName3.GetInstance().UpdateName("LaserGun");
      }
      else if(num == 8){
          displayCardName3.GetInstance().UpdateName("ShotGun");
      }
    }

    // Update is called once per frame
    void Update()
    {
      int num;
      if(Input.GetKeyDown(KeyCode.Alpha3)){

        // Debug.Log(clicked);
        // if(!clicked){
          // clicked = true;
          // StartCoroutine(wait());
          Debug.Log(card.text);
          if(card.text=="Cure"){
            if(energyBar.getCurrentEnergy() >= 7 ){
              Cure();
              energyBar.UseEnergy(7);
              num = Random.Range(0,9);
              Select(num);
            }

          }
          else if(card.text=="Speed"){
            if(energyBar.getCurrentEnergy() >= 5 ){
              StartCoroutine(Speeddo());
              energyBar.UseEnergy(5);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text=="DoubleGun"){
            if(energyBar.getCurrentEnergy() >= 5 ){
              Weapon();
              energyBar.UseEnergy(8);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text=="Redfield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              placefield.R();
              energyBar.UseEnergy(3);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text=="Bluefield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              placefield.B();
              energyBar.UseEnergy(3);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text=="Yellowfield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              //placefield.Y();
              energyBar.UseEnergy(3);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text == "Enlargefield")
          {
            if(energyBar.getCurrentEnergy() >= 6 ){
              placefield.Enlarge();
              energyBar.UseEnergy(3);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text == "LaserGun")
          {
            if(energyBar.getCurrentEnergy() >= 10 ){
              enableLaser();
              energyBar.UseEnergy(10);
              num = Random.Range(0,9);
              Select(num);
            }
          }
          else if(card.text == "ShotGun")
          {
            if(energyBar.getCurrentEnergy() >= 7 ){
              StartCoroutine(ShotGun());
              energyBar.UseEnergy(7);
              num = Random.Range(0,9);
              Select(num);
            }
          }
        // }
      }

    }

    private IEnumerator ShotGun(){
      shooting.Shotgun = true;

      yield return new WaitForSeconds(5);
      shooting.Shotgun = false;
    }
    void Select(int num){
      if(num==0){
          displayCardName3.GetInstance().UpdateName("Cure");
      }
      else if(num==1){
          displayCardName3.GetInstance().UpdateName("Speed");
      }
      else if(num==2){
          displayCardName3.GetInstance().UpdateName("DoubleGun");
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
      else if(num==6){
          displayCardName3.GetInstance().UpdateName("Enlargefield");
      }
      else if(num==7){
          displayCardName3.GetInstance().UpdateName("LaserGun");
      }
      else if(num == 8){
          displayCardName3.GetInstance().UpdateName("ShotGun");
      }
    }

<<<<<<< Updated upstream
    void Shotgun(){
      shooting.Shotgun = true;
=======
    private IEnumerator RF(){
      placefield.R();
      yield return new WaitForSeconds(10);
      placefield.No();
    }
    private IEnumerator BF(){
      placefield.B();
      yield return new WaitForSeconds(10);
      placefield.No();
    }
    private IEnumerator YF(){
      placefield.Y();
      yield return new WaitForSeconds(10);
      placefield.No();
    }
    private IEnumerator EF(){
      placefield.Enlarge();
      yield return new WaitForSeconds(10);
      placefield.No();
    }
    private IEnumerator ShotGun(){
      shooting.Shotgun = true;

      yield return new WaitForSeconds(10);
      shooting.Shotgun = false;
    }

    private IEnumerator Sign(){
      Signal.GetInstance().UpdateName("No Enough Energry");

      yield return new WaitForSeconds(1);
      Signal.GetInstance().UpdateName(" ");
>>>>>>> Stashed changes
    }
    private IEnumerator Speeddo(){
      Speed();
      yield return new WaitForSeconds(10);
      Move.moveSpeed = 20f;
    }


    void enableLaser() {
      Debug.Log("TEST");
      if (energyBar.getCurrentEnergy() >= 10) {
        Debug.Log("Taking laser gun");
        myplayer.SendMessage("UseLaser");
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
      Debug.Log("DoubleGun");
      displayCardName3.GetInstance().UpdateName("DoubleGun");
      if(energyBar.getCurrentEnergy() >= 7 && Player.PlayerShootSpeed<256f){
        StartCoroutine(Change());
      }
      AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Weapon Card: double bulletPower and bulletSpeed", new Dictionary<string, object>{
          { "PlayerShootPower", Player.PlayerShootPower },
          { "PlayerShootSpeed", Player.PlayerShootSpeed },
          { "Player", System.Environment.UserName }
      });
      Debug.Log("[Analytics] Click Weapon Card: double bulletPower and bulletSpeed:" + analyticsResult);
    }


    private IEnumerator Change(){

      Player.PlayerShootPower = 4;
      Player.PlayerShootSpeed = 32;
      yield return new WaitForSeconds(10);
      Player.PlayerShootPower = 2;
      Player.PlayerShootSpeed = 8;
    }






    public void SetPlayer(GameObject input){
        if(myplayer==null && input!=null){
            myplayer=input;
            Debug.Log("Cure added in cardselection3");
        }
    }


}
