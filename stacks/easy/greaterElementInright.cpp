#include<bits/stdc++.h>
using namespace std;
/**
 * @https://www.codingninjas.com/studio/problems/count-of-greater-elements-to-the-right_8365436
 *
 Sample Input 1:
8 3
1 3 6 5 8 9 13 4
0 1 5
Sample Output 1:
7 6 1
Explanation Of Sample Input 1:
For test case one:
Input:
arr = [1, 3, 6, 5, 8, 9, 13, 4], N=8, Q=3, query = [0, 1, 5]
Output:
7 6 1
 *
*/

vector<int> countGreater(vector<int>& arr, vector<int>& query) {
  // Write your code here.
  map<int, int>mp;
  int cnt = 0;
  for (int i = 0; i < arr.size(); i++) {
    cnt = 0;
    int ele = arr[i];
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] > ele) {
        cnt++;
        cout << "cnt = " << cnt << endl;
      }
    }
    mp[i] = cnt;
  }

  vector<int>ans(query.size());

  for (int i = 0; i < query.size(); i++) {
    ans[i] = mp[query[i]];
  }
  return ans;
}

int main() {
  // vector<int>arr = { 1, 3, 6, 5, 8, 9, 13, 4 };
  // vector<int>query = { 0, 1, 5 };
  vector<int>arr = { 1, 2,3,4 };
  vector<int>query = { 0, 1, 2,3 };



  vector<int>ans = countGreater(arr, query);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}