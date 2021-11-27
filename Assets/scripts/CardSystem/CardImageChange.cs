using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CardImageChange : MonoBehaviour
{
    // Start is called before the first frame update
    public SpriteRenderer img;
    public GameObject cardNum;
    void Start()
    {
        cardNum.GetComponent<UnityEngine.UI.Image>().sprite = img.sprite;

    }

    // Update is called once per frame
    void Update()
    {

    }
}
