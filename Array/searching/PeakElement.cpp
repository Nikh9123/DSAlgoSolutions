/*
* __EXAMPLE__
? @brief https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Searching/problem/peak-element
? @brief https://leetcode.com/problems/find-peak-element/
*i/p : arr[] = {5,10,20,15,7}
*o/p : 20 (because 20 is greater than its neighbours)

*i/p : arr[] = {10,20,15,5,23,90}
*o/p : 20 or 90(because 20 and 90 is greater than its neighbours)

*/

using namespace std;
#include <bits/stdc++.h>
int Peak(int arr[], int n)
{

  //* Naive Solution T.C. = O(n)
  for (int i = 0; i < n; i++)
  {
    if (i == 0 && (arr[i] > arr[i + 1]))
    {
      cout << arr[i] << " ";
    }
    else if (i == n - 1 && arr[n - 1] > arr[n - 2])
    {
      cout << arr[n - 1] << " ";
    }
    else
    {
      if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
      {
        cout << arr[i] << " ";
      }
    }
  }
  cout << endl;
}

//* EFFICIENT SOLUTION  T.C. => Log(n)
//* using binary search
        //todo :check if arr[mid] is greater than it's neighbour elements then {return} else
        //todo :check do we have elements on left side if yes then compare with its(arr[mid]'s) left element
        //todo :if arr[mid] is less than the peak element will be on left side
        //todo :else it will be on right side 
int peakElement(int arr[], int n)
    {
       // Your code here
       int low = 0 , high = n-1 ;
       while(low <= high)
       {
           int mid = low + (high - low)/2;
           if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >= arr[mid+1]))
                return mid ;
           else if(mid > 0 && (arr[mid] <= arr[mid-1]))
                high = mid-1;
           else
                low = mid + 1 ;
       }
  
    }
int main()
{
  int n = 3;
  int arr[n] = {80, 70, 90};
  
  //*naive solution
  // Peak(arr, n);

  //* EFFICIENT SOLUTION
  cout<<peakElement(arr ,n);


}