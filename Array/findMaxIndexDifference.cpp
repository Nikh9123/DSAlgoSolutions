#include<bits/stdc++.h>
using namespace std ;
int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
       int diff = 0 , maxDiff = 0;
       for(int i =0 ; i < n ; i++)
       {
           
           for(int j = n-1 ; j > i ; j--)
           {
               if(arr[j] >= arr[i])
               {
                   diff = j - i ;
                   break ;
               }
               
           }
           maxDiff = max(maxDiff , diff);
       }
      return maxDiff ; 
    }
int main()
{
    int n = 9 ;
    int arr[n] = {34, 8 ,10 ,3,2,80,30,33,1};
    cout<<maxIndexDiff(arr , n);
}