using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnergyTextChange : MonoBehaviour
{
    public Text EnergyText;
    void Start()
    {
        EnergyText = GetComponent<Text>();
    }

    public void textUpdate(float value)
    {
        EnergyText.text = Mathf.RoundToInt(value)+" points";
    }

}
