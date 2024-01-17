#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>getMultiplyMatrix(vector<vector<int>>a, vector<vector<int>>b) {
  int n = a.size(), m = b.size();

  vector<vector<int>>ans(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "a[i][j] = " << "a[" << i << "][" << j << "]" << " = ";
      cout << a[i][j] << endl;
      //multiply ith row of a with jth column of b
      int sum = 0;
      for (int k = 0; k < m; k++) {
        sum += (a[i][k] * b[k][j]);
      }
      cout << "sum = " << sum << endl;
      // ans[i][j] = sum;
    }
  }
  return ans;
}

int main() {
  vector<vector<int>>a = { {1,2}, {3,4} };
  vector<vector<int>>b = { {5,6}, {7,8} };

  vector<vector<int>> ans = getMultiplyMatrix(a, b);
  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }

  return 0;
}