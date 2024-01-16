#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int getMin(vector<int> arr) {
    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
      mini = min(arr[i], mini);
    }
    return mini;
  }
  int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int>subarray;
    map<int, int>mp;
    int res = 0;

    for (int i = 0; i < n; i++) {
      cout << "i = " << i << endl;
      for (int j = i; j < n; j++) {
        cout << "arr[j] = " << arr[j] << endl;

        subarray.push_back(arr[j]);
        int mini = getMin(subarray);

        res += getMin(subarray);
        cout << "res = " << res << endl;

      }
      subarray.clear();
    }
    return res;
  }
};

int main() {
  vector<int>nums = { 11,81,94,43,3 };
  Solution s;

  int ans = s.sumSubarrayMins(nums);

  cout << "ans is : " << ans << endl;

  return  0;

}