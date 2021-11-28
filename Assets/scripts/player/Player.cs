
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.Analytics;

public class Player : MonoBehaviour
{
    public static int maxHealth = 100;
    //public  GameObject healthBar;
    public static int side;
    private HealthBar healthBar;
    public static int currentHP;
    public static int currentEP;
    public static int PlayerShootSpeed;
    public static int PlayerShootPower;
    public static int PlayerMoveSpeed;
    //public static List<Card> currentWeapon;
    private AudioSource Bullet_Shoot_Audio;
    private PhotonView photonView;
    private AudioSource[] sounds;
    private AudioSource Hit_Sound;
    private bool isSlowDown = false;
    private bool isFreeze = false;

    void Start()
    {
        PlayerShootSpeed = 8;
        PlayerShootPower = 4;
        if (transform.position.x > 0)
            side = 1;
        else
            side = -1;
        photonView = GetComponent<PhotonView>();
        healthBar = GetComponentInChildren<HealthBar>();
        healthBar.SetMaxHealth(maxHealth);
        currentHP = maxHealth;

        if (photonView.IsMine) {
            GameObject cureBttn = GameObject.Find("/CanvasSkillCard/changeCard1");
            cureBttn.SendMessage("SetPlayer", this.gameObject);
            //Debug.Log("Cure added in Player1");

            cureBttn = GameObject.Find("/CanvasSkillCard/changeCard2");
            cureBttn.SendMessage("SetPlayer", this.gameObject);
            //Debug.Log("Cure added in Player2");

            cureBttn = GameObject.Find("/CanvasSkillCard/changeCard3");
            cureBttn.SendMessage("SetPlayer", this.gameObject);
            //Debug.Log("Cure added in Player3");

            sounds = GetComponents<AudioSource>();
            Hit_Sound = sounds[1];

        if (!PhotonNetwork.IsMasterClient)
            {
                photonView.RPC("flipPlayer", RpcTarget.All);
                Debug.Log("flipped!!");
            }
        }

        //wepaon
        //currentWeapon = Instantiate(MachineGun, WeaponPoint.position, transform.rotation);
        // Debug.Log(currentWeapon);
    }
    public Rigidbody2D rb;
    public Camera cam;

    // Update is called once per frame

    Vector3 playerPosition;
    Vector2 movement;
    Vector2 mousePos;
    void Update()
    {
        if (PhotonNetwork.CurrentRoom.CustomProperties.ContainsKey("GameOver")) {
            PhotonNetwork.Disconnect();
        }
        if (photonView.IsMine) {
            if (Input.GetKeyDown(KeyCode.Space)) {
                HPdeduction(20);
                CheckDeath();
            }

            mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
            playerPosition = this.transform.position;
            mousePos.x = mousePos.x - playerPosition.x;
            mousePos.y = mousePos.y - playerPosition.y;

            // healthBar.SetHealth(currentHP);

        }
        //weapon
        //currentWeapon.transform.position = WeaponPoint.position;
    }

    /*void FixedUpdate()
    {
        Vector2 lookDir = mousePos;
        float angle = Mathf.Atan2(lookDir.y, lookDir.x) * Mathf.Rad2Deg;
        rb.rotation = angle;
    }*/

    void OnTriggerEnter2D(Collider2D other) {
        if(other == null)
            return ;
        bool isHitByBullet = other.gameObject.tag == "Bullet";
        //if player is hit, destroy bullet and change healthBar
        char ownerID = other.gameObject.GetComponent<bullet_property>().ownerID;
        bool isMaster = PhotonNetwork.IsMasterClient;
        if (photonView.IsMine && isMaster)
        {
            bool player2_hasfield = GetComponent<Place_field>().player2_hasfield;
            //Debug.Log("player1" + player2_hasfield);
            if (player2_hasfield)
            {

                string property = GetComponent<Place_field>().player2_field_property;
                //Debug.Log("property" + property);
            }
        }
        else if (photonView.IsMine)
        {
            bool player1_hasfield = GetComponent<Place_field>().player1_hasfield;
            //Debug.Log("player1" + player1_hasfield);
            if (player1_hasfield)
            {
                string property = GetComponent<Place_field>().player1_field_property;
                //Debug.Log("property" + property);
            }
        }

        char Player_ownerID = GetComponent<PhotonView>().Owner.ToString()[2];
        if (isHitByBullet && (Player_ownerID != ownerID)) {
            // Debug.Log("Player_ownerID" + Player_ownerID);
            // Debug.Log("owner_ID" + ownerID);
            //Debug.Log("is hit! "+name);
            //bullet_property b_p = other.gameObject.GetComponent<bullet_property>();

            Hit_Sound.PlayOneShot(Hit_Sound.clip);
            int bullet_Damage = other.gameObject.GetComponent<bullet_property>().bullet_Damage;
            // Debug.Log("damage");
            // Debug.Log(bullet_Damage);
            photonView.RPC("HPdeduction", RpcTarget.All, bullet_Damage);
            CheckDeath();

            string color = other.gameObject.GetComponent<bullet_property>().col;

            //burning!
            if (color == "red")
            {
                StartCoroutine(Burning());
            }

            if (color == "blue")
            {
              if(!isSlowDown){
              StartCoroutine(SlowDown());
            }
          }
            if (color == "yellow")
            {
              if(!isFreeze){
              StartCoroutine(Freeze());
              }
            }


            Debug.Log("color is" + color);

            int photonID = other.gameObject.GetComponent<PhotonView>().ViewID;
            photonView.RPC("DestroyBullet", RpcTarget.All, photonID);
        }

        else if (!isHitByBullet) {
            Debug.Log("Hit by something oth er than bullet: " + other.gameObject.tag);
        }
    }


