using namespace std;
#include <bits/stdc++.h>
int ConsecutiveOnes(int *arr , int n)
{
  int count = 0 , maxCount = 0 ;
  for(int i=0 ; i < n ; i++)
  {
    if(arr[i] == 1)
    {
        count++ ;
    }else {
        count = 0 ;
    }
    maxCount = max(maxCount , count);
  }
  return maxCount ;
}
int main()
{
    int n = 10 ;
    int arr[n] ={1,0,1,1,1,0,1,1,0,0} ;
    cout<<ConsecutiveOnes(arr , n);
    
}
