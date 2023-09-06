/*
@https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/equilibrium-point-1587115620

nput:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation:
equilibrium point is at position 3
as elements before it (1+3) =
elements after it (2+2).


Example 2:

Input:
n = 1
A[] = {1}
Output: 1
Explanation:
Since its the only element hence
its the only equilibrium point.
*/

using namespace std;
#include <bits/stdc++.h>
int equilibriumPoint(long long arr[], int n)
{

    // Your code here
    //   int i = 0 , j = n-1 ;
    //   int sum1 = arr[0] , sum2 = arr[n-1];

    //   while(i != j)
    //   {

    //       if(sum1 > sum2)
    //       {
    //           j-- ;
    //           sum2 += arr[j];
    //       }
    //       else{
    //           i++ ;
    //           sum1 += arr[i];
    //       }
    //   }
    //   if(sum1 == sum2){
    //       return i+1;
    //   }
    //   return -1 ;

    int start = 0, high = n - 1;
    int sum1 = arr[0], sum2 = arr[n - 1];

    while (start != high)
    {
        if (sum1 > sum2)
        {
            high--;
            sum2 += arr[high];
        }
        else
        {
            start++;
            sum1 += arr[start];
        }
        cout<<"start ="<<start<<" "<<"high = "<<high<<endl;
        cout<<"sum1= "<<sum1<<" "<<"sum2 = "<<sum2<<endl;
    }
    if (sum1 == sum2)
        return start + 1;

    return -1;
}

int main()
{
    int n = 5;

long long A[n] = {1,3,5,2,2};
cout<<equilibriumPoint(A , n);
}