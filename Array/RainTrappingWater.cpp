#include <bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n)
{
    // Your code here
    // ⚠️⚠️⚠️ 1st naive approach ⚠️⚠️⚠️
    //  time complexity = O(n^2);🧛
    //      int res =  0;
    //    for(int i=1 ; i < n-1 ; i++)
    //    {
    //      int lmax = arr[i];
    //      for(int j = 0 ; j < i ; j++)  //ith element se pahle ke maximum left height ko find kar rhe
    //      {
    //          lmax = max(lmax , arr[j]);
    //      }

    //     int rmax = arr[i];
    //     for(int j = i+1 ; j < n ; j++)//ith element ke right side me max element find kar rhe
    //     {
    //         rmax = max(rmax , arr[j]);
    //     }
    //     res += min(rmax , lmax) - arr[i];
    //   }
    //   return res ;

    // ⚠️⚠️⚠️ 2nd efficient approach ⚠️⚠️⚠️
    // time complexity O(n), space complexity O(n)

    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        water += min(rmax[i], lmax[i]) - arr[i];
    }
    return water;
}
int main()
{
    int n = 7;
    int arr[n] = {8, 8, 2, 4, 5, 5, 1};
    cout << trappingWater(arr, n);
}