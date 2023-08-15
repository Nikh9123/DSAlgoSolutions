/*
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>nums)
{
  int n = nums.size(), ind = -1, ele = -1;

  //find the break point 
  for (int i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      ind = i;
      ele = nums[i];
      break;
    }

  }

  if (ind == -1)
  {

    reverse(nums.begin(), nums.end());
    return;
  }

  //find the slightly greater than number 
  for (int i = n - 1; i > ind; i--)
  {
    if (nums[i] > nums[ind])
    {
      swap(nums[i], nums[ind]);
      break;
    }
  }

  //sort the bacha hua array
  reverse(nums.begin() + ind + 1, nums.end());

  for (int i = 0; i < nums.size();i++)
  {
    cout << nums[i] << " ";
  }


}

int main() {
  vector<int> arr = { 3,1,2 };
  //ans = 2 3 0 0 1 4 5
  nextPermutation(arr);

}