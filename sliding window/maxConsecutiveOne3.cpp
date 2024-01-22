#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
  int longestOnes(vector<int>& nums, int k) {
    int i = 0, j = 0, countZero = 0, ans = INT_MIN;
    int n = nums.size();
    while (j < n) {

      //
      if (nums[j] == 0) {
        countZero++;
      }

      while (countZero > k) {
        if (nums[i] == 0) {
          countZero--;
        }
        i++;
      }

      ans = max(ans, j - i + 1);
      j++;
    }
    return ans;
  }
};

int main() {
  vector<int> nums = { 1,1,1,0,0,0,1,1,1,1,0 };
  int k = 2;
  Solution s;
  cout << s.longestOnes(nums, k) << endl;
}