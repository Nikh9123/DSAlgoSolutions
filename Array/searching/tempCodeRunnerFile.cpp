#include<bits/stdc++.h>
using namespace std;

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

int eatingTime(vector<int>nums, int h, int cnt) {
  int ans = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    float sum = static_cast<float>(nums[i]) / cnt;
    ans += ceil(sum);

    if (ans <= h)
    {
      return ans;
    }
  }
  return -1;
}
int minimmumHours(vector<int>nums, int h)
{
  int low = 1;
  int high = findMax(nums);
  cout << "low = " << low << " high = " << high << endl;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int time = eatingTime(nums, h, mid);

    if (time > h)
    {
      low = mid + 1;
    }
    else if (time < h) {
      high = mid - 1;
    }
    else {
      return mid;
    }
  }
  return -1;
}

int main() {
  // Declare variables
  vector<int>arr = { 30,11,23,4,20 };
  int ans = minimmumHours(arr, 6);
  cout << "koko has to eat miniumum " << ans << " 🍌 per hour" << endl;

  return 0;
}
