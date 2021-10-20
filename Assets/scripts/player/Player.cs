using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

public class Player : MonoBehaviour
{
    public int maxHealth = 100;
    public  HealthBar healthBar;

    public static int currentHP;
    public static int currentEP;
    public static int PlayerShootSpeed;
    public static int PlayerShootPower;
    public static int PlayerMoveSpeed;
    public static List<Card> currentWeapon;

    /*public HealthBar healthBarOne;
    public HealthBar healthBarTwo;*/
    //public Weaponbase Weapon;
    void Start()
    {
        healthBar.SetMaxHealth(maxHealth);
        currentHP = maxHealth;
      //  Weapon = GameObject.Find("CanvasThree").GetComponentInChildren(typeof(Weaponbase)) as Weaponbase;
        // currentHealth = maxHealth;
        // healthBar.SetMaxHealth(maxHealth);
        /*healthBarOne = GameObject.Find("CanvasOne").GetComponentInChildren(typeof(HealthBar)) as HealthBar;;
        healthBarTwo = GameObject.Find("CanvasTwo").GetComponentInChildren(typeof(HealthBar)) as HealthBar;
        healthBarOne.SetMaxHealth(maxHealth);
        healthBarTwo.SetMaxHealth(maxHealth);*/
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

    void FixedUpdate()
    {
        Vector2 lookDir = mousePos;
        float angle = Mathf.Atan2(lookDir.y, lookDir.x) * Mathf.Rad2Deg;
        rb.rotation = angle;
    }

    void OnCollisionEnter2D(Collision2D other) {
        Debug.Log(other.gameObject.tag);
        bool isHitByBullet = other.gameObject.tag == "Player";
        //if player is hit, destroy bullet and change healthBar
        if (isHitByBullet) {
            TakeDamage(2*ChangeWeapon.bulletPower);
            Destroy(other.gameObject, 0.0f);
        }
    }

    void TakeDamage(int damage)
    {
        Debug.Log("take damage");   
        int currentHealth = healthBar.GetHealth();
        healthBar.SetHealth(currentHealth - damage);
        currentHP = healthBar.GetHealth();
        if (currentHP==0){
            SceneManager.LoadScene("LoseScene");
            PhotonNetwork.Disconnect();
        }
    }

}
