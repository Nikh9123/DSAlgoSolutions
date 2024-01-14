#include<bits/stdc++.h>
using namespace std;
//1. store the previous max diagonal
//2. check if the current diagonal is greater than the previous diagonal
//3. if yes, then find the area of the rectangle
//4. store the current diagonal as the previous diagonal
//5. store the area of the rectangle as the max area
//6. return the max area

class Solution {
public:
  int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int maxArea = 0;
    int prevDiagonal = 0;
    for (int i = 0; i < dimensions.size(); i++) {
      int diagonal = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
      if (diagonal > prevDiagonal) {
        int area = dimensions[i][0] * dimensions[i][1];
        maxArea = max(maxArea, area);
        prevDiagonal = diagonal;
      }
    }
    return maxArea;
  }
};


int main() {
  Solution s;
  vector<vector<int>> dimensions = {
        {4,7},{8,9},{5,3},{6,10},{2,9},{3,10},{2,2},{5,8},{5,10},{5,6},
        {8,9},{10,7},{8,9},{3,7},{2,6},{5,1},{7,4},{1,10},{1,7},{6,9},
        {3,3},{4,6},{8,2},{10,6},{7,9},{9,2},{1,2},{3,8},{10,2},{4,1},{9,7},
        {10,3},{6,9},{9,8},{7,7},{5,7},{5,4},{6,5},{1,8},{2,3},{7,10},{3,9},{5,7},
        {2,4},{5,6},{9,5},{8,8},{8,10},{6,8},{5,1},{10,8},{7,4},{2,1},{2,7},{10,3},
        {2,5},{7,6},{10,5},{10,9},{5,7},{10,6},{4,3},{10,4},{1,5},{8,9},{3,1},{2,5},
        {9,10},{6,6},{5,10},{10,2},{6,10},{1,1},{8,6},{1,7},{6,3},{9,3},{1,4},{1,1},
        {10,4},{7,9},{4,5},{2,8},{7,9},{7,3},{4,9},{2,8},{4,6},{9,1},{8,4},{2,4},{7,8},
        {3,5},{7,6},{8,6},{4,7},{25,60},{39,52},{16,63},{33,56}
  };

  
  cout << s.areaOfMaxDiagonal(dimensions) << endl;

  return 0;
}

/**
 * You are given a 2D 0-indexed integer array dimensions, where dimensions{i] = [lenghti, widthi] represents the dimensions of the ith rectangle. You are also given an integer area.
*/