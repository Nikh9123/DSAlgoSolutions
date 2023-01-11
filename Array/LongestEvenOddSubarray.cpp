#include <bits/stdc++.h>
using namespace std;
int FindEvenOddSubArray(int *arr, int n)
{
    //naive approach O(n^2);
    // int res = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     int curr = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
    //         {
    //             curr++;
    //         }
            
    //     }
    //     res = max(res, curr);
    // }
    // return res;

     //efficient TC = O(n) solution
    int res = 1 , curr = 1 ;
    for(int i =1 ; i < n ; i++)
    {
      if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
      {
        curr++ ;
      }
      else{
        curr = 1 ;
      }
      res = max(res , curr) ;

    }
    return res ;
}
int main()
{
    int n = 5;
    int arr[n] = {10, 12, 14, 7, 8};
    //    int arr[n] = {10, 12, 16,20,22};
    cout << FindEvenOddSubArray(arr, n);
    return 0;
}
