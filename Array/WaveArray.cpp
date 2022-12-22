/*
Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

If there are multiple solutions, find the lexicographically smallest one.

Example 2:

Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after
sorting it in wave form are
4 2 8 7 10 9.


Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after
sorting it in wave form are
2 1 4 3 5.
*/

#include <bits/stdc++.h>
using namespace std;
void WaveArray(int arr[] , int n)
{
    if(n %2 == 0){
    for(int i =0 ; i < n ; i+=2)
    {
       swap(arr[i], arr[i+1]);
    }
    }
    else 
    {
        for(int i =0 ; i < n-1 ; i+=2)
    {
       swap(arr[i], arr[i+1]);
    }
    }
    for(int i=0 ; i < n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n = 5 ;
    int arr[n] = {2, 4, 7, 8, 9};
    WaveArray(arr  , n);
}