using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class shooting : MonoBehaviour
{
    // Start is called before the first frame update

    public Transform firePoint;
    public GameObject bulletPrefab;
    public Transform firePoint_down;
    public Transform firePoint_up;
    //public int bulletSpeed = 10f; //= 10f;
    /*public Vector2 minPower;
    public Vector2 maxPower;*/
    public static bool Shotgun = false;
    public float Lifetime = 10.0f;
    private AudioSource Bullet_Shoot_Audio;
    public AudioSource[] sounds;


    Camera cam;
    Vector2 bulletDir;
    Vector3 endPoint;
    Vector3 playerPosition;
    private PhotonView photonView;


    public Transform WeaponPoint;
    public SpriteRenderer WeaponUI;
    public GameObject myplayer;

    private int Machinephotonid;
    private int Laserphotonid;
    private int Floatingphotonid;
    private int Cannonphotonid;
    private int num;
    private bool BacktodefaultGun = true;

    private void Start()
    {
        photonView = GetComponent<PhotonView>();
        cam = Camera.main;
        Shotgun = false;
        sounds = GetComponents<AudioSource>();
        Bullet_Shoot_Audio = sounds[0];
        GameObject Machine = PhotonNetwork.Instantiate("MachineGun", new Vector3(-40f,-40f,-1f), transform.rotation);
        GameObject Las = PhotonNetwork.Instantiate("Laser", new Vector3(-40f,-40f,-1f), transform.rotation);
        GameObject Floatd = PhotonNetwork.Instantiate("Floating", new Vector3(-40f,-40f,-1f), transform.rotation);
        GameObject Cannon = PhotonNetwork.Instantiate("Cannon_w", new Vector3(-40f,-40f,-1f), transform.rotation);
        Machinephotonid = Machine.GetComponent<PhotonView>().ViewID;
        Laserphotonid = Las.GetComponent<PhotonView>().ViewID;
        Floatingphotonid = Floatd.GetComponent<PhotonView>().ViewID;
        Cannonphotonid = Cannon.GetComponent<PhotonView>().ViewID;
        Lifetime = 10.0f;
    }
    // Update is called once per frame

    void Update()
    {
        if(photonView.IsMine){
            int speed = Player.PlayerShootSpeed;
            playerPosition = this.transform.position;
            endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            bulletDir = new Vector2((endPoint.x - playerPosition.x), (endPoint.y - playerPosition.y));
            bulletDir.Normalize();
            if (Time.frameCount%20 == 0){
                // Debug.Log(Time.frameCount);
                //photonView.RPC("UpdateShoot", RpcTarget.All, speed*bulletDir);
                if (Shotgun) {
                    Vector2 bulletDir_up = new Vector2(bulletDir.x + 0.1f, bulletDir.y + 0.1f);
                    Vector2 bulletDir_down = new Vector2(bulletDir.x - 0.1f, bulletDir.y - 0.1f);
                    UpdateShoot(speed * bulletDir_up,firePoint_up);
                    UpdateShoot(speed * bulletDir_down,firePoint_down);

                }
                UpdateShoot(speed * bulletDir,firePoint);
            }
        }

      //  photonView.RPC("UpdateWeaponPosition", RpcTarget.All);
    //   if(Input.GetMouseButtonDown(0))
    // {
    // //photonView.RPC("changeWeaponUI", RpcTarget.All,Canon);
    // getWeaponID("CannonGun");
    // }
    }




    public void UpdateShoot(Vector2 bulletForce, Transform firePoint)
    {
        GameObject bullet = PhotonNetwork.Instantiate("bullet1", firePoint.position, transform.rotation);
        int photonid = bullet.GetComponent<PhotonView>().ViewID;
        Bullet_Shoot_Audio.PlayOneShot(Bullet_Shoot_Audio.clip);
        photonView.RPC("addForce", RpcTarget.All, photonid, bulletForce);
    }


    [PunRPC]
    public void addForce(int photonid, Vector2 bulletForce)
        {
        //Debug.Log("Pho" + PhotonNetwork.IsMasterClient);
        GameObject bullet = PhotonNetwork.GetPhotonView(photonid).gameObject;
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        int current_damage = Player.PlayerShootPower;
        bullet.GetComponent<bullet_property>().bullet_Damage = current_damage;
        // Debug.Log("your shootPower");
        // Debug.Log(Player.PlayerShootPower);
        //Physics2D.IgnoreCollision(bullet.GetComponent<Collider2D>(), GetComponent<Collider2D>());
        rb.AddForce(bulletForce, ForceMode2D.Impulse);
        WaitAndDestroy(bullet);
        }

    [PunRPC]
    void WaitAndDestroy(GameObject bullet)
    {
        Destroy(bullet,Lifetime);
    }

    // [PunRPC]
    // void UpdateWeaponPosition(){
    //   currentWeapon.transform.position = WeaponPoint.position;
    // }
    //
    // [PunRPC]
    // void flipWeapon(){
    //   Vector3 newScale = currentWeapon.transform.localScale;
    //   newScale.x *= -1;
    //   currentWeapon.transform.localScale = newScale;
    // }

    public void test(string NewGun){
      Debug.Log("!!! called me!");
      Debug.Log("calle me!");
      if(NewGun == "MachineGun"){
        num = Machinephotonid;
      }
      if(NewGun == "LaserGun"){
        num = Laserphotonid;
      }
      if(NewGun == "FloatingGun"){
        num = Floatingphotonid;
      }
      if(NewGun == "CannonGun"){
        num = Cannonphotonid;
      }
      photonView.RPC("changeWeaponUI", RpcTarget.All,num);
    }

    // public void getWeaponID(string NewGun){
    //   Debug.Log("calle me!");
    //   if(NewGun == "MachineGun"){
    //     num = Machinephotonid;
    //   }
    //   if(NewGun == "LaserGun"){
    //     num = Laserphotonid;
    //   }
    //   if(NewGun == "FloatingGun"){
    //     num = Floatingphotonid;
    //   }
    //   if(NewGun == "CannonGun"){
    //     num = Cannonphotonid;
    //   }
    //   photonView.RPC("changeWeaponUI", RpcTarget.All,num);
    // }

    [PunRPC]
    public void changeWeaponUI(int photonid){
    //  Debug.Log(photonid);
      GameObject Weapon = PhotonNetwork.GetPhotonView(photonid).gameObject;
      Debug.Log(Weapon);
      Sprite NewGun = Weapon.GetComponent<SpriteRenderer>().sprite;
    //  Debug.Log("?");
      WeaponUI.sprite = NewGun;
    }
}
