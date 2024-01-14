
//problem on generate all unique permutation
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  void generateAllPermutationsUnique(vector<int>& nums, set<vector<int>>& s, int index) {
    if (index == nums.size()) {
      cout << "index = " << index << endl;
      //store the nums in set
      s.insert(nums);
      cout << endl;
      cout << "hello" << endl;
      return;
    }

    for (int i = index; i < nums.size(); i++) {
      cout << "for swapping" << endl;
      cout << "i = " << i << " : nums[i] = " << nums[i] << " and " << " index = " << index << " : nums[index] = " << nums[index] << endl;
      swap(nums[i], nums[index]);
      generateAllPermutationsUnique(nums, s, index + 1);
      swap(nums[i], nums[index]);
    }
  }
  vector<vector<int>> permuteUnique(vector<int>& nums) {
    set<vector<int>>s;
    generateAllPermutationsUnique(nums, s, 0);

    vector<vector<int>>ans;

    for (auto it : s) {
      vector<int>temp;
      for (auto it2 : it) {
        temp.push_back(it2);
      }
      ans.push_back(temp);
    }
    return ans;
  }
};


int main() {
  vector<int>arr = { 1,2,3 };
  Solution s;
  vector<vector<int>>ans = s.permuteUnique(arr);

  for (auto it : ans) {
    for (auto it2 : it) {
      cout << it2 << " ";
    }
    cout << endl;
  }
  return 0;
}
