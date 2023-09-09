#include<bits/stdc++.h>
using namespace std;

//@https://leetcode.com/problems/single-element-in-a-sorted-array/

//find single element in sorted array where there is only on single element.
int singleElement(vector<int>nums)
{
  //brute solution
  // if (ans.size() ==  0)
  // {
  //   return ans[0];
  // } 
  // for (int i = 0; i < ans.size(); i++)
  // {
  //   if (ans[i] == ans[i + 1])
  //   {
  //     i++;
  //   }
  //   else {
  //     return ans[i];
  //   }
  // }
  // return -1;

  //using odd - even 
  int low = 0, high = nums.size() - 1;
  if (nums[high] != nums[high - 1])
  {
    return nums[high];
  }
  if (nums[low] != nums[low + 1])
  {
    return nums[low];
  }
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    cout << "low = " << low << " right = " << high << " mid = " << mid << endl;
    if ((mid == 0 || nums[mid] != nums[mid + 1]) && (nums[mid] != nums[mid - 1] || mid == nums.size() - 1))
    {
      return nums[mid];
    }
    else if ((mid % 2 == 0 || nums[mid] == nums[mid - 1]) && (mid % 2 == 1 || nums[mid] == nums[mid + 1])) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;

}
int main()
{
  vector<int>arr = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7 };
  int ans = singleElement(arr);
  cout << "ans is : " << ans << endl;
}