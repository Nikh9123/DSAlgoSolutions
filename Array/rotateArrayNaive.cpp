using namespace std;
#include<bits/stdc++.h>

void rotateArr(int arr[], int n, int d) {
  // code 
  int t = 0;
  while (t < d)
  {
    int temp = arr[0] ;
    for(int i = 0 ; i < n-1 ; i++)
    {
      arr[i] = arr[i+1] ;
    }
    arr[n-1] = temp ;
    t++ ;
  }
}

int main()
{
  int n = 5;
  int arr[n] = { 1,2,3,4,5 };
  rotateArr(arr, n, 2);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}