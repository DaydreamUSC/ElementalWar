using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.Analytics;

public class Player : MonoBehaviour
{
    public int maxHealth = 100;
    //public  GameObject healthBar;
    public static int side;
    private  HealthBar healthBar;
    public static int currentHP;
    public static int currentEP;
    public static int PlayerShootSpeed = 8;
    public static int PlayerShootPower = 8;
    public static int PlayerMoveSpeed;
    public static List<Card> currentWeapon;
    private PhotonView photonView;
    //public Weaponbase Weapon;
    void Start()
    {
        if(transform.position.x > 0)
            side = 1;
        else
            side = -1;
        photonView = GetComponent<PhotonView>();
        healthBar = GetComponentInChildren<HealthBar>();
        healthBar.SetMaxHealth(maxHealth);
        currentHP = maxHealth;
        PlayerShootSpeed = 8;
        PlayerShootPower = 8;
    }
    public Rigidbody2D rb;
    public Camera cam;
    // Update is called once per frame

    Vector3 playerPosition;
    Vector2 movement;
    Vector2 mousePos;
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space)){
            TakeDamage(20);
        }

        mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
        playerPosition = this.transform.position;
        mousePos.x = mousePos.x - playerPosition.x;
        mousePos.y = mousePos.y - playerPosition.y;

        healthBar.SetHealth(currentHP);
    }

    /*void FixedUpdate()
    {
        Vector2 lookDir = mousePos;
        float angle = Mathf.Atan2(lookDir.y, lookDir.x) * Mathf.Rad2Deg;
        rb.rotation = angle;
    }*/

    void OnCollisionEnter2D(Collision2D other) {
        
        bool isHitByBullet = other.gameObject.tag == "Bullet";
        //if player is hit, destroy bullet and change healthBar
        bool isMaster = PhotonNetwork.IsMasterClient;
        if (isMaster)
        {

            bool player2_hasfield = GetComponent<Place_field>().player2_hasfield;
            Debug.Log("player1" + player2_hasfield);
            if (player2_hasfield)
            {
                
                string property = GetComponent<Place_field>().player2_field_color;
                Debug.Log("property" + property);
            }
        }
        else
        {
            bool player1_hasfield = GetComponent<Place_field>().player1_hasfield;
            Debug.Log("player1" + player1_hasfield);
            if (player1_hasfield)
            {
               
                string property = GetComponent<Place_field>().player1_field_color;
                Debug.Log("property" + property);
            }
        }


        if (isHitByBullet) {
            //Debug.Log("is hit! "+name);
            //bullet_property b_p = other.gameObject.GetComponent<bullet_property>();

            TakeDamage(2*PlayerShootPower);
            Destroy(other.gameObject, 0.0f);
        }
    }
    void TakeDamage(int damage)
    {
        //Debug.Log("take damage");   
        if(healthBar == null)
            return;
        int currentHealth = healthBar.GetHealth();
        healthBar.SetHealth(currentHealth - damage);
        currentHP = healthBar.GetHealth();
        Debug.Log("Current Health: "+currentHP);
        if (currentHP <= 0){

            SceneManager.LoadScene("LoseScene");
            PhotonNetwork.Disconnect();

            /*------------------Analytics------------------*/
            #if ENABLE_CLOUD_SERVICES_ANALYTICS
            float endTime = Time.time;
            float gameDuration = endTime - PhotonManager.startTime;
            Debug.Log("@player.cs/startTime: "+ PhotonManager.startTime);
            Debug.Log("@player.cs/gameDuration: "+ gameDuration);

            string MasterClient = (string)PhotonNetwork.CurrentRoom.CustomProperties["MasterClientName"];
            string Client = (string)PhotonNetwork.CurrentRoom.CustomProperties["ClientName"];
            string Loser = System.Environment.UserName;
            string Winner = (Loser==Client)? MasterClient:Client;
            string LoseField = (transform.position.x>0)? "Right":"Left";
            string WinField = (transform.position.x>0)? "Left":"Right";
            Debug.Log("@player.cs/Loser: "+ Loser);
            Debug.Log("@player.cs/Winner: "+ Winner);
            Debug.Log("@player.cs/LoseField: "+ LoseField);
            Debug.Log("@player.cs/WinField: "+ WinField);
                
            Debug.Log("@player.cs/System.Environment.UserName: "+ System.Environment.UserName);
            Analytics.CustomEvent("gameOver", new Dictionary<string, object>{
                { "gameDuration", gameDuration },
                { "Winner", Winner },
                { "Loser", Loser},
                { "LoseField", LoseField},
                { "WinField", WinField}
            }); 
            #endif
        }
    }

}
