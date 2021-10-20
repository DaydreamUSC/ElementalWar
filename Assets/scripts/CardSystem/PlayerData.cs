using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class PlayerData : MonoBehaviour
{
    public CardStore CardStore;
    public int playerCoins;
    public int[] playerCards;


    public TextAsset playerData;
    // Start is called before the first frame update
    void Start()
    {
        CardStore.LordCardData();
        LoadPlayerData();
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void LoadPlayerData(){
        playerCards= new int[CardStore.cardList.Count];
        string[] dataRow = playerData.text.Split('\n');
        foreach( var row in dataRow){
            string[] rowArrary = row.Split(',');
            if(rowArrary[0]=="cardType"){
              continue;
            }
            else if(rowArrary[0]=="coins"){
                playerCoins = int.Parse(rowArrary[1]);
            }
            else if(rowArrary[0]=="card"){
                int id = int.Parse(rowArrary[1]);
                int num = int.Parse(rowArrary[2]);
                playerCards[id] = num;
            }


        }
    }

    public void SavePlayerData(){
        string path = Application.dataPath + "/Datas/PlayerData.csv";
        List<string> datas = new List<string>();
        datas.Add("coins,"+playerCoins.ToString());
        for (int i=0; i<playerCards.Length; i++){
          if(playerCards[i]!=0){
              datas.Add("coins,"+ i.ToString()+ "," + playerCards[i].ToString());
          }

        }

        File.WriteAllLines(path,datas);
    }
}
