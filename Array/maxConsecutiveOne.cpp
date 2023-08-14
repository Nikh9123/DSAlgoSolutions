#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOne(int arr[], int n)
{
  int count = 0, res = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   count = 0;
  //   for (int j = i; j < n; j++)
  //   {
  //     if (arr[j] == 1)
  //     {
  //       count++;
  //     }
  //     else {
  //       break;
  //     }
  //   }
  //   res = max(res, count);
  // }
  // return res;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      // cout << "val of i = " << i << " value of res = " << res << " val of count = " << count << endl;
    res = max(res, count);
    }
    else {
      count = 0;
      // cout << "val of i = " << i << " value of res = " << res << " val of count = " << count << endl;
    }
  }
  return res;
}
int main()
{
  int n = 13;
  int arr[n] = { 1,1,1,0,0,1,1,0,1,1,1,1,0 };
  cout << maxConsecutiveOne(arr, n);

}