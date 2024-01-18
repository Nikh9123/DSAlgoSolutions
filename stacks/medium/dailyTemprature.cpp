/*
739. Daily Temperatures
Medium
Topics
Companies
Hint
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.



Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
Example 2:

Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]
Example 3:

Input: temperatures = [30,60,90]
Output: [1,1,0]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n);  // To store the result (days until warmer temperature)
    stack<pair<int, int>> st;  // Stack to store pair of temperature and corresponding count

    for (int i = n - 1; i >= 0; i--) {
      int cnt = 0;  // Counter to track the number of days until a warmer temperature
      while (!st.empty() && st.top().first < temperatures[i]) {
        cnt += st.top().second;  // Accumulate counts for temperatures less than the current
        st.pop();
      }

      if (!st.empty() && st.top().first > temperatures[i]) {
        cnt++;  // Increment count for the warmer temperature
        ans[i] = cnt;  // Set the result for the current day
        st.push({temperatures[i], cnt});  // Push current temperature and count to the stack
      }
      else {
        st.push({temperatures[i], 0});  // Push current temperature and initial count to the stack
        ans[i] = 0;  // Set the result as 0 for the current day
      }
    }

    return ans;
  }
};

int main() {
  // Test the function with sample input
  vector<int> temperatures = {30, 40, 50, 60};
  Solution s;
  vector<int> ans = s.dailyTemperatures(temperatures);

  // Print the results
  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
