using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class CureEffects : MonoBehaviour
{
    //public float addSpeed = 20f;

    public int addHP = 20;
    public EnergyBar energyBar;
    void Update(){
        if(Input.GetKeyDown(KeyCode.Alpha2)){
            if(energyBar.getCurrentEnergy() >= 5 && Player.currentHP<Player.maxHealth){
                Player.currentHP += addHP;
                energyBar.UseEnergy(5); // consume EP 
                AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: Cure", new Dictionary<string, object>{
                    { "currentHP", Player.currentHP},
                    { "Player", System.Environment.UserName }
                }); 
                Debug.Log("[Analytics] Click Skill Card: Cure:" + analyticsResult);
            }
        }
    }
    /*public void onClick() {
        if(energyBar.getCurrentEnergy() >= 5){
            Player.currentHP += addHP;
            energyBar.UseEnergy(5);
            Debug.Log("analyticsResult=" + Analytics.CustomEvent("Click Skill Card: Cure"));
        }

    }*/
}
