using namespace std;
#include <bits/stdc++.h>

// Function to print an array
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

//* Naive solution using extra space temp[n]
// void SelectionSort(int arr[], int n)
// {
//   int temp[n];

//   for (int i = 0; i < n; i++)
//   {

// //* find minimum element and store it into temp array 
// //* in the place of minimum element store infinte 
// //* again find minimum element and store in into temp array
//     int minV = 0;
//     for (int j = 1; j < n; j++)
//     {
//       if (arr[j] < arr[minV])
//       {
//         minV = j;
//       }
//     }
//     //* storing the min element to temp array 
//     temp[i] = arr[minV];

//     //* putting infinte in the place of minimum
//     arr[minV] = INFINITY;
//   }
//   //* copy the temp array to original array
//   for (int i = 0; i < n; i++)
//   {
//     arr[i] = temp[i];
//   }
// }

//Swap function
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 

    //* One by one move boundary of 
    //* unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
      
        //* Find the minimum element in 
        //* unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 

        //* Swap the found minimum element 
        //* with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

//Function to print an array
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 