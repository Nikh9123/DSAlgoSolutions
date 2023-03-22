/*
* @https://leetcode.com/problems/intersection-of-two-arrays/description/
*/
/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
*/


using namespace std ;
#include<bits/stdc++.h>

//? Naive approach o(m*n) 
void interSection(int arr1[] , int arr2[],int n , int m)
{
  for(int i = 0 ; i < n ;i++)
  {
    if(i > 0 && arr1[i-1] == arr1[i])
    continue; //for going out of upper for loop if we find the sa,e index

    for(int j = 0 ; j < m ; j++)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" " ;
            break ; //when we fouund the element after that immediatly break the loop for not getting duplicate elements
        }
    }
  }
}

void InterSection(int arr1[] , int arr2[], int n , int m){
vector<int>ans ;
int i= 0, j= 0;
while(i < n && j < m)
{
 if(i > 0 && arr1[i-1] == arr1[i])
 {
    i++ ;
    continue;
 }else {
    if(arr1[i] < arr2[j])
    {
        i++ ;
    }
    else if(arr1[i] == arr2[j])
    {
        ans.push_back(arr1[i]);
        i++ ;
        j++;
    }
    else{
        j++ ;
    }
 }

}
for(int i=0; i < ans.size() ; i++)
cout<<ans[i]<<" ";
}
int main()
{
    int n = 3 ;
    int m = 5 ;
    int arr[n] = {4,5,9};
    int arr2[m] = {4,4,8,9,9};
    InterSection(arr , arr2 , n , m);
}