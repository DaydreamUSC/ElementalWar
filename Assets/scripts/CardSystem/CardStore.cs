using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardStore : MonoBehaviour
{
    public TextAsset cardData; // 卡牌数据txt文件
    public List<Card> cardList = new List<Card>(); // 存储卡牌数据的链表

    // Start is called before the first frame update
    void Start()
    {
        //LordCardData();
        //TestLoad();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void LordCardData()
    {
        string[] dataRow = cardData.text.Split('\n');
        foreach (var row in dataRow)
        {
            string[] rowArray = row.Split(',');
            if (rowArray[0] == "cardType")
            {
                continue;
            }
            else if (rowArray[0] == "w")
            {
                int id = int.Parse(rowArray[1]);
                string name = rowArray[2];
                int atk = int.Parse(rowArray[3]);
                int speed = int.Parse(rowArray[4]);

                MonsterCard monsterCard = new MonsterCard(id, name, atk, speed);
                cardList.Add(monsterCard);
            }
            else if (rowArray[0] == "s")
            {
                int id = int.Parse(rowArray[1]);
                string name = rowArray[2];
                string effect = rowArray[3];
                SpellCard spellCard = new SpellCard(id, name, effect);
                cardList.Add(spellCard);
            }

        }
    }

    public void TestLoad()//复制数据，需要创建一个新的实例，从原有的数据中构建
    {
        foreach (var item in cardList){
            Debug.Log("card: "+ item.id.ToString()+ item.cardName);
        }
    }
    public Card RandomCard()
    {
        Card card = cardList[Random.Range(0, cardList.Count)];
        return card;
    }


}
