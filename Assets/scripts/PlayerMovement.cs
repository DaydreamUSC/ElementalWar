using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerMovement : MonoBehaviour
{
    public int maxHealth = 20;
    public HealthBar healthBarOne;
    public HealthBar healthBarTwo;
    public Weaponbase Weapon;


    void Start()
    {

        // currentHealth = maxHealth;
        // healthBar.SetMaxHealth(maxHealth);
        healthBarOne = GameObject.Find("CanvasOne").GetComponentInChildren(typeof(HealthBar)) as HealthBar;;
        healthBarTwo = GameObject.Find("CanvasTwo").GetComponentInChildren(typeof(HealthBar)) as HealthBar;
        Weapon = GameObject.Find("CanvasThree").GetComponentInChildren(typeof(Weaponbase)) as Weaponbase;
        healthBarOne.SetMaxHealth(maxHealth);
        healthBarTwo.SetMaxHealth(maxHealth);

    }
    public Rigidbody2D rb;
    public Camera cam;
    // Update is called once per frame

    Vector3 playerPosition;
    Vector2 movement;
    Vector2 mousePos;
    void Update()
    {
        int damage = 1;
        if(Input.GetKey(KeyCode.Q)){
          ChangeWeapon(damage);
        }
        if(Input.GetKeyDown(KeyCode.Space)){
            TakeDamage(damage);
        }
        mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
        playerPosition = GameObject.Find("Player1").transform.position;
        mousePos.x = mousePos.x - playerPosition.x;
        mousePos.y = mousePos.y - playerPosition.y;

        //switch weapon



        HUD.GetInstance().UpdateWeaponUI(Weapon.icon, Weapon.bulletPower);
    }
    public void ChangeWeapon(int damage){
      damage = damage*2;
    }
    /*
    public void nextWeapon(int step){
      var idx = (CurWeaponIdx + step + Weapons.Count)%Weapons.Count;
      CurWeapon.gameObject.SetActive(false);
      CurWeapon = Weapons[idx];
      CurWeapon.gameObject.SetActive(true);
      CurWeaponIdx = idx;
    }
    */
/*
    public void addWeapon(GameObject weapon){
      if (Weapons.gameObject.name ==weapon.name){
        return;
      }
      var new_weapon = GameObject.Instantiate(weapon);
      new_weapon.name = weapon.name;
      Weapons.Add(new_weapon.GetComponent<Weaponbase>());
      nextWeapon(Weapons.Count -1 -CurWeaponIdx);
    }
    */
    /*void Player1Turn()
    {
        PlayerMovement.turn = 1;
        GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = false;
        GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = true;
        GameObject.Find("Player1").GetComponent<shooting>().enabled = true;
        GameObject.Find("Player2").GetComponent<shooting>().enabled = false;
    }

    void Player2Turn()
    {
        PlayerMovement.turn = 2;
        GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = false;
        GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = true;
        GameObject.Find("Player2").GetComponent<shooting>().enabled = true;
        GameObject.Find("Player1").GetComponent<shooting>().enabled = false;
    }*/
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
            TakeDamage(2);
            Destroy(other.gameObject, 0.0f);
        }
    }

    void TakeDamage(int damage)
    {
        int currentHealth = healthBarTwo.GetHealth();
        healthBarTwo.SetHealth(currentHealth - damage);
    }
}
