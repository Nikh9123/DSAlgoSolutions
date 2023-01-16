using namespace std;
#include <bits/stdc++.h>
int maxSumSubArray(int *arr, int n)
{
    //     //naive approach TC => O(n^2)
    // int sum = 0 , res = arr[0];
    // for(int i =  0 ; i< n ; i++) // loop for giving range of e;ements for adding in sum
    // {
    //     sum = 0; //after adding 1st round elements again sum will be 0
    //  for(int j = i ; j < n ; j++) //adding elements which is starting from ith index
    //  {
    //     sum += arr[j];
    //     res = max(res , sum) ;
    //  }
    // }
    // return res ;

    // efficient approach TC => O(n) -3,8,-2,4,-5,6
    int maxEnd = arr[0], res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxEnd = max(arr[i] + maxEnd, arr[i]);
        cout << "maxEnd = " << maxEnd << " ";
        res = max(maxEnd, res);
        cout << "res = " << res << " ";
    }
    return res;

    // kadane's algorithm can be used easily TC = O(n)

    /*Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array

  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far*/
    //     int sum = 0, maxSum = INT_MIN ;
    //   for(int i =0 ; i < n ; i++)
    //   {
    //     sum += arr[i] ;
    //     maxSum = max(maxSum , sum) ;
    //     if(sum < 0) {
    //         sum = 0 ;
    //     }

    //   }
    //   return maxSum ;
}
int main()
{
    int n = 6;
    // int arr[n] ={-5,1,-2,3,-1,2,-2} ;
    int arr[n] = {-3, 8, -2, 4, -5, 6};
    cout << maxSumSubArray(arr, n);
}
