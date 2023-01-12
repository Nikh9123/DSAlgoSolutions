#include<bits/stdc++.h>
using namespace std ;
int normalSubarraySum(int arr[] , int n)
{
    int maxEnd = arr[0] , res = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
       maxEnd = max(maxEnd = arr[i] , arr[i]);
       res = max(res , maxEnd);
    }
    return res ;
}
int CircularSubrraySum(int arr[] , int n)
{
    int NormalSubarraySum = normalSubarraySum(arr , n);
    if(NormalSubarraySum < 0)
    {
        return NormalSubarraySum ;
    }
    
    int arrSum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        arrSum +=arr[i] ;
        arr[i] = -arr[i];

    }
    int CircularSubarraySum = arrSum + normalSubarraySum(arr , n) ;
    return max(CircularSubarraySum , NormalSubarraySum) ;
}
int main()
{
    int n = 4 ;
    int arr[n] = {5,-2,3,4};
    cout<<CircularSubrraySum(arr , n);
    return 0 ;
}