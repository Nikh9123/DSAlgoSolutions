#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n) {
  // Your code here
  int arr2[n];
  for (int i = 0; i < n; i++)
  {
    arr2[i] = arr[arr[i]];
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] = arr2[i];
  }

}
int main()
{
  int n = 5;
  int arr[n] = { 4,0,2,1,3 };
  arrange(arr, n);
  for (int i = 0;i < n;i++)
  {
    cout << arr[i] << " ";
  }
}