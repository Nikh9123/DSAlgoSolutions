// program to check arr is sorted or not
using namespace std;
#include <bits/stdc++.h>
bool IsSorted(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    if (arr[i] > arr[i + 1])
      return false;

  return true;
}
int main()
{
  int n = 10;
  int arr[n] = {10, 23, 2, 34, 23, 55, 234, 32, 55, 45};
  cout << IsSorted(arr, n);
}