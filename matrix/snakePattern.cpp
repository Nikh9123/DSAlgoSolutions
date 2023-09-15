#include<bits/stdc++.h>
using namespace std;

void snakePattern(vector<vector<int> > matrix)
{
  // code here
  int row = matrix.size();
  cout << "Printing matrix in snake pattern :" << endl;
  int col = matrix[0].size() - 1;


  cout << matrix[0][col] << " " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < matrix[i].size(); j++)
    {
      if (i % 2 == 0)
        cout << matrix[i][j] << " ";
      else
        cout << matrix[i][col - j] << " ";
    }
  }

}

int main()
{
  // int matrix[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };


  // printSnake(matrix);

  vector<vector<int>>matrix = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
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