using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Analytics;
public class EnergyBar : MonoBehaviour
{
    private GameObject changingtext;


    public Slider energyBar;
    private int max_energy = 10;
    private int current_energy;
    private Coroutine regen;

    private WaitForSeconds regenTick = new WaitForSeconds(1);

    public static EnergyBar instance;

    private void Awake() {
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        current_energy = 0;
        energyBar.maxValue = max_energy;
        energyBar.value = 0;
        regen = StartCoroutine(RegenEnergy());
    }

    public float getCurrentEnergy(){
        return energyBar.value;
    }
    public void UseEnergy(int amount)
    {
        if(current_energy - amount >= 0)
        {
            current_energy -= amount;
            energyBar.value = current_energy;

            if(regen != null)
                StopCoroutine(regen);

            regen = StartCoroutine(RegenEnergy());

            AnalyticsResult analyticsResult = Analytics.CustomEvent("Energy Consumption", new Dictionary<string, object>{
                { "current_energy", current_energy},
                { "Player", System.Environment.UserName }
            }); 
            Debug.Log("[Analytics] Energy Consumption:" + analyticsResult);
        }
        else
        {
            Debug.Log("Not enough Energy");
        }
    }

    private IEnumerator RegenEnergy()
    {
        yield return new WaitForSeconds(1);

        while(current_energy < max_energy)
        {
            // current_energy += max_energy/100;
            current_energy += 1;
            energyBar.value = current_energy;
            yield return regenTick;
        }
        regen = null;
    }


}
