/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/

#include <bits/stdc++.h>
using namespace std;

string read(vector<int>nums, int target)
{
  /*
  ----> naive solution <-------
  map<int, int>ans;
  for (int i = 0; i < nums.size(); i++)
  {
    int a = nums[i];
    int more = target - a;

    if (ans.find(more) != ans.end())
    {
      return "yes";
    }
    ans[a] = i;
  }
  return "No";
  */

 // -----> optimal solution 
//  sort(nums.begin(), nums.end());
//  int left = 0, right = nums.size()-1 ;
//  int sum = 0 ;
//  while(left < right)
//  {
// sum = nums[left] + nums[right] ;
// if(sum < target)
// {
//   left++ ;
// }
// else if(sum > target)
// {
//   right-- ;
// }
// else {
//   return "yes" ;
// }
//  }
//  return "No";

//using reverse mathematics
// map<int, int>ans;
//   for (int i = 0; i < nums.size(); i++)
//   {
//     int a = nums[i];
//     int more = target - a;

//     if (ans.find(more) != ans.end())
//     {
//       return {ans[more],i};
//     }
//     ans[a] = i;
//   }
//   return {};
}

int main() {
  int target = 6;
  vector<int>arr = {3,2,4 };
  cout << read(arr, target);

}