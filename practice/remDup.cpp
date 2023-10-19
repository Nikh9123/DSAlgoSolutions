#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  int n = nums.size();

  int res = 0;

  for (int i = 1; i < n; i++)
  {
    if (nums[res] != nums[i])
    {
      res++;
      nums[res] = nums[i];
      cout << "nums[res] = " << nums[res] << " and " << "nums[i] = " << nums[i] << " " << endl;
      cout << "res = " << res << endl;
    }
  }
  return res;
}
int findMaxConsecutiveOnes(vector<int>& nums) {
   
}

int main()
{
  // vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
  vector<int>nums = { 1,1,0,1,1,1 };

  int ans = findMaxConsecutiveOnes(nums);
  // for(int i = 0 ; i < nums.size() ;i++)
  // {
  //   cout<<nums[i]<<" ";
  // }
  cout << ans;
}