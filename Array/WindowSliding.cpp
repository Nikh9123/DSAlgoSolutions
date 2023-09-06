/*
Given an array of integers of size 'n'.
Our aim is to calculate the maximum sum of 'k'
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.
*/
/*
@https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
*/
using namespace std;
#include <bits/stdc++.h>

int WindowSliding(int arr[], int n, int k)
{
    //naive approach  TC = O(n*k) , SC =O(1)
//    int res = arr[0];
    // for(int i = 0 ; i + k-1 < n ; i++)
    // {
    //     int sum = 0 ;
    //     for(int j = 0 ; j < k ; j++) //j ith element se uske aggey ke kth element tak jaa rha hai eg:- i =0 , j = 0 , 1, 2 : i=1 , j =0+1, 0+2 , 0+3
    //     {
    //         sum += arr[j+i] ;
    //     }
    //     res = max(sum , res );
    // }
    // return res ;



    //efficient approach 
    // TC = O(n) , SC =O(1)
    int sum = 0 , res = INT_MIN ;
    for(int i = 0 ; i < k ; i++)
    {
       sum += arr[i];
    }

    res = sum ;
    for(int i = k ; i < n ; i++)
    {
        sum = sum + arr[i] - arr[i-k];
        res = max(res , sum);
    }
    return res ;
}
int main()
{
    int n = 9;
    int arr[n] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    cout<<WindowSliding(arr , n , k);
    return 0 ;
}