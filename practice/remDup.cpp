#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Reverse a portion of an array between the given low and high indices (inclusive).
 *
 * This function takes an integer array and reverses the elements within the specified range [low, high].
 * The function swaps the elements at the low index with the element at the high index and proceeds
 * inwards towards the center of the range until low >= high. The function modifies the original array.
 *
 * @param arr An integer array.
 * @param low The starting index of the range to be reversed.
 * @param high The ending index of the range to be reversed.
 */
int removeDuplicates(vector<int>& nums) {
  int n = nums.size();

  int res = 0;

  for (int i = 1; i < n; i++)
  {
    if (nums[res] != nums[i])
    {
      res++;
      nums[res] = nums[i];
      cout<<"nums[res] = "<<nums[res]<<" and "<<"nums[i] = "<<nums[i]<<" "<<endl;
      cout<<"res = "<<res<<endl;
    }
  }
  return res;
}

  int main()
  {
vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
int ans = removeDuplicates(nums);
for(int i = 0 ; i < nums.size() ;i++)
{
  cout<<nums[i]<<" ";
}
cout<<ans ;
  }