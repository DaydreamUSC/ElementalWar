using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Cardselection : MonoBehaviour
{

    public GameObject[] Objects;
    public static int selectedCard = 0;
    void Start(){
        HideAllInstruction();
        Objects[selectedCard].SetActive(true);

    }


    private void HideAllInstruction(){
        foreach (GameObject g in Objects){
            g.SetActive(false);
        }
    }

    public void NextInstruction(){
        Objects[selectedCard].SetActive(false);
        selectedCard++;
        if (selectedCard >= Objects.Length){
            selectedCard = 0;
        }
        Objects[selectedCard].SetActive(true);

    }

    public void PreviousInstruction(){
        Objects[selectedCard].SetActive(false);
        selectedCard--;
        if (selectedCard < 0){
            selectedCard = Objects.Length-1;
        }
        Objects[selectedCard].SetActive(true);

    }
}
