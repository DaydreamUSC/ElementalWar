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
    public float Lifetime = 3.0f;
    private AudioSource Bullet_Shoot_Audio;
    public AudioSource[] sounds;

    Camera cam;
    Vector2 bulletDir;
    Vector3 endPoint;
    Vector3 playerPosition;
    private PhotonView photonView;

    private void Start()
    {
        photonView = GetComponent<PhotonView>();
        cam = Camera.main;
        Shotgun = false;
        sounds = GetComponents<AudioSource>();
        Bullet_Shoot_Audio = sounds[0];
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
            if (Time.frameCount%60 == 0){
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

        //Physics2D.IgnoreCollision(bullet.GetComponent<Collider2D>(), GetComponent<Collider2D>());
        rb.AddForce(bulletForce, ForceMode2D.Impulse);
        WaitAndDestroy(bullet);
        }

    [PunRPC]
    void WaitAndDestroy(GameObject bullet)
    {
        Destroy(bullet,Lifetime);
    }
}
