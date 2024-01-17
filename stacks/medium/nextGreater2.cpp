#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size() * 2;  // Double the size to consider circular array
    int k = nums.size();      // Original size of the array
    stack<int> st;            // Stack to track indices for which the next greater element is not found yet
    vector<int> ans(k);       // Vector to store the results

    // Iterate in reverse order to simulate a circular array
    for (int i = n - 1; i >= 0; i--) {
      // Pop elements from the stack as long as they are less than the current element
      while (!st.empty() && (nums[i % k] >= nums[st.top()])) {
        st.pop();
      }

      // If we are within the original array size, update the result vector
      if (i < k) {
        // If stack is not empty, the next greater element is on top of the stack
        if (!st.empty()) {
          ans[i] = nums[st.top()];
        }
        else {
          ans[i] = -1;  // No greater element found
        }

        // Push the current element's index onto the stack
        st.push(i % k);
      }
      else {
        // For indices beyond the original array size, push the current index onto the stack
        st.push(i % k);
      }
    }

    return ans;
  }
};

int main() {
  vector<int> nums = { 1, 2, 3, 4, 3 };
  Solution s;
  vector<int> ans = s.nextGreaterElements(nums);

  // Print the results
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}
