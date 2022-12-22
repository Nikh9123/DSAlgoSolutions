using namespace std ;
#include<bits/stdc++.h>
int Func(int arr[] , int n)
{
    unsigned int adj = 0;
    unsigned int  mini = INT_MAX ;

for(int i=0 ; i < n-1 ; i++)
{
  adj = (arr[i] - arr[i+1] );
  mini = min(mini , adj);
}
adj = (arr[n-1] - arr[0]);
mini = min(mini , adj);

return mini ;
}
int main()
{
int n = 21 ;
int arr[n] = {61 ,90 ,51 ,40, 1, 27, 85, 56, 7, 31, 20, 55, 91, 28, 87, 71, 25, 88 ,61, 0, 60};
cout<<Func(arr , n);
}