#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getTargetSubsequence(vector<int>& arr, vector<int> temp, int index, int target, int sum, bool& flag)
{
  if (arr.size() == index)
  {
    if (sum == target)
    {
      flag = true;
      return { temp };
    }
    return {};
  }

  // Add the sum of the index element and add the element into temp ;
  temp.push_back(arr[index]);
  sum += arr[index];
  auto include = getTargetSubsequence(arr, temp, index + 1, target, sum, flag);

  // Pop the last element 
  if (!flag)
  {
    temp.pop_back();
    sum -= arr[index];
    auto exclude = getTargetSubsequence(arr, temp, index + 1, target, sum, flag);
    include.insert(include.end(), exclude.begin(), exclude.end());
  }

  return include;
}

int main()
{
  vector<int> arr = { 1, 2, 3, 1, 1 };
  vector<int> temp;
  int target = 3;
  bool flag = false;
  vector<vector<int>> ans = getTargetSubsequence(arr, temp, 0, target, 0, flag);

  cout << "The subsequences are : " << endl;
  for (auto x : ans)
  {
    for (auto y : x)
    {
      cout << y << " ";
    }
    cout << endl;
  }

  return 0;
}
