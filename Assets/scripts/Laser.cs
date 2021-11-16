using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Laser : MonoBehaviour
{
    public Camera camera;
    public LineRenderer lineRenderer;
    public Transform firePoint;
    public GameObject startVFX;
    public GameObject endVFX;

    private Coroutine LaserActivate;

    int hitcount = 0;
    


    private PhotonView photonView;


    private Quaternion rotation;
    private List<ParticleSystem> particles = new List<ParticleSystem>();
    // Start is called before the first frame update
    void Start()
    {
        photonView = GetComponent<PhotonView>();
        FillLists();
        DisableLaser();
    }
    Vector2 direction;
    // Update is called once per frame
    void Update()
    {
        if(photonView.IsMine)
        {

            if(Input.GetButtonDown("Fire1"))
            {
                if(LaserActivate != null)
                    StopCoroutine(LaserActivate);
                LaserActivate = StartCoroutine("LaserOn");
            }
            // if(Input.GetButtonDown("Fire1"))
            // {
            //     photonView.RPC("EnableLaser", RpcTarget.All);
            //     // EnableLaser();
            // }
            
            // if(Input.GetButton("Fire1"))
            // {
            //     var mousePos = (Vector2)camera.ScreenToWorldPoint(Input.mousePosition);
            //     Vector2 LaserEndpoint = new Vector2((mousePos.x+6),(mousePos.y));
            //     photonView.RPC("UpdateLaser", RpcTarget.All, LaserEndpoint);
            //     // UpdateLaser();
            // }
            // if(Input.GetButtonUp("Fire1"))
            // {
            //     photonView.RPC("DisableLaser", RpcTarget.All);
            //     // DisableLaser();
            // }

            Vector3 endPoint = camera.ScreenToWorldPoint(Input.mousePosition);
            Vector3 playerPosition = this.transform.position;
            direction = new Vector2((endPoint.x - playerPosition.x), (endPoint.y - playerPosition.y));
            /*direction = camera.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            float angle = Mathf.Atan2(direction.y, direction.x+6) * Mathf.Rad2Deg;
            rotation.eulerAngles = new Vector3(0,0,angle);*/
            //photonView.RPC("RotateToMouse", RpcTarget.All, rotation);
            // RotateToMouse();
        }

    }

    //Laser last about 5 seconds
    private IEnumerator LaserOn()
    {
        Move.moveSpeed = 2f;
        //photonView.RPC("LockHealthBarRotation", RpcTarget.All, true);

        photonView.RPC("EnableLaser", RpcTarget.All);
        var mousePos = (Vector2)camera.ScreenToWorldPoint(Input.mousePosition);
        Vector2 LaserEndpoint = new Vector2((mousePos.x+6),(mousePos.y));
        Vector2 ExtendedEndPoint = LaserEndpoint + (LaserEndpoint - (Vector2)firePoint.position) * 20;
        Vector2 playerposition = this.transform.position;
        Quaternion CurrentRotation = transform.rotation;

        for(float ft = 75f; ft >= 0; ft -= 0.1f)
        {
            //photonView.RPC("LockPlayerRotation", RpcTarget.All, CurrentRotation); //Lock the rotation to Laser start point

            if(playerposition != (Vector2)this.transform.position)//Let the LaserEndPoint move as player move
            {
                ExtendedEndPoint = ExtendedEndPoint - ((Vector2)playerposition - (Vector2)this.transform.position);
                playerposition = this.transform.position;
            }
            photonView.RPC("UpdateLaser", RpcTarget.All, ExtendedEndPoint);
            yield return new WaitForSeconds(.005f);
        }

        photonView.RPC("DisableLaser", RpcTarget.All);

        Move.moveSpeed = 20f;
        //photonView.RPC("LockHealthBarRotation", RpcTarget.All, false);
    }
    /*
    [PunRPC]
    void LockHealthBarRotation(bool Laser_Switch)
    {
        HealthBar.LaserSwitch = Laser_Switch;
    }

    [PunRPC]
    void LockPlayerRotation(Quaternion Current_Rotation)
    {
        transform.rotation = Current_Rotation;
    }*/

    [PunRPC]    
    void EnableLaser()
    {
        lineRenderer.enabled = true;

        for(int i=0; i<particles.Count; i++)
            particles[i].Play();       
    }

    [PunRPC]
    void UpdateLaser(Vector2 LaserEndpoint)
    {

        lineRenderer.SetPosition(0, (Vector2)firePoint.position);
        startVFX.transform.position = (Vector2)firePoint.position;

        lineRenderer.SetPosition(1, LaserEndpoint);

        //Vector2 direction = LaserEndpoint - (Vector2)transform.position;
        // Bit shift the index of the layer (5) to get a bit mask
        int layerMask = 1 << 5;
        // This would cast rays only against colliders in layer 5.
        // But instead we want to collide against everything except layer 5. The ~ operator does this, it inverts a bitmask.
        layerMask = ~layerMask;
        
        //angle.Normalize();
        
        RaycastHit2D hit = Physics2D.Raycast((Vector2)firePoint.position, direction.normalized, direction.magnitude, layerMask);

        if(hit.collider != null)
        {
            // Debug.Log("Hit "+hit.collider.name);
            lineRenderer.SetPosition(1, hit.point);

            if(hit.collider.name == "bullet1(Clone)")
            {
                // Debug.Log("Hit "+hit.collider.name);
                Destroy(hit.transform.gameObject);
                // Debug.Log(hit.collider.name+"was destroyed!");
            }
            // if(hit.collider.name != "mid_boundary")
            // {
            //     Debug.Log("Hit "+hit.collider.name);
            //     lineRenderer.SetPosition(1, hit.point);
            // }
            if(hit.collider.name == "Player1(Clone)" || hit.collider.name == "Player1" || hit.collider.name == "Player2")
            // if(hit.collider.name == "Player1" || hit.collider.name == "Player2" )
            {
                Debug.Log("Hit "+hit.collider.name);
                hitcount++;
                if(hitcount == 10)
                {
                    Debug.Log("Call HPdeduction");
                    hit.collider.gameObject.GetComponent<Player>().HPdeduction(1);
                    hit.collider.gameObject.GetComponent<Player>().CheckDeath();
                    // photonView.RPC("CallFromPlayer", RpcTarget.All, 1);
                    hitcount = 0;
                }
            }
            
        }

        endVFX.transform.position = lineRenderer.GetPosition(1);
    }

    [PunRPC]
    void DisableLaser()
    {
        lineRenderer.enabled = false;

        for(int i=0; i<particles.Count; i++)
            particles[i].Stop();       
    }

    /*[PunRPC]
    void RotateToMouse(Quaternion rotation)
    {
        
        transform.rotation = rotation;

    }*/
    void FillLists()
    {
        for(int i=0; i<startVFX.transform.childCount; i++)
        {
            var ps = startVFX.transform.GetChild(i).GetComponent<ParticleSystem>();
            if(ps != null)
                particles.Add(ps);
        }

        for(int i=0; i<endVFX.transform.childCount; i++)
        {
            var ps = endVFX.transform.GetChild(i).GetComponent<ParticleSystem>();
            if(ps != null)
                particles.Add(ps);
        }
    }

}
