/*
@https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/-rearrange-array-alternately-1587115620

Example 1:
Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
n = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.
*/

using namespace std;
#include <bits/stdc++.h>
void rearrange(long long *arr, int n)
{
  vector<long long> temp;
  int low = 0, high = n - 1;
  while (low <= high)
  {
    temp.push_back(arr[high--]);
    temp.push_back(arr[low++]);
  }

  for (int i = 0; i < temp.size(); i++)
  {
    arr[i] = temp[i];
  }
}

int main()
{
  int n = 5 ;
  long long arr[n] ={1,2,3,4,5};
  rearrange(arr , n);
  for(int i =0 ; i < n ; i++)
  {
    cout<<arr[i]<<" ";
  } 
}