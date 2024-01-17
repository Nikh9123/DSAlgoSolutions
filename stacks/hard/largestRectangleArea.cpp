/*
& Question Link :- https://leetcode.com/problems/largest-rectangle-in-histogram/description
& Solution Link :- https://takeuforward.org/data-structure/area-of-largest-rectangle-in-histogram/

84. Largest Rectangle in Histogram
Hard
Topics
Companies
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.



Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> getNextSmallerLeft(vector<int> arr, int n) {
    stack<int> st;
    vector<int> NSL(n);

    for (int i = 0; i < n; i++) {
      while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();
      }

      if (st.empty()) {
        NSL[i] = -1;
      } else {
        NSL[i] = st.top();
      }
      st.push(i);
    }
    return NSL;
  }

  vector<int> getNextSmallerRight(vector<int> arr, int n) {
    stack<int> st;
    vector<int> NSR(n);

    for (int i = n - 1; i >= 0; i--) {
      while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();
      }

      if (st.empty()) {
        NSR[i] = n;
      } else {
        NSR[i] = st.top();
      }
      st.push(i);
    }
    return NSR;
  }

  int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();

    // Find NSL and NSR arrays
    vector<int> NSL = getNextSmallerLeft(heights, n);
    vector<int> NSR = getNextSmallerRight(heights, n);

    int maxArea = 0;

    for (int i = 0; i < n; i++) {
      int width = NSR[i] - NSL[i] - 1;
      int area = width * heights[i];
      maxArea = max(maxArea, area);
    }

    return maxArea;
  }
};

int main() {
  vector<int> heights = {2, 1, 5, 6, 2, 3};
  Solution s;
  int ans = s.largestRectangleArea(heights);

  cout << "Largest Rectangle Area is: " << ans << endl;

  return 0;
}
