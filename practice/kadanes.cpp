#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
  //brute force 
  // int sum = 0, res = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   sum = arr[i];
  //   for (int j = i + 1;j < n; j++)
  //   {
  //     sum += arr[j];

  //     res = max(res, sum);

  //     if (sum < 0)
  //     {
  //       sum = 0;
  //     }
  //   }
  // }

  //naive approach
  int sum = arr[0], res = 0;
  for (int i = 1; i < n; i++)
  {
    sum += arr[i];
    res = max(sum, res);
    if (sum < 0)
    {
      sum = 0;
    }
  }
  return res;
}
int main() {
  int n = 8;
  int arr[n] = { -47 ,43 ,94, -94 ,-93, -59, 31, -86 };
  cout << "ans = " << maxSubarraySum(arr, n);
}
/**
 * 8
-47 43 94 -94 -93 -59 31 -86

*/