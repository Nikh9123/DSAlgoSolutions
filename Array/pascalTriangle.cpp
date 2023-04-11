/**
 * Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

*/

using namespace std;
#include <bits/stdc++.h>

vector<int> generateRows(int row)
{
  vector<int> ansRow;
  int ans = 1;
  ansRow.push_back(ans);
  for (int col = 1; col < row; col++)
  {
    ans = ans * (row - col);
    ans = ans / col;
    ansRow.push_back(ans);
  }
  return ansRow;
}
vector<vector<int>> generate(int N)
{
  vector<vector<int>> pascalTriangl;
  for (int i = 1; i <= N; i++)
  {
    pascalTriangl.push_back(generateRows(i));
  }
  return pascalTriangl;
}
int main()
{
  // int n = 6 , r = 3 ;
  int n = 6;
  vector<vector<int>> ans = generate(n);
  
}