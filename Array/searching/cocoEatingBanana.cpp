#include<bits/stdc++.h>
using namespace std;

//finds the maimum element in given array
int findMax(vector<int>nums)
{
  int maxi = INT_MIN;
  for (int i = 0; i < nums.size(); i++)
  {

    if (nums[i] > maxi)
    {
      maxi = nums[i];
    }
  }
  return maxi;
}

//find the total eating time when input is given mid
double eatingTime(vector<int>nums,  int mid) {
  double ans = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    ans += ceil((double)nums[i]/(double)mid) ;
  }
  return ans;

}

//finds the minimum eating time it should take
int minEatingSpeed(vector<int>&nums, int h)
{
  
  int low = 1;
  int high = findMax(nums);

  while (low <= high) {
    int mid = low + (high - low) / 2;
    int time = eatingTime(nums,  mid);

    if (time > h)
    {
      low = mid + 1;
    }
    else if (time <= h) {
      high = mid - 1;
    }

  }
  return low;
}

int main() {
  // Declare variables
  vector<int>arr = { 30,11,23,4,20};
  int h = 5 ;
  // vector<int>arr = { 332484035,524908576,855865114,632922376,222257295,690155293,112677673,679580077,337406589,290818316,877337160,901728858,679284947,688210097,692137887,718203285,629455728,941802184 };
  // int h = 823855818;
  int ans = minEatingSpeed(arr, h);
  cout << "koko has to eat miniumum " << ans << " 🍌 per hour" << endl;

  return 0;
}
