#include<bits/stdc++.h>
using namespace std;

int subarrayWithGivenSum(vector<int>arr, int k)
{
  int n = arr.size();
  int curr = 0, res = -1;

  //brute force approach
  /*
  for (int i = 0; i + k - 1 < n; i++)
  {
    curr = 0;
    for (int j = 0; j < k;j++)
    {
      curr += arr[j + i];
      res = max(res, curr);
    }
  }
  */
  
  for(int i = 0 ; i < k ; i++)
  {
    curr += arr[i] ;
  }
  res = curr ;
  for(int i = k ; i < n ; i++)
  {
    curr = curr - arr[i-k] + arr[i] ;
    res = max(res , curr);
  }

  return res;
}

int main()
{
  int k = 3;
  vector<int>arr = { 10,5,-2,20,1 };
  cout << "ans = " << subarrayWithGivenSum(arr, k);
}