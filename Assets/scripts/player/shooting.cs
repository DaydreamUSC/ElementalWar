using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class shooting : MonoBehaviour
{
    // Start is called before the first frame update

    public Transform firePoint;
    public GameObject bulletPrefab;
    //public int bulletSpeed = 10f; //= 10f;
    /*public Vector2 minPower;
    public Vector2 maxPower;*/

    public float Lifetime = 3.0f;

    Camera cam;
    Vector2 bulletDir;
    Vector3 endPoint;
    Vector3 playerPosition;
    private PhotonView photonView;
    private void Start()
    {
        photonView = GetComponent<PhotonView>();
        cam = Camera.main;
    }
    // Update is called once per frame

    void Update()
    {
        if(photonView.IsMine){
            int speed = ChangeWeapon.bulletSpeed;
            playerPosition = this.transform.position;
            endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            bulletDir = new Vector2((endPoint.x - playerPosition.x), (endPoint.y - playerPosition.y));
            bulletDir.Normalize();
            if (Time.frameCount%60 == 0){
                // Debug.Log(Time.frameCount);
                photonView.RPC("UpdateShoot", RpcTarget.All, speed*bulletDir);
            }
        }
    }
    [PunRPC]
    public void UpdateShoot(Vector2 bulletForce)
    {
        GameObject bullet = Instantiate(bulletPrefab, firePoint.position, transform.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        Physics2D.IgnoreCollision(bullet.GetComponent<Collider2D>(), GetComponent<Collider2D>());
        rb.AddForce(bulletForce, ForceMode2D.Impulse);
        WaitAndDestroy(bullet);
    }
    void WaitAndDestroy(GameObject bullet)
    {
        Destroy(bullet,Lifetime);
    }
}
