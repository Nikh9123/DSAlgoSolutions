//@https://leetcode.com/problems/transpose-matrix/description/

#include<bits/stdc++.h>
using namespace std;

// Transpose a matrix
vector<vector<int>> transpose(vector<vector<int>>& matrix) {

  int rows = matrix.size();
  int cols = matrix[0].size();

  vector<vector<int>> ans(cols, vector<int>(rows)); // Transposed matrix

  // Fill the transposed matrix 'ans'
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      ans[i][j] = matrix[j][i];
    }
  }

  cout << "col = " << ans[0].size() << " " << "row = " << ans.size() << endl;

  // Print the transposed matrix
  for (int i = 0; i < ans.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << " ]" << endl;
  }
  return ans;
}

int main() {
  vector<vector<int>> matrix = { {1,2,3,19},{4,5,6,11},{7,8,9,12} };

  vector<vector<int>> ans = transpose(matrix);
  return 0;
}
