#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n)
{
  int temp = arr[0] ;
  for (int i = 1; i < n; i++)
  {
    /* code */
    arr[i-1] = arr[i] ;
  }
  arr[n-1] = temp;
  
}

int main() {
  int n = 5;
  int arr[n] = { 1,2,3,4,5 };
  rotateArray(arr, n);
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }

}