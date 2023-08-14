// @https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& nums, int k) {
  // Write your code here
  int n = nums.size();

  //brute force
  int len = 0;
  /*
  for (int i = 0; i < n; i++)
  {
    int sum = nums[i];
    for (int j = i + 1; j < n; j++)
    {
      sum += nums[j];
      if (sum == k)
      {
        len = max(len, j - i + 1);
      }
    }
  }
  */
  // return len;

/*
Better Solution---------

   this solution will only work for positive integers array

   Create a map to store the cumulative sum encountered along with its index.
    This map helps in tracking the index where a particular sum was first encountered.
    map<long long, int> cumulativeSumIndex;

    // Initialize the cumulative sum and the maximum subarray length to 0.
    long long currentSum = 0;
    int maxSubarrayLength = 0;

    // Iterate through the elements of the input array.
    for (int i = 0; i < nums.size(); i++) {
        // Add the current element to the cumulative sum.
        currentSum += nums[i];

        // If the cumulative sum equals the target sum 'k', update the max length .
        if (currentSum == k) {
            maxSubarrayLength = max(maxSubarrayLength, i + 1);
        }

        // Calculate the remaining value needed to reach the target sum 'k'.
        long long remainingValue = currentSum - k;

        // If the remaining value exists in the cumulative sum map,
        // update the max length based on the difference between the current index and the saved index.
        if (cumulativeSumIndex.find(remainingValue) != cumulativeSumIndex.end()) {
            int subarrayLength = i - cumulativeSumIndex[remainingValue];
            maxSubarrayLength = max(maxSubarrayLength, subarrayLength);
        }

        // If the cumulative sum is not already in the map, store it along with the current index.
        if (cumulativeSumIndex.find(currentSum) == cumulativeSumIndex.end()) {
            cumulativeSumIndex[currentSum] = i;
        }
    }

    // Return the maximum length of a subarray with the given sum 'k'.
    return maxSubarrayLength;
    */

  long long maxLen = 0, sum = nums[0];
  long long left = 0, right = 0;
  int n = nums.size();

  while (right < n)
  {
    while (left <= right && sum > k)
    {
      sum -= nums[left];
      left++;
    }
    if (sum == k)
    {
      maxLen = max(maxLen, right - left + 1);
    }
    right++;
    if (right < n)
    {
      sum += nums[right];
    }
  }
  return maxLen;
}
int main() {
  int k = 6;
  vector<int> arr = { 1,2,3,1,1,1,1,4,2,3 };
  cout << getLongestSubarray(arr, k);
}