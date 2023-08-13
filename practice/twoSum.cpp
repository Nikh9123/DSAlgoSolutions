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
 sort(nums.begin(), nums.end());
 int left = 0, right = nums.size()-1 ;
 int sum = 0 ;
 while(left < right)
 {
sum = nums[left] + nums[right] ;
if(sum < target)
{
  left++ ;
}
else if(sum > target)
{
  right-- ;
}
else {
  return "yes" ;
}
 }
 return "No";
}

int main() {
  int target = 6;
  vector<int>arr = {3,2,4 };
  cout << read(arr, target);

}