    IEnumerator SlowDown(){
      PlayerSlowDown(15f);
      isSlowDown = true;
      yield return new WaitForSeconds(3);
      PlayerSlowDown(-15f);
      isSlowDown = false;
    }


    IEnumerator Freeze(){
      float cur_move = Move.moveSpeed;
      PlayerSlowDown(cur_move);
      isFreeze = true;
      yield return new WaitForSeconds(1f);
      PlayerSlowDown(-cur_move);
      isFreeze = false;
    }

    IEnumerator Burning()
    {
        photonView.RPC("HPdeduction", RpcTarget.All, 3);
        yield return new WaitForSeconds(1);
        photonView.RPC("HPdeduction", RpcTarget.All, 3);
        yield return new WaitForSeconds(1);
        photonView.RPC("HPdeduction", RpcTarget.All, 3);
    }

    [PunRPC]
    void flipPlayer()
    {
        Vector3 newScale = transform.localScale;
        newScale.x *= -1;
        transform.localScale = newScale;
    }

    [PunRPC]
    void DestroyBullet(int photonID)
    {
        if(PhotonNetwork.GetPhotonView(photonID) == null)
            return ;
        GameObject bullet = PhotonNetwork.GetPhotonView(photonID).gameObject;
        Destroy(bullet);
    }


    [PunRPC]
    public void HPdeduction(int damage){
        if(healthBar == null)
            return;
        int currentHealth = healthBar.GetHealth();
        // Debug.Log("damage");
        // Debug.Log(damage);
        healthBar.SetHealth(currentHealth - damage);
        // Hit_Sound.PlayOneShot(Hit_Sound.clip);
    }

    [PunRPC]
    void HPaddition(int point){
        if(healthBar == null)
            return;
        int currentHealth = healthBar.GetHealth();
        currentHealth+=point;
        if(currentHealth>maxHealth){
            currentHealth = maxHealth;
        }

        healthBar.SetHealth(currentHealth);
    }


    void PlayerSlowDown(float value){
      Move.moveSpeed -= value;
    }



    void CurePlayer(int point){
        if(photonView.IsMine){
            //Debug.Log("CURE CALLED in player.cs");
            photonView.RPC("HPaddition", RpcTarget.All, point);
        }
    }

    void UseLaser() {
        if(photonView.IsMine){
            Debug.Log("take laser");
            GetComponent<Laser>().useLaser();
        }
    }

    public void CheckDeath()
    {
        //Debug.Log("take damage");

        currentHP = healthBar.GetHealth();
        //Debug.Log("Current Health: "+currentHP);
        if (currentHP <= 0){



            /*------------------Begin Analytics------------------*/
            #if ENABLE_CLOUD_SERVICES_ANALYTICS
            float endTime = Time.time;
            float gameDuration = endTime - PhotonManager.startTime;
            Debug.Log("@player.cs/startTime: "+ PhotonManager.startTime);
            Debug.Log("@player.cs/gameDuration: "+ gameDuration);

            string MasterClient = (string)PhotonNetwork.CurrentRoom.CustomProperties["MasterClientName"];
            string Client = (string)PhotonNetwork.CurrentRoom.CustomProperties["ClientName"];
            //string Loser = System.Environment.UserName;
            string Loser = LobbyPlayerName.playerNameDisplay;
            string Winner = (Loser==Client)? MasterClient:Client;
            string LoseField = (transform.position.x>0)? "Right":"Left";
            string WinField = (transform.position.x>0)? "Left":"Right";
            Debug.Log("@player.cs/Loser: "+ Loser);
            Debug.Log("@player.cs/Winner: "+ Winner);
            Debug.Log("@player.cs/LoseField: "+ LoseField);
            Debug.Log("@player.cs/WinField: "+ WinField);

            //Debug.Log("@player.cs/System.Environment.UserName: "+ System.Environment.UserName);
            Analytics.CustomEvent("gameOver", new Dictionary<string, object>{
                { "gameDuration", gameDuration },
                { "Winner", Winner },
                { "Loser", Loser},
                { "LoseField", LoseField},
                { "WinField", WinField}
            }); // only loser will send this event (check the userID of this event to be loser)
            #endif
            /*------------------End Analytics------------------*/
            if(photonView.IsMine)
            {
                PhotonManager.isWinner = false;
                PhotonNetwork.CurrentRoom.SetCustomProperties(new ExitGames.Client.Photon.Hashtable(){{"GameOver", true}});
            }
        }
    }

}
