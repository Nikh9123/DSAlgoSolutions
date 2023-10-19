#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  pair<int, int> maxArrEle(vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      maxi = max(maxi, nums[i]);
      sum += nums[i];
    }
    return { maxi, sum };
  }

  int daysRequired(vector<int>& nums, int mid) {
    int capacity = 0, day = 0;
    for (int i = 0; i < nums.size(); i++) {
      capacity += nums[i];
      if (capacity > mid) {
        day++;
        capacity = nums[i];
      }
    }
    return day + 1;
  }

  int shipWithinDays(vector<int>& nums, int days) {
    pair<int, int> minMax = maxArrEle(nums);
    int high = minMax.second; // Use the sum as the upper bound
    int low = minMax.first;   // Use the maximum element as the lower bound

    int ans = 0;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      // cout<<"mid = "<<mid<<endl;
      int daysTaken = daysRequired(nums, mid);
      // cout<<"daysTaken = "<<daysTaken<<endl;
      if (daysTaken > days) {
        low = mid + 1;
      }
      else {
        ans = mid; // Update the answer when the daysTaken is less than or equal to days
        high = mid - 1;
      }
    }
    return ans;
  }
};

int main()
{
  vector<int>arr = { 1,2,3,4,5,6,7,8,9,10 };
  Solution s;
  int days = 5;
  int minDays = s.shipWithinDays(arr, days);
  cout << "maximum days required to ship all the products in " << days << " days is : " << minDays << endl;
}