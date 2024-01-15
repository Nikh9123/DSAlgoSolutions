#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
  //Time Complexity: O(n) + O(n*n) 
  //^ approach 1 
  vector<int> nextGreaterElement1(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    map<int, int>mp;

    for (int i = 0; i < nums1.size(); i++) {
      //intialize all the elements of nums1 with -1
      mp[nums1[i]] = -1;
    }

    for (int i = 0; i < nums2.size(); i++) {

      //if the element present in nums1 then find its next greater
      if (mp.find(nums2[i]) != mp.end()) {
        for (int j = i + 1; j < nums2.size(); j++) {
          if (nums2[j] > nums2[i]) {
            mp[nums2[i]] = nums2[j];
            break;
          }
        }
      }

    }
    vector<int>ans;
    for (int i = 0; i < nums1.size(); i++) {
      ans.push_back(mp[nums1[i]]);
    }

    return ans;
  }

  //^ approach 2 efficient approach
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    map<int, int>mp;
    int n = nums2.size();

    for (int i = 0; i < nums1.size(); i++) {
      //intialize all the elements of nums1 with -1
      mp[nums1[i]] = -1;
    }


    for (int i = n - 1; i >= 0; i--) {
      if (mp.find(nums2[i]) != mp.end()) {

        if (st.empty()) {
          st.push(nums2[i]);
          mp[nums2[i]] = -1;
        }
        else if (st.top() >= nums2[i]) {
          mp[nums2[i]] = st.top();
          st.push(nums2[i]);
        }
        else {
          st.push(nums2[i]);
          mp[nums2[i]] = -1;
        }
      }
      else {
        st.push(nums2[i]);
      }
    }

    for (int i = 0; i < nums1.size();i++) {
      nums1[i] = mp[nums1[i]];
    }
    return nums1;
  }


};


int main() {
  vector<int>arr1 = { 4,1,2 };
  vector<int>arr2 = { 1,2,3,4 };
  Solution s;
  vector<int>ans = s.nextGreaterElement(arr1, arr2);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}