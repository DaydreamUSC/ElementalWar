using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerMovement : MonoBehaviour
{
    public int maxHealth = 20;

    public HealthBar healthBarOne;
    public HealthBar healthBarTwo;

    void Start()
    {
        
        // currentHealth = maxHealth;
        // healthBar.SetMaxHealth(maxHealth);
        healthBarOne = GameObject.Find("CanvasOne").GetComponentInChildren(typeof(HealthBar)) as HealthBar;;
        healthBarTwo = GameObject.Find("CanvasTwo").GetComponentInChildren(typeof(HealthBar)) as HealthBar;
        
        healthBarOne.SetMaxHealth(maxHealth);
        healthBarTwo.SetMaxHealth(maxHealth);

    }
    public Rigidbody2D rb;
    public Camera cam;
    // Update is called once per frame

    Vector3 playerPosition;
    Vector2 movement;
    Vector2 mousePos;
    Vector2 mousePos2;
    // public bool inputEnabled = false;
    public static int turn = 1;
    void Update()
    {

        if(Input.GetKeyDown(KeyCode.Space)){
        TakeDamage(2);
        }

        mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
        if(PlayerMovement.turn == 1)
            playerPosition = GameObject.Find("Player1").transform.position;
        else
            playerPosition = GameObject.Find("Player2").transform.position;
        mousePos.x = mousePos.x - playerPosition.x;
        mousePos.y = mousePos.y - playerPosition.y;
        // Debug.Log(mousePos);
        // Debug.Log(player1Position);

    }
    void Player1Turn()
    {
        PlayerMovement.turn = 1;
        GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = false;
        GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = true;
        GameObject.Find("Player2").GetComponent<shooting>().enabled = false;
    }

    void Player2Turn()
    {
        PlayerMovement.turn = 2;
        GameObject.Find("Player2").GetComponent<PolygonCollider2D>().enabled = false;
        GameObject.Find("Player1").GetComponent<PolygonCollider2D>().enabled = true;
        GameObject.Find("Player1").GetComponent<shooting>().enabled = false;
    }
    void FixedUpdate()
    {
        Vector2 lookDir = mousePos;
        float angle = Mathf.Atan2(-1 * lookDir.y, -1 * lookDir.x) * Mathf.Rad2Deg;
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
        if (PlayerMovement.turn == 1) {
            int currentHealth = healthBarTwo.GetHealth();
            healthBarTwo.SetHealth(currentHealth - damage);
        } else {
            int currentHealth = healthBarOne.GetHealth();
            healthBarOne.SetHealth(currentHealth - damage);
        }
    }
}
