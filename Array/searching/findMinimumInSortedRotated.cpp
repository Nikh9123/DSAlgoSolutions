#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
  int n = nums.size();
  int low = 0, high = n - 1;
  int mini = INT_MAX ;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    cout << "low = " << low << " " << "high = " << high << endl;
    cout << " mid = " << mid << endl;
    if (nums[mid] >= nums[low] && nums[mid] >= nums[high])
    {
      low = mid + 1;
      mini = min(nums[low], mini);
    }
    else
    {
      high = mid - 1;
      mini = min(nums[high], mini);
    }
  }
  return mini;
}

int main()
{
  //vector<int>arr = {3,4,5,1,2};
  // vector<int>arr = { 4,5,6,7,0,1,2 };
  vector<int>arr = { 2,3,1 };
 
  int ans = findMin(arr) ;
  
  cout << "minimum is : " << ans<<endl;
}