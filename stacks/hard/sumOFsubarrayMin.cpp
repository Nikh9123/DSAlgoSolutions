#include<bits/stdc++.h>
using namespace std;

//& question Link - https://leetcode.com/problems/sum-of-subarray-minimums/description/
//& Soltion Link - https://www.youtube.com/watch?v=HRQB7-D2bi0
/**
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

Example 1:

Input: arr = [3,1,2,4]
Output: 17
Explanation:
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4].
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
Example 2:

Input: arr = [11,81,94,43,3]
Output: 444


*/
class Solution {
public:
  int getMin(vector<int> arr) {
    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
      mini = min(arr[i], mini);
    }
    return mini;
  }

  //* this approach time complexit is O(n^3)
  int sumSubarrayMinsApproach1(vector<int>& arr) {
    int n = arr.size();
    vector<int>subarray;
    map<int, int>mp;
    int res = 0;

    //* traverse array from left to right and generate all subarrays and find minimum element in each subarray and add it to result
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

  vector<int> getNextSmallerLeft(vector<int> arr, int n) {
    vector<int>NSL(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
      while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();
      }
      if (!st.empty() && arr[st.top()] <= arr[i])
      {
        NSL[i] = st.top();
      }
      else {
        NSL[i] = -1;
      }
      st.push(i);
    }

    for (auto x : NSL) {
      cout << x << " ";
    }
    cout << endl;

    return NSL;
  }

  vector<int> getNextSmallerRight(vector<int> arr, int n) {
    vector<int>NSR(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
      while (!st.empty() && arr[i] < arr[st.top()]) {
        st.pop();
      }

      if (!st.empty() && arr[st.top()] <= arr[i]) {
        NSR[i] = st.top();
      }
      else {
        NSR[i] = n;
      }
      st.push(i);
    }
    for (auto x : NSR) {
      cout << x << " ";
    }
    cout << endl;
    return NSR;
  }

  int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int>NSL = getNextSmallerLeft(arr, n); //generate the next smaller left array 
    vector<int>NSR = getNextSmallerRight(arr, n);//generate the next smaller right array 

    long long sum = 0;
    int M = 1e9 + 7; // question has given the sum is very large so tae the modulo from this number
    for (int i = 0; i < n; i++) {
      long long ls = i - NSL[i]; //left me kitne element ke badd mera smaller element aayega
      long long rs = NSR[i] - i; //right side me kitne element ke baad smaller element aayyeg

      long long totalSubarrays = ls * rs; // total itne subarrays honge jiska minimum arr[i] hoga

      long long totalMinimum = totalSubarrays * arr[i]; // jitna subarray hoga usme * arr[i] to add aa jayega 

      sum = (sum + totalMinimum) % M;
    }
    return sum;

  }
};

int main() {
  vector<int>nums = { 71,55,82,55 };
  Solution s;

  int ans = s.sumSubarrayMins(nums);

  cout << "ans is : " << ans << endl;

  return  0;

}