#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n + 1; i++)
  {
    cout<<"i = "<<i<<" , "<<"nums[i] = "<<nums[i]<<endl;
    if (i != nums[i])
    {
      return i;
    }
  }
  return -1;
}
int main() {
  vector<int> arr = { 9,6,4,2,3,5,7,0,1 };
  cout<<missingNumber(arr) ;

}