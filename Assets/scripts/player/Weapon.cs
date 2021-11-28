using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class Weapon : MonoBehaviour
{
  public Transform WeaponPoint;
  public GameObject currentWeapon;
  private PhotonView photonView;
  public GameObject MachineGun;
  public GameObject LaserGun;
  public GameObject FloatingGun;
  public GameObject Canon;
    // Start is called before the first frame update
    void Start()
    {
        photonView = GetComponent<PhotonView>();
        currentWeapon = Instantiate(MachineGun, WeaponPoint.position, transform.rotation);
        Debug.Log(PhotonNetwork.IsMasterClient);
        // if(!PhotonNetwork.IsMasterClient){
        //
        //      photonView.RPC("flipWeapon", RpcTarget.All);
        //  }
    }

    // Update is called once per frame
    void Update()
    {
      currentWeapon.transform.position = WeaponPoint.position;
    }

    void fixedUpdate(){

    }

    // [PunRPC]
    // private void flipWeapon(){
    //   Debug.Log(currentWeapon);
    //   Debug.Log("flipped weapon!");
    //   // if(!PhotonNetwork.IsMasterClient){
    //     Debug.Log("there you go");
    //   Vector3 newScale = currentWeapon.transform.localScale;
    //   newScale.x *= -1;
    //   currentWeapon.transform.localScale = newScale;
    // }
    // }

    // [PunRPC]
    // private void changeWeapon(GameObject Gun){
    //   currentWeapon = NetWork.Instantiate(Gun, WeaponPoint.position, transform.rotation);
    // }
}
