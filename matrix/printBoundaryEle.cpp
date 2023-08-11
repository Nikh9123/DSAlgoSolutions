#include<bits/stdc++.h>
using namespace std;

void printBoundary(int matrix[5][4])
{
  int row = 5, col = 4;
  if (row == 1)
  {
    for (int i = 0; i < col; i++)
    {
      cout << matrix[0][col];
    }
  }
  else if (col == 1)
  {
    for (int i = 0; i < row; i++)
    {
      cout << matrix[row][0];
    }
  }
  else {
    for (int i = 0;i < col; i++)
    {
      cout << matrix[0][i] << " ";
    }
    for (int i = 1; i < row; i++)
    {
      cout << matrix[i][col - 1] << " ";
    }
    for (int i = col - 2; i >= 0; i--)
    {
      cout << matrix[row - 1][i] << " ";
    }
    for (int i = row - 2; i >= 1;i--)
    {

      cout << matrix[i][col - col] << " ";
    }
  }
}


int main()
{
  int matrix[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} ,{17,18,19,20} };


  for (int i = 0; i < 5; i++)
  {
    cout << "[ ";
    for (int j = 0; j < 4; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << " ]" << endl;

    // vector<vector<int>>matrix = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} } ;
    // }
    // snakePattern(matrix);
  }
  printBoundary(matrix);
}