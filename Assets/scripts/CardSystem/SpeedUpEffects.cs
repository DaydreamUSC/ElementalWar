using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
public class SpeedUpEffects : MonoBehaviour
{
    public float addSpeed = 20f;
    public EnergyBar energyBar;
    void Update(){
        if(Input.GetKeyDown(KeyCode.Alpha3)){
            if(energyBar.getCurrentEnergy() >= 3 && Move.moveSpeed<120f){
                // Debug.Log(Move.moveSpeed);
                Move.moveSpeed += addSpeed;
                energyBar.UseEnergy(3);

                AnalyticsResult analyticsResult = Analytics.CustomEvent("Click Skill Card: MoveSpeedUp", new Dictionary<string, object>{
                    { "currentSpeed", Move.moveSpeed },
                    { "Player", System.Environment.UserName }
                }); 
                Debug.Log("[Analytics] Click Skill Card: MoveSpeedUp:" + analyticsResult);
            }
        }
    }
    /*public void onClick() {
        if(energyBar.getCurrentEnergy() >= 3){
            // Debug.Log(Move.moveSpeed);
            Move.moveSpeed += addSpeed;
            energyBar.UseEnergy(3);
            Debug.Log("analyticsResult=" + Analytics.CustomEvent("Click Skill Card: MoveSpeedUp"));
        }
    }*/
}
