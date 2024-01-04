#include<bits/stdc++.h>
using namespace std;

/*
You are given an array 'nums' of ‘n’ integers.



Return all subset sums of 'nums' in a non-decreasing order.



Note:
Here subset sum means sum of all elements of a subset of 'nums'.
 A subset of 'nums' is an array formed by removing some (possibly zero or all)
 elements of 'nums'.
*/

void generateAllSubsetSum(vector<int>& arr, int index, int sum, vector<int>& ans)
{
  if (index == arr.size())
  {
    ans.push_back(sum);
    return;
  }

  // Include the element 
  generateAllSubsetSum(arr, index + 1, sum + arr[index], ans);

  // Exclude the element 
  generateAllSubsetSum(arr, index + 1, sum, ans);

}

int main()
{
  vector<int>arr = { 18,7,10,16 };
  vector<int>ans;
  generateAllSubsetSum(arr, 0, 0, ans);
  sort(ans.begin(), ans.end());
  for (auto x : ans)
  {
    cout << x << " ";
  }
  return 0;
}