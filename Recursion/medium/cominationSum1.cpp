#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>getSumCombination(vector<int>& arr, vector<int>temp, int target, int index, vector<vector<int>>& ans)
{
  if (index == arr.size()) {
    if (target == 0)
    {
      ans.push_back(temp);
    }
    return ans;
  }

  if (arr[index] <= target)
  {
    //pick the element 
    temp.push_back(arr[index]);
    getSumCombination(arr, temp, target - arr[index], index, ans);
    //pop last element 
    temp.pop_back();
  }

  getSumCombination(arr, temp, target, index + 1, ans);

  return ans;
}

int main()
{
  vector<int>arr = { 10,1,2,7,6,1,5 };
  vector<vector<int>>solution;
  vector<int>temp;

  int target = 8;
  vector<vector<int>>ans = getSumCombination(arr, temp, target, 0, solution);
  cout << "The subsequences are : " << endl;
  for (auto x : ans)
  {
    for (auto y : x)
    {
      cout << y << " ";
    }
    cout << endl;
  }
}