using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{

    public Slider slider;
    void Update() {
      transform.rotation = Quaternion.identity;
    }
    public void SetMaxHealth(int health)
    {

      slider.maxValue = health;
      slider.value = health;
    }
    public void SetHealth(int health)
    {
      
      slider.value = health;
      //Debug.Log(health);
    }

    //Return the current health of the player
    public int GetHealth()
    {
      return (int)slider.value;
    }
}
