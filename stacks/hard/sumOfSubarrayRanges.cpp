/*
& question link -> https://leetcode.com/problems/sum-of-subarray-ranges/description/
& solution link -> https://www.youtube.com/watch?v=HyzeCKUkRS0
2104. Sum of Subarray Ranges
Medium
Topics
Companies
Hint
You are given an integer array nums. The range of a subarray of nums is the difference between the largest and smallest element in the subarray.

Return the sum of all subarray ranges of nums.

A subarray is a contiguous non-empty sequence of elements within an array.



Example 1:

Input: nums = [1,2,3]
Output: 4
Explanation: The 6 subarrays of nums are the following:
[1], range = largest - smallest = 1 - 1 = 0
[2], range = 2 - 2 = 0
[3], range = 3 - 3 = 0
[1,2], range = 2 - 1 = 1
[2,3], range = 3 - 2 = 1
[1,2,3], range = 3 - 1 = 2
So the sum of all ranges is 0 + 0 + 0 + 1 + 1 + 2 = 4.
Example 2:

Input: nums = [1,3,3]
Output: 4
Explanation: The 6 subarrays of nums are the following:
[1], range = largest - smallest = 1 - 1 = 0
[3], range = 3 - 3 = 0
[3], range = 3 - 3 = 0
[1,3], range = 3 - 1 = 2
[3,3], range = 3 - 3 = 0
[1,3,3], range = 3 - 1 = 2
So the sum of all ranges is 0 + 0 + 0 + 2 + 0 + 2 = 4.
Example 3:

Input: nums = [4,-2,-3,4,1]
Output: 59
Explanation: The sum of all subarray ranges of nums is 59.
*/

#include<bits/stdc++.h>
using namespace std;

//gaand phati me v krna hoga
class Solution {
public:
  vector<int>getNSL(vector<int>nums, int n) {
    stack<int>st ;
    vector<int>NSL(n) ;
    for(int i = 0 ; i < n ; i++){
      while(!st.empty() && nums[st.top()] > nums[i]){
        st.pop();
      }
      if(!st.empty() && nums[st.top()] <= nums[i]){
        NSL[i] = st.top() ;
        st.push(i) ;
      }
      else{
        st.push(i) ;
        NSL[i] = -1 ;
      }
    }
    
    cout<<"NSL = " ;
    for(auto x : NSL){
      cout<<x<<" " ;
    }
    cout<<endl;

    return NSL ;
  }
  vector<int>getNSR(vector<int>nums, int n) {
    stack<int>st ;
    vector<int>NSR(n) ;
    for(int i = n-1 ; i >= 0 ; i--){
      while(!st.empty() && nums[st.top()] >= nums[i]){
        st.pop();
      }
      if(!st.empty() && nums[st.top()] <= nums[i]){
        NSR[i] = st.top() ;
        st.push(i) ;
      }
      else{
        st.push(i) ;
        NSR[i] = n ;
      }
    }
    
    cout<<"NSR = " ;
    for(auto x : NSR){
      cout<<x<<" " ;
    }
    cout<<endl;

    return NSR ;
  }
  vector<int>getNBL(vector<int>nums, int n) {
    stack<int>st ;
    vector<int>NBL(n) ;
    
    for(int i = 0 ; i < n ; i++){
      while(!st.empty() && nums[st.top()] < nums[i]){
        st.pop();
      }
      if(!st.empty() && nums[st.top()] >= nums[i]){
        NBL[i] = st.top() ;
        st.push(i) ;
      }
      else{
        st.push(i) ;
        NBL[i] = -1 ;
      }
    }
    cout<<"NBL = " ;
    for(auto x : NBL){
      cout<<x<<" " ;
    }
    cout<<endl;
    return NBL ;

  }
  vector<int>getNBR(vector<int>nums, int n) {
    stack<int>st ;
    vector<int>NBR(n) ;

    for(int i = n-1 ; i >= 0 ; i--){
      while(!st.empty() && nums[st.top()] <= nums[i]){
        st.pop();
      }
      if(!st.empty() && nums[st.top()] >= nums[i]){
        NBR[i] = st.top() ;
        st.push(i) ;
      }
      else{
        st.push(i) ;
        NBR[i] = n ;
      }
    }
    return NBR ;
  }
  long long subArrayRanges(vector<int>& nums) {
    int n = nums.size() ;
    vector<int>NSL = getNSL(nums, n); //find out left me kahan tak mera arr[i] minimum hai
    vector<int>NSR = getNSR(nums, n); //find out right me kahan tak mera a[i] maximum hai
    vector<int>NBL = getNBL(nums, n); //find out left me kahan tak mera arr[i] maximum hai
    vector<int>NBR = getNBR(nums, n); //find out right me kahan tak mera arr[i] maximum hai

    int subarrayMin = 0, subarrayMax = 0 ;
    for(int i = 0 ; i < n ; i++){

      subarrayMin += (nums[i] * ((i-NSL[i])*(NSR[i]-i))) ;
      cout<<"subarrayMin = "<<subarrayMin<<endl;
      subarrayMax += (nums[i] * ((i-NBL[i])*(NBR[i]-i))) ;
      cout<<"subarrayMax = "<<subarrayMax<<endl;

    }
    
    return subarrayMax-subarrayMin ; 

  }
};


int main() {
  vector<int>nums = { 1,2,3 };
  Solution s;
  long long ans = s.subArrayRanges(nums);

  cout << "ans = " << ans << endl;
  return 0 ;
}