#include<bits/stdc++.h>
using namespace std;

//brute force Time Complexity : O(2^n *n*logn)
// vector<vector<int>> getBAllUniqueCombinations(vector<int>& arr, int target, int index, set<set<int>>& ans, vector<int>& ds)
// {
//   if (index == arr.size()) {
//     if (target == 0) {
//       set<int> combination(ds.begin(), ds.end());
//       ans.insert(combination);
//     }
//     // Return an empty vector since the return type is vector<vector<int>>
//     return {};
//   }

//   if (target >= arr[index]) {
//     ds.push_back(arr[index]);
//     getAllUniqueCombinations(arr, target - arr[index], index + 1, ans, ds);
//     ds.pop_back();
//   }
//   getAllUniqueCombinations(arr, target, index + 1, ans, ds);

//   // Convert set of sets to vector of vectors
//   vector<vector<int>> sol;
//   sol.insert(sol.end(), ans.begin(), ans.end());
//   return sol;
// }

void getAllUniqueCombinations(vector<int>& arr, int target, int index, vector<vector<int>>& ans, vector<int>& ds)
{
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = index; i < arr.size(); i++)
  {
    if (arr[i] <= target)
    {
      if (i > index && arr[i] == arr[i - 1]) continue;
      ds.push_back(arr[i]);
      getAllUniqueCombinations(arr, target - arr[i], i + 1, ans, ds);
      ds.pop_back();
    }
  }
}


int main()
{
  vector<int> arr = { 10, 1, 2, 7, 6, 1, 5 };
  int target = 8;
  vector<int> ds;
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  getAllUniqueCombinations(arr, target, 0, ans, ds);


  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }

  return 0;
}
