using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class instruction : MonoBehaviour
{
    // Start is called before the first frame update
    public void InstructionClicked(){
      SceneManager.LoadScene("Loading");
    }
}
