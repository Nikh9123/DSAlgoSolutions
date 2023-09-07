#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool search(vector<int>& arr, int k) {
    int n = arr.size(); // size of the array.
    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = (low + high) / 2;

      //if mid points the target
      if (arr[mid] == k) return true;

      //Edge case:
      if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
        while (arr[low] == arr[mid] && low < mid) low++;
        while (arr[high] == arr[mid] && mid > mid) high--;
      }

      //if left part is sorted:
      if (arr[low] <= arr[mid]) {
        if (arr[low] <= k && k <= arr[mid]) {
          //element exists:
          high = mid - 1;
        }
        else {
          //element does not exist:
          low = mid + 1;
        }
      }
      else { //if right part is sorted:
        if (arr[mid] <= k && k <= arr[high]) {
          //element exists:
          low = mid + 1;
        }
        else {
          //element does not exist:
          high = mid - 1;
        }
      }
    }
    return false;
  }
};

int main()
{
  // vector<int>arr = { 2,5,6,0,0,1,2};
  vector<int>arr = { 1,0,1,1,1 };
  Solution s;
  bool ans = s.search(arr, 0);
  cout << (ans ? "element found" : "element not found") << endl;
}