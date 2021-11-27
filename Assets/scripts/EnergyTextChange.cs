using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnergyTextChange : MonoBehaviour
{
    public Text EnergyText;
    public GameObject energyBar;
    void Start()
    {
        EnergyText = GetComponent<Text>();
    }

    public void textUpdate(float value)
    {
        EnergyText.text = Mathf.RoundToInt(value)+" points";
    }

    void Update(){
      EnergyText.text = Mathf.RoundToInt(energyBar.GetComponent<EnergyBar>().cur_energy())+" points";
    }

}
