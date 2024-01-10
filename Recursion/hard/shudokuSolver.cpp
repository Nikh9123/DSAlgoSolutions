/**
 * Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The '.' character indicates empty cells.
*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
  void solveSudoku(vector<vector<char>>& board) {
    solve(board);

  }
  bool solve(vector<vector<char>>& board) {
    
    //1. traverse and check where the box is empty 
    for (int i = 0; i < board.size(); i++) {

      for (int j = 0; j < board[0].size(); j++) {

        if (board[i][j] == '.') {
          //2. check for all the numbers from 1 to 9 if they can be placed in the box
          for (char c = '1'; c <= '9'; c++) {

            if (isValid(board, i, j, c)) {

              board[i][j] = c;
              //3. if the number can be placed, place it and call the function again
              if (solve(board))
                return true;

              else
                board[i][j] = '.';

            }
          }
          return false;
        }
      }
    }
    //4. if the box is not empty every box is filled, return true
    return true;
  }

  bool isValid(vector<vector<char>>& board, int row, int col, char c) {
    for (int i = 0; i < 9; i++) {

      //check for the row and column
      if (board[i][col] == c) return false;
      if (board[row][i] == c) return false;

      //check for the 3*3 box
      if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;

    }
    return true;
  }
};
void printBoard(const vector<vector<char>>& board) {
  for (const auto& row : board) {
    for (const auto& cell : row) {
      cout << cell << ' ';
    }
    cout << '\n';
  }
}

int main() {
  vector<vector<char>> board = {
      {'5','3','.','.','7','.','.','.','.'},
      {'6','.','.','1','9','5','.','.','.'},
      {'.','9','8','.','.','.','.','6','.'},
      {'8','.','.','.','6','.','.','.','3'},
      {'4','.','.','8','.','3','.','.','1'},
      {'7','.','.','.','2','.','.','.','6'},
      {'.','6','.','.','.','.','2','8','.'},
      {'.','.','.','4','1','9','.','.','5'},
      {'.','.','.','.','8','.','.','7','9'}
  };

  Solution s;
  printBoard(board);  // print the solved board

  s.solveSudoku(board);
  printBoard(board);  // print the solved board
  return 0;
}