#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int>nums)
{
  //* Approach 1 ) Brute force -------- use any sorting algortihtm 

  /*
  //* Approach 2 ) Better Approach ------ Keep count of 0s , 1s and 2s and replace in array

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
  */

  //* Approach 3 ) Naive solution ------------- solution using Dutch National flag 
  int n = nums.size();
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high)
  {
    if (nums[mid] == 0)
    {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    }
    else if (nums[mid] == 1)
    {
      mid++;
    }
    else if (nums[mid] == 2)
    {
      swap(nums[mid], nums[high]);
      high--;
    }
  }


  for (auto it : nums)
  {
    cout << it << " ";
  }
}
int main() {
  vector<int> arr = { 1,2,0,0,0,1,1,2,1,1,0 };
  sort012(arr);

}