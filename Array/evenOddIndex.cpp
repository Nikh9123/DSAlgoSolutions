#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> sortEvenOdd(vector<int> nums) {
    int n = nums.size();
    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        even.push_back(nums[i]);
      }
      else {
        odd.push_back(nums[i]);
      }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    cout << "Even : "<<even.size() << endl;
    for (auto x : even) {
      cout << x << " ";
    }
    cout << endl;
    cout << "Odd : "<<odd.size() << endl;
    for (auto y : odd) {
      cout << y << " ";
    }
    cout << endl;

    vector<int> ans;
    int i = 0, j = 0;
    while (i < even.size() && j < odd.size()) {
      cout<<even[i]<<" "<<odd[j]<<endl;
      ans.push_back(even[i]);
      ans.push_back(odd[j]);
      if (i < even.size()) {
        i++;
        cout << "i : " << i << endl;
      }
      if (j < odd.size()) {
        j++;
        cout << "j : " << j << endl;
      }
    }
    while(i < even.size()){
      ans.push_back(even[i]);
      i++;
    }
    while(j < odd.size()){
      ans.push_back(odd[j]);
      j++;
    }
    return ans;
  }
};

int main() {
  vector<int> nums = { 5,39,33,5,12,27,20,45,14,25,32,33,30,30,9,14,44,15,21 };
  Solution s;
  vector<int> ans = s.sortEvenOdd(nums);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}