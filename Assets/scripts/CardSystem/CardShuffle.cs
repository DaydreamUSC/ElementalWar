using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CardShuffle : MonoBehaviour
{
    // Start is called before the first frame update
   public static Queue<int> numbers = new Queue<int>();
    void Start()
    {

      int[] alpha = new int[9] {0, 1, 2, 3, 4, 5, 6, 7, 8};
      for (int i = 0; i < 9; i++) {
    int temp = alpha[i];
    int randomIndex = Random.Range(i, 9);
    alpha[i] = alpha[randomIndex];
    alpha[randomIndex] = temp;
}
      foreach(int i in alpha){
        numbers.Enqueue(i);
        Debug.Log("hello"+i);
      }
    }

    // Update is called once per frame
    void Update()
    {
      //Debug.Log("hello"+numbers);
      //Debug.Log("hello"+1);
    }

    public int GetCard(int n){
      if (n!=-1){
        Debug.Log(n+"is coming");
        numbers.Enqueue(n);
      }
      Debug.Log("poping"+numbers.Peek());
      return numbers.Dequeue();
    }


}
