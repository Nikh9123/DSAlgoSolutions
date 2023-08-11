#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>>matrix, int n)
{
  //naive method 
  int m = matrix[0].size();
  vector<vector<int>>arr(m, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[j][i] = matrix[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrix[i][j] = arr[i][j];
    }
  }
}

int main() {
  int rows = 3;
  int cols = 4;

  // // Create a matrix (2D vector) with rows and cols
  // vector<vector<int>> matrix(rows, vector<int>(cols));

  // // Initialize the matrix with values
  // for (int i = 0; i < rows; ++i) {
  //     for (int j = 0; j < cols; ++j) {
  //         matrix[i][j] = i * cols + j;
  //     }
  // }

  vector<vector<int> > matrix{ { 1, 2, 3,27 },
                                 { 4, 5, 6,36 },
                                 { 7, 8, 9 ,81} };

  cout << matrix.size() << endl;;

  // Print the matrix
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  transpose(matrix, 3);
  cout << "after" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
