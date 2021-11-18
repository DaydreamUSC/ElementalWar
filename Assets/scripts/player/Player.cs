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
    public static int PlayerShootSpeed = 8;
    public static int PlayerShootPower = 8;
    public static int PlayerMoveSpeed;
    public static List<Card> currentWeapon;
    private AudioSource Bullet_Shoot_Audio;
    private PhotonView photonView;
    private AudioSource[] sounds;
    private AudioSource Hit_Sound;
    //public Weaponbase Weapon;
    void Start()
    {
        if (transform.position.x > 0)
            side = 1;
        else
            side = -1;
        photonView = GetComponent<PhotonView>();
        healthBar = GetComponentInChildren<HealthBar>();
        healthBar.SetMaxHealth(maxHealth);
        currentHP = maxHealth;
        PlayerShootSpeed = 8;
        PlayerShootPower = 8;

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
            Debug.Log("Player_ownerID" + Player_ownerID);
            Debug.Log("owner_ID" + ownerID);
            //Debug.Log("is hit! "+name);
            //bullet_property b_p = other.gameObject.GetComponent<bullet_property>();


            //photonView.RPC("HPdeduction", RpcTarget.All, 2*PlayerShootPower);
            CheckDeath();

            string color = other.gameObject.GetComponent<bullet_property>().col;

            //burning!
            if (color == "red")
            {
                StartCoroutine(Burning());
            }

            if (color == "blue")
            {


            }

            if (color == "yellow")
            {


            }


            Debug.Log("color is" + color);



            int photonID = other.gameObject.GetComponent<PhotonView>().ViewID;
            photonView.RPC("DestroyBullet", RpcTarget.All, photonID);


        }
        else if (!isHitByBullet) {
            Debug.Log("Hit by something oth er than bullet: " + other.gameObject.tag);
        }
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
        healthBar.SetHealth(currentHealth - damage);
        Hit_Sound.PlayOneShot(Hit_Sound.clip);
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
    
    void CurePlayer(int point){
        if(photonView.IsMine){
            //Debug.Log("CURE CALLED in player.cs");
            photonView.RPC("HPaddition", RpcTarget.All, point);
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
