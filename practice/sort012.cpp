#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int>nums)
{
  int countZero = 0, countOne = 0, countTwo = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
    {
      countZero++;
    }
    else if (nums[i] == 1)
    {
      countOne++;
    }
    else {
      countTwo++;
    }
  }
  for (int i = 0; i < countZero; i++)
  {
    nums[i] = 0;
  }  for (int i = countZero; i < countOne+countZero; i++)
  {
    nums[i] = 1;
  }  for (int i = countOne+countZero; i < countTwo+countOne+countZero; i++)
  {
    nums[i] = 2;
  }
  for (auto it : nums)
  {
    cout << it << " ";
  }
}
int main() {
  vector<int> arr = { 1,2,0,0,0,1,1,2,1,1,0 };
  sort012(arr);
  // for (auto it : arr)
  // {
  //   cout << it << " ";
  // }
}