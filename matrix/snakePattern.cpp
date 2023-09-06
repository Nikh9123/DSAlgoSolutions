#include<bits/stdc++.h>
using namespace std;

// void printSnake(int matrix[4][4])
// {

// cout<<"Printing matrix in snake pattern :"<<endl;
//   int row2 = 3;
//   for (int i = 0; i < 4; i++)
//   {
//     row2 = 3 ; 
//     for (int j = 0; j < 4; j++) 
//     {
//       if(i % 2 == 0)
//       {
//          cout<<matrix[i][j]<<" ";
//       }
//       else{
//       cout<<matrix[i][row2--]<<" ";
//       }
//     }
//   }

// }

vector<int> snakePattern(vector<vector<int> > matrix)
{
  // code here
  int row = matrix.size() ;
  cout<<"Printing matrix in snake pattern :"<<endl;
  int row2 = row;
  for (int i = 0; i < row; i++)
  {
    row2 = 3 ; 
    for (int j = 0; j < row; j++) 
    {
      if(i % 2 == 0)
      {
         cout<<matrix[i][j]<<" ";
      }
      else{
      cout<<matrix[i][row2--]<<" ";
      }
    }
  }

}

int main()
{
  // int matrix[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };


  // printSnake(matrix);

  vector<vector<int>>matrix = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} } ;
  for (int i = 0; i < 4; i++)
  {
    cout << "[ ";
    for (int j = 0; j < 4; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << " ]" << endl;
  }
  snakePattern(matrix);
}