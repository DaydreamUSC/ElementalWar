using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class CureEffects : MonoBehaviour
{
    //public float addSpeed = 20f;

    public int addHP = 20;

    public void onClick() {

        Player.currentHP += addHP;
        Debug.Log("analyticsResult=" + Analytics.CustomEvent("Click Skill Card: Cure"));

    }
}
