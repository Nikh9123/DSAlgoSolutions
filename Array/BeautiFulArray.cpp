/*
Given an array of negative and non-negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative.
And you can do the following operation any number of times until the array becomes beautiful.
If two adjacent integers are different i.e. one of them is negative and other is non-negative, remove them.
Return the beautiful array after performing the above operation.
Note:An empty array is also a beautiful array. There can be many adjacent integers which are different as stated above. So remove different adjacent integers as described above from left to right.

Example 1:

Input: 4 2 -2 1
Output: 4 1
Explanation: As at indices 1 and 2 , 2 and -2 have
different sign, they are removed. And the  the final
array is: 4 1.
Example 2:

Input: 2 -2 1 -1
Output: []
Explanation: As at indices 0 and 1, 2 and -2 have
different sign, so they are removed. Now the array
is 1 -1.Now 1 and -1 are also removed as they have
different sign. So the final array is empty.
*/

/**
 *
 *
 *
 **Here we are simply taking a vector to store our answer.
 **If the vector is empty we simply push the current element
 **otherwise we check the last element of our resultant vector with given array current element.
**If current element sign and the last element of resultant array sign are opposite then
** we simply pop the last element form our array or otherwise we just push current element into our resultant array.




*/
using namespace std;
#include <bits/stdc++.h>
vector<int> makeBeautiful(vector<int> arr)
{
  // code here
  vector<int> res;
  for (int i = 0; i < arr.size(); i++)
  {
    if (res.size() == 0)
      res.push_back(arr[i]);
    else
    {
      if ((res.back() > 0 && arr[i] < 0) or (res.back() < 0 && arr[i] > 0) or
          (arr[i] == 0 and res.back() < 0) or (res.back() == 0 and arr[i] < 0))
        res.pop_back();
      else
        res.push_back(arr[i]);
    }
  }
  return res;
}
int main()
{
  vector<int> arr = {4, 2, -2, 1};
  vector<int> ans = makeBeautiful(arr);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}