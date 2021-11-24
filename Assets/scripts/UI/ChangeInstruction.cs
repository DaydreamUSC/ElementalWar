using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeInstruction : MonoBehaviour
{

    public GameObject[] Objects;
    public static int selectedInstruction = 0;
    void Start(){
        HideAllInstruction();
        Objects[selectedInstruction].SetActive(true);

    }


    private void HideAllInstruction(){
        foreach (GameObject g in Objects){
            g.SetActive(false);
        }
    }

    public void NextInstruction(){
        Objects[selectedInstruction].SetActive(false);
        selectedInstruction++;
        if (selectedInstruction >= Objects.Length){
            selectedInstruction = 0;
        }
        Objects[selectedInstruction].SetActive(true);

    }

    public void PreviousInstruction(){
        Objects[selectedInstruction].SetActive(false);
        selectedInstruction--;
        if (selectedInstruction < 0){
            selectedInstruction = Objects.Length-1;
        }
        Objects[selectedInstruction].SetActive(true);

    }
}
