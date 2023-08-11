/*
@https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/889445824/
*/

#include<bits/stdc++.h>
using namespace std ;
int remDup(int arr[] , int n)
{
    //^ 1) naive approach  
    // int neW[n] ;
    // neW[0] = arr[0];
    // int count=1 ;
    // for(int i= 1 ; i < n; i++)
    // {
    //     if(neW[count-1] != arr[i])
    //     {
    //         neW[count] = arr[i];
    //         count++ ;
    //     }
        
    // }
    // return count  ;

    //^ 2) naive approach 
    // std::set<int> ans; // Creating an empty set to store distinct elements

    // for (int i = 0; i < nums.size(); i++) {
    //     ans.insert(nums[i]); // Inserting elements into the set
    // }

    // return ans.size(); // Returning the number of distinct elements


    int res = 1 ;
    for(int i=1 ; i < n; i++)
    {
        if(arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++ ;
        }
    }
    for(int i=0 ; i<n ; i++)
    cout<<arr[i]<<" ";


}
int main()
{
    int n =6;
    int arr[n] = {10,20,20,30,30,30};
    cout<<remDup(arr , n);

}