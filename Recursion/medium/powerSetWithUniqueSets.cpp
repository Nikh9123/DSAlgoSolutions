#include<bits/stdc++.h>
using namespace std;

/**
 * Given an integer array nums that may contain duplicates, return all possible
subsets(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

void generateAllSubsetUnique(vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds, int index) {

  //first the empty list will be pushed into the ans
  ans.push_back(ds);

  for (int i = index; i < arr.size(); i++) {
    if (i > index && arr[i] == arr[i - 1]) continue;
    ds.push_back(arr[i]);
    generateAllSubsetUnique(arr, ans, ds, i + 1);
    ds.pop_back();
  }

}

int main()
{
  vector<int> arr = { 1, 2, 2, 2, 3, 3 };
  int n = arr.size();
  vector<vector<int>>ans;
  vector<int>ds;
  sort(arr.begin(), arr.end());
  generateAllSubsetUnique(arr, ans, ds, 0);

  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }

  return 0;
}