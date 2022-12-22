// Given an array arr[] of n positive integers. 
// The task is to find the maximum for every adjacent pairs in the array.




// // n = 6
// // arr[] = {1,2,2,3,4,5}
// // Output: 2 2 3 4 5
// // Explanation: Maximum of arr[0] and arr[1]
// // is 2, that of arr[1] and arr[2] is 2, ...
// // and so on. For last two elements, maximum 
// // is 5.
#include<bits/stdc++.h>
using namespace std ;
void SubsetMAx(int arr[] , int n)
{
    vector<int>ans ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(arr[i] >= arr[i+1])
        {
            ans.push_back(arr[i]);
        }
        else 
        {
            ans.push_back(arr[i+1]);

        }
    }
    for(int i =0 ; i < ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
int n = 6 ;
int arr[n] = {1,2,2,3,4,5};
SubsetMAx(arr,n);
}

