using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;


public class cardselection3 : MonoBehaviour
{
    //public string[] totalcard = new string[] {"weapon1","weapon2","skill1","skill2","field1","field2","field3"};
    public Text card;
    public int addHP1 = 20;
    public float addSpeed1 = 8f;
    public EnergyBar energyBar;
    public Place_field placefield;
    public GameObject myplayer;

    public GameObject cardNum;
    public SpriteRenderer LaserGunImage;
    public SpriteRenderer DoubleGunImage;
    public SpriteRenderer FireImage;
    public SpriteRenderer IceImage;
    public SpriteRenderer LightingImage;
    public SpriteRenderer EnlargeImage;
    public SpriteRenderer SpeedImage;
    public SpriteRenderer ShotGunImage;
    public SpriteRenderer CureImage;

    int num;
    private bool clicked;

    // Start is called before the first frame update
    void Start()
    {
      clicked = false;
      //int num = Random.Range(0,9);//0~8
      StartCoroutine(begin());
      //num = gameObject.GetComponentInParent<CardShuffle>().GetCard(-1);



    }

    IEnumerator begin()
    {

        yield return new WaitForSeconds(0.1f);
        num = gameObject.GetComponentInParent<CardShuffle>().GetCard(-1);
        if(num==0){
            displayCardName3.GetInstance().UpdateName("Cure");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = CureImage.sprite;
        }
        else if(num==1){
            displayCardName3.GetInstance().UpdateName("Speed");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = SpeedImage.sprite;
        }
        else if(num==2){
            displayCardName3.GetInstance().UpdateName("DoubleGun");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = DoubleGunImage.sprite;
        }
        else if(num==3){
            displayCardName3.GetInstance().UpdateName("Redfield");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = FireImage.sprite;
        }
        else if(num==4){
            displayCardName3.GetInstance().UpdateName("Bluefield");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite =  IceImage.sprite;
        }
        else if(num==5){
            displayCardName3.GetInstance().UpdateName("Yellowfield");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = LightingImage.sprite;
        }
        else if(num == 6){
            displayCardName3.GetInstance().UpdateName("Enlargefield");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = EnlargeImage.sprite;
        }
        else if(num == 7){
            displayCardName3.GetInstance().UpdateName("LaserGun");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = LaserGunImage.sprite;
        }
        else if(num == 8){
            displayCardName3.GetInstance().UpdateName("ShotGun");
            cardNum.GetComponent<UnityEngine.UI.Image>().sprite = ShotGunImage.sprite;
        }
          Debug.Log("num" + num);
    }
    // Update is called once per frame
    void Update()
    {

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
              num = gameObject.GetComponentInParent<CardShuffle>().GetCard(0);
              Select(num);
              }
              else{
                StartCoroutine(Sign());
              }
            }


          else if(card.text=="Speed"){
            if(energyBar.getCurrentEnergy() >= 5 ){
              StartCoroutine(Speeddo());
              energyBar.UseEnergy(5);
              num = gameObject.GetComponentInParent<CardShuffle>().GetCard(1);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text=="DoubleGun"){
            if(energyBar.getCurrentEnergy() >= 8 ){
              Weapon();
              energyBar.UseEnergy(8);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(2);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text=="Redfield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              StartCoroutine(RF());
              energyBar.UseEnergy(6);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(3);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text=="Bluefield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              StartCoroutine(BF());
              energyBar.UseEnergy(6);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(4);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text=="Yellowfield"){
            if(energyBar.getCurrentEnergy() >= 6 ){
              StartCoroutine(YF());
              energyBar.UseEnergy(6);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(5);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text == "Enlargefield")
          {
            if(energyBar.getCurrentEnergy() >= 6 ){
              StartCoroutine(EF());
              energyBar.UseEnergy(6);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(6);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text == "LaserGun")
          {
            if(energyBar.getCurrentEnergy() >= 10 ){
              enableLaser();
              energyBar.UseEnergy(10);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(7);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
          else if(card.text == "ShotGun")
          {
            if(energyBar.getCurrentEnergy() >= 7 ){
              StartCoroutine(ShotGun());
              energyBar.UseEnergy(7);
              num =gameObject.GetComponentInParent<CardShuffle>().GetCard(8);
              Select(num);
            }
            else{
              StartCoroutine(Sign());
            }
          }
        // }

        }
    }


    void Select(int num){
      if(num==0){
          displayCardName3.GetInstance().UpdateName("Cure");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = CureImage.sprite;
      }
      else if(num==1){
          displayCardName3.GetInstance().UpdateName("Speed");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = SpeedImage.sprite;
      }
      else if(num==2){
          displayCardName3.GetInstance().UpdateName("DoubleGun");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = DoubleGunImage.sprite;
      }
      else if(num==3){
          displayCardName3.GetInstance().UpdateName("Redfield");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = FireImage.sprite;
      }
      else if(num==4){
          displayCardName3.GetInstance().UpdateName("Bluefield");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite =  IceImage.sprite;
      }
      else if(num==5){
          displayCardName3.GetInstance().UpdateName("Yellowfield");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = LightingImage.sprite;
      }
      else if(num == 6){
          displayCardName3.GetInstance().UpdateName("Enlargefield");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = EnlargeImage.sprite;
      }
      else if(num == 7){
          displayCardName3.GetInstance().UpdateName("LaserGun");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = LaserGunImage.sprite;
      }
      else if(num == 8){
          displayCardName3.GetInstance().UpdateName("ShotGun");
          cardNum.GetComponent<UnityEngine.UI.Image>().sprite = ShotGunImage.sprite;
      }
    }
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
    }
    private IEnumerator Speeddo(){
      Speed();
      yield return new WaitForSeconds(10);
      Move.moveSpeed = 20f;
    }
    void Shotgun(){
      shooting.Shotgun = true;

    }

    void enableLaser() {
      Debug.Log("TEST");
      myplayer.SendMessage("test","LaserGun");
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
          myplayer.SendMessage("CurePlayer",addHP1);


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

          Move.moveSpeed += addSpeed1;

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
      myplayer.SendMessage("test","FloatingGun");
      Player.PlayerShootPower = 8;
      Player.PlayerShootSpeed = 20;
      yield return new WaitForSeconds(10);
      Player.PlayerShootPower = 4;
      Player.PlayerShootSpeed = 8;
      myplayer.SendMessage("test","MachineGun");
    }






    public void SetPlayer(GameObject input){
        if(myplayer==null && input!=null){
            myplayer=input;
            Debug.Log("Cure added in cardselection1");
        }
    }


}
