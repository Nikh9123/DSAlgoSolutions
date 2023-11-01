#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr, int low, int mid, int high) {
  vector<int> temp; // temporary array
  int left = low;      // starting index of left half of arr
  int right = mid + 1;   // starting index of right half of arr
  int cnt = 0 ;
  //storing elements in the temporary array in a sorted manner//

  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    }
    else {
      temp.push_back(arr[right]);
      cnt += mid-left+1 ;
      right++;
    }
  }

  // if elements on the left half are still left //

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  //  if elements on the right half are still left //
  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  // transfering all elements from temporary to arr //
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
  return cnt  ;
}

int mergeSort(vector<int>& arr, int low, int high) {
  int cnt = 0 ;
    if (low == high) 
    return 0 ;

  int mid = (low + high) / 2;
  cnt += mergeSort(arr, low, mid);  // left half
  cnt += mergeSort(arr, mid + 1, high); // right half
  cnt += merge(arr, low, mid, high);  // merging sorted halves
  return cnt ;
}

int main() {

  vector<int> arr = { 5,3,2,1,4 };
  int n = arr.size();

  cout << "Before Sorting Array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  int cnt = mergeSort(arr, 0, n - 1);
  cout << "After Sorting Array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Inversions count : " << cnt << endl;
  return 0;
}