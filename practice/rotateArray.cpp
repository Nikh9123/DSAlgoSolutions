/*
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/
#include<bits/stdc++.h>
using namespace std;
  void rotateLeftRIght(vector<int>nums, int start, int end)
  {
    while (start <= end)
    {
      swap(nums[start], nums[end]);
      start++;
      end--;
    }
  }
  void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    rotateLeftRIght(nums, 0, k);
    rotateLeftRIght(nums, k + 1, n - 1);
    rotateLeftRIght(nums, 0, n - 1);
  }

int main()
{
  vector<int>arr = { 1,2,3,4,5,6,7 };
  int k = 3;
  
  rotate(arr, k);
  for (auto x : arr)
  {
    cout << x << " ";
  }
  cout << endl;
}