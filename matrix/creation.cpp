#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m = 40; //row 
  int n = 30;//column

  //matix creation using double pointer 
  int** arr;
  arr = new int* [n];

  for (int i = 0; i < m; i++)
  {
    arr[i] = new int[m];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      arr[i][j] = j+1;
    }
  }
  //* hard coded input 
  vector<vector<int>>arr1 = { {1,2,3,4},{2,4,6,8},{3,6,9,12} };
  cout<<arr1.size()<<endl;
  //printing 2d array 
  cout<<"printing matrix of "<<m<<"*"<<n<<endl;
  for (int i = 0; i < n; i++)
  {
    cout << "[ ";
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "]" << endl;
  }

}