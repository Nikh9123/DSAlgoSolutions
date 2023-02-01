using namespace std;
#include <bits/stdc++.h>
class Solution
{
public:
    int GetIndex(int arr[], int n, int k ,int low ,int high);
};

//naive method O(n)
// int Solution ::GetIndex(int arr[], int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k)
//         {
//             return i;
//         }
//     }
//     return -1 ;
// }

//efficient method O(log n)
//using BinarySearch 
int Solution ::GetIndex(int arr[], int n, int k , int low , int high){
    //  int low = 0 , high = n-1 ;
     int mid = low + (high - low)/2;
     
     if(low > high)
     {
        return -1 ;
     }
    if(arr[mid] == k)
    {
         while (arr[mid] == arr[mid-1])
         {
            mid--;
         }
         return mid;
  
    }
    else if(arr[mid] > k)
    {
        GetIndex(arr , n ,  k, low , mid-1);
    }
    else{
        GetIndex(arr,n,k,mid+1,high);
    }

}
int main()
{
    int n = 7;
    int arr[n] = {5, 10, 10,15, 20, 20, 20};
    int k = 20;
    Solution ob;
    int ans = ob.GetIndex(arr, n, k ,0 , n-1);
    cout << ans;
}