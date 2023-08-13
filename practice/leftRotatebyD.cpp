#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Reverse a portion of an array between the given low and high indices (inclusive).
 *
 * This function takes an integer array and reverses the elements within the specified range [low, high].
 * The function swaps the elements at the low index with the element at the high index and proceeds
 * inwards towards the center of the range until low >= high. The function modifies the original array.
 *
 * @param arr An integer array.
 * @param low The starting index of the range to be reversed.
 * @param high The ending index of the range to be reversed.
 */
void reverseArray(int arr[], int low, int high) {
    while (low < high) {
        // Swap elements between low and high indices
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        // Move the indices towards the center of the array
        low++;
        high--;
    }
}


void rotateArray(int arr[], int n, int d)
{
  //^ ---------solution 1--------------
  // int temp[d];
  // for (int i = 0; i < d; i++)
  // {
  //   temp[i] = arr[i];
  // }

  // for (int i = d; i < n; i++)
  // {
  //   /* code */
  //   arr[i - d] = arr[i];
  // }

  // for (int i = 0; i < d; i++)
  // {
  //   /* code */
  //   arr[n - d + i] = temp[i];
  // }
  
  d = d % n ;
  reverseArray(arr , 0 ,d-1);
  reverseArray(arr,d,n-1);
  reverseArray(arr , 0 , n-1);

}

int main() {
  int d = 2;
  int n = 10;
  int arr[n] = { 0,0,1,1,1,2,2,3,3,4 };

  rotateArray(arr, n, d);

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }

}