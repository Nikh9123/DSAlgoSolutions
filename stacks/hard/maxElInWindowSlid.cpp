#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  //approach 1 : brute force T.C = O(n*k) 
  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>ans;
    int n = nums.size();
    for (int i = 0; i < n - k + 1; i++) {
      int maxi = INT_MIN;
      for (int j = i; j < i + k; j++) {
        //go to every window and find the maximum element in that window
        maxi = max(maxi, nums[j]);
      }
      ans.push_back(maxi);
    }
    return ans;
  }
};

int main() {
  vector<int>nums = { 1,3,-1,-3,5,3,6,7 };
  int k = 3;
  Solution s;
  vector<int>ans = s.maxSlidingWindow(nums, k);
  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}