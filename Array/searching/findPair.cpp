using namespace std;
#include <bits/stdc++.h>
bool Pair(int arr[], int n, int x)
{
  // for(int i = 0 ; i < n-1 ; i++)
  // {
  //     for(int j = i + 1 ; j < n ; j++)
  //     {
  //        if(arr[i] + arr[j] == x)
  //        return true ;
  //     }
  // }

  //* two pointer approach 
  //
  int i = 0, j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
      return true;
    else if (arr[i] + arr[j] > x)
      j = j - 1;
    else
      i = i + 1;
  }
  return false;
}
int main()
{
  int n = 8, arr[n] = {2, 4, 8, 9, 11, 12, 20, 30}, x = 23;
  cout << Pair(arr, n, x);
}