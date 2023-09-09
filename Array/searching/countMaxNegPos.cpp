#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maximumCount(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int cntNeg = 0;
    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (nums[mid] >= nums[low]) //go to left half and count negative element ;
      {
        while (true) {
          if (nums[cntNeg] == 0 && cntNeg < high)
          {
            break;
          }
          else
          {
            cntNeg++;
          }
        }
        low = cntNeg + 1 ;
        
      }
      else{
        low = mid + 1 ;
        while (true) {
          if (nums[cntNeg] == 0 && cntNeg < high)
          {
            break;
          }
          else
          {
            cntNeg++;
          }
        }
      }
    }
    return cntNeg ;
  }
};

int main()
{
  vector<int>arr = { -8,-7,-4 - 3,-2,-1,0,1,2,3,4,5 };
  Solution s;
  int ans = s.maximumCount(arr) ;
  cout<<" count of negative element "<<ans<<endl;
}