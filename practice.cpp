#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int firstOccurence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;

    while (low <= high)
    {
      int mid = (low + high) / 2;

      if (nums[mid] == target)
      {
        ans = high;
        high = mid - 1;
      }
      else if (nums[mid] < target)
      {
        low = mid + 1;
      }
      else {
        high = mid - 1;
      }
    }
    return ans;
  }
  int lastOccurence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;
    while (low <= high)
    {
      int mid = (low + high) / 2;

      if (nums[mid] == target)
      {
        ans = mid;
        low = mid + 1;
      }
      else if (nums[mid] > target)
      {
        high = mid - 1;
      }
      else {
        low = mid + 1;
      }
    }
    return ans;
  }
  vector<int> searchRange(vector<int>& nums, int target) {
    int firstOccur = firstOccurence(nums, target);
    int lastOccur = lastOccurence(nums, target);
    return { firstOccur, lastOccur };
  }
};

int main() {
  Solution s;
  vector<int> nums = { 5, 7, 7, 8, 8, 10 };
  int target = 6;
  vector<int> ans = s.searchRange(nums, target);
  for (auto i : ans)
    cout << i << " ";

  cout << endl;
  return 0;
}
