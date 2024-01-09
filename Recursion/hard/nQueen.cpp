/**
 * The n-queens puzzle is the problem of placing n queens on an n x n chessboard
 * such that no two queens attack each other.Given an integer n,
 * return all distinct solutions to the n-queens puzzle. You may return the answer in any order.
 * Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and
 *  '.' both indicate a queen and an empty space, respectively.
 *
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
  //function to check whether the queen can be placed at that position or not
  // bool isSafe(int row, int col, vector<string>board, int n) {

  //   //checking for upper diagonals
  //   while (row >= 0 && col >= 0) {
  //     if (board[row][col] == 'Q') {
  //       return false;
  //     }
  //     row--;
  //     col--;
  //   }

  //   //checking for backside where the row is constant
  //   while (col >= 0) {
  //     if (board[row][col] == 'Q') {
  //       return false;
  //     }
  //     col--;
  //   }

  //   //checking for lower diagonals where the row is increasing but column is decreasing
  //   while (row < n && col >= 0) {
  //     if (board[row][col] == 'Q') {
  //       return false;
  //     }
  //     row++;
  //     col--;
  //   }
  //   return true;
  // }

  //function to solve the n queens problem using backtracking
  // void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
  //   if (n == col) {
  //     ans.push_back(board);
  //     return;
  //   }

  //   //try for placing the queens in every row 
  //   for (int row = 0; row < n; row++) {
  //     if (isSafe(row, col, board, n)) {
  //       board[row][col] = 'Q';
  //       solve(col + 1, board, ans, n);

  //       //omit the queen while backtracking
  //       board[row][col] = '.';
  //     }
  //   }


  // }

  void solve(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& leftRow, vector<int>& lowerDiagonal, vector<int>& upperDiagonal, int n) {
    if (col == n) {
      ans.push_back(board);
      return;
    }

    //try for placing the queens in every row 
    for (int row = 0; row < n; row++) {
      if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
        board[row][col] = 'Q';
        leftRow[row] = 1;
        lowerDiagonal[row + col] = 1;
        upperDiagonal[n - 1 + col - row] = 1;
        solve(col + 1, board, ans, leftRow, lowerDiagonal, upperDiagonal, n);

        //omit the queen while backtracking
        board[row][col] = '.';
        leftRow[row] = 0;
        lowerDiagonal[row + col] = 0;
        upperDiagonal[n - 1 + col - row] = 0;
      }
    }

  }
  vector<vector<string>> solveNQueens(int n) {

    //declare a vector of vector of strings which is the answer store all the possible chess board which has the answer
    vector<vector<string>>ans;

    //making a board of string type and size is n have n rows and n columns
    vector<string>board(n);

    //filling the board with dots. the dots represent that the chess board is empty
    string s(n, '.');

    //filling the board with dots
    for (int i = 0; i < n; i++) {
      board[i] = s;
    }
    vector<int>leftRow(n, 0), lowerDiagonal(2 * n - 1, 0), upperDiagonal(2 * n - 1, 0);

    //calling the function to solve the n queens problem
    // solve(0, board, ans, n);

    //
    solve(0, board, ans, leftRow, lowerDiagonal, upperDiagonal, n);
    return ans ;
  }
};


int main() {
  int n = 5;
  Solution s;
  vector<vector<string>>ans = s.solveNQueens(n);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << endl;
    }
    cout << endl;
  }
}