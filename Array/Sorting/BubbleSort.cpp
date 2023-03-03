// C++ program for implementation
// of Bubble sort
//IS a stable sorting algo 
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
//   int i, j;
//   for (i = 0; i < n - 1; i++)
//   {
//     bool swapped = false;
//     // Last i elements are already
//     // in place
//     for (j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//         swapped = true;
//       }
//     }
//     if (swapped == false)
//       break;
//   }
// }

// Function to print an array
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void InsertionSort(int arr[], int n)
{
  for(int i = 1; i < n ; i++)
  {
    int temp = arr[i];
    for(int j = i-1 ; j >= 0 ; j--)
    {
      if(temp < arr[j])
      {
    arr[i+1] =arr[i];
    arr[j-1] = arr[i] ;

      }
    }
  }
}
// Driver code
int main()
{
  int arr[] = {5, 1, 4, 2, 8};
  int N = sizeof(arr) / sizeof(arr[0]);
  // bubbleSort(arr, N);
  InsertionSort(arr , N);
  cout << "Sorted array: \n";
  printArray(arr, N);
  return 0;
}