#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m = 4; //row 
  int n = 3;//column

  //delaration of matrix 3*3 
  // int arr[m][n] ;
/*
  //* taking input --> row wise
  for(int i= 0 ; i < m ; i++)
  {
    for(int j =0 ;j < n ; j++)
    {
      cin>>arr[i][j] ;
    }
  }

  //* taking input --> column wise
  for(int i =0 ; i < n ; i++)
  {
    for(int j =0 ; j < m ; j++)
    {
      cin>>arr[j][i] ;
    }
  }
  */
  //* hard coded input
  //  int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12} ;

  //* hard coded input 
  int arr[3][4] = { {1,2,3,4},{2,4,6,8},{3,6,9,12} };

  //printing 2d array 
  for (int i = 0; i < n; i++)
  {
    cout << "[ ";
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << " ]" << endl;
  }

}