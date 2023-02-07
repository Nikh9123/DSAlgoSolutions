/*
count 1 in sorted binary array using binary search
*/

using namespace std;
#include <bits/stdc++.h>

int Count1InSortedArray(int arr[], int n)
{
  int low = 0, high = n - 1, ans = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == 0)
      low = mid + 1;
    else
    {
      if (arr[mid - 1] == 0 || mid == 0)
      {
        return (n - mid);
      }
      else
      {
        high = mid - 1;
      }
    }
  }
  return 0;
}
int main()
{
  int n = 10;
  int arr[n] = {0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
  cout << Count1InSortedArray(arr, n);
}
