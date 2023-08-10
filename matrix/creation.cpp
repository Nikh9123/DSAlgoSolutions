#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int m = 3 ; //row 
  int n = 3 ;//column

  //delaration of matrix 3*3 
  int arr[m][n] ;

  //taking input 
  for(int i= 0 ; i < m ; i++)
  {
    for(int j =0 ;j < n ; j++)
    {
      cin>>arr[i][j] ;
    }
  }

  //printing 
  for(int i= 0; i < m ; i++)
  {
    cout<<"[ ";
    for(int j =0 ; j < n ; j++)
    {
      cout<<arr[i][j]<<" " ;
    }
    cout<<" ]" <<endl;
  }
  
}