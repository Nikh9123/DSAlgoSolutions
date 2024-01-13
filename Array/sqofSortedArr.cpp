#include<bits/stdc++.h>
using namespace std;

vector<int>getSortedSqArr(vector<int>arr) {
  int left = 0, right = arr.size() - 1;
  vector<int>ans(arr.size(), 0);
  while (left <= right) {
    int leftSq = arr[left] * arr[left];
    int rightSq = arr[right] * arr[right];

    if (leftSq < rightSq) {
      //insert from the last index of ans array
      ans[right - left] = rightSq;
      right--;
    }
    else {
      ans[right - left] = leftSq;
      left++;
    }
  }
  return ans;
}

int main() {

  vector<int>arr = { -6, -3, 0, 2, 4, 5 };

  vector<int>ans = getSortedSqArr(arr);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}