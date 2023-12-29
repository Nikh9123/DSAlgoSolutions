#include <iostream>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
  // Write your code here.
  int low = 0, high = n - 1;
  int floor = -1, ceil = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    cout << "mid : " << mid << endl;
    if (arr[mid] == x)
    {
      floor = arr[mid], ceil = arr[mid];
      return { floor, ceil };
    }
    else if (arr[mid] > x)
    {
      ceil = arr[mid];
      high = mid - 1;
    }
    else {
      floor = arr[mid];
      low = mid + 1;
    }
  }
  return { floor, ceil };
}


int main() {
  // int arr[] = { 11,23,24,26,26,26,28,67 };
  // int arr[] = { 1,2,3,4,8,10,10,12,19 };
  // int arr[] = { 1,2,3,4,8,10,12,19 };
  int arr[] = { 3, 4, 4 ,7, 8, 10 };
  // int arr[] = { 5, 8, 19, 24, 24, 28, 28 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 2;

  pair<int, int> result = getFloorAndCeil(arr, n, x);

  cout << "Floor: " << result.first << ", Ceiling: " << result.second << endl;

  return 0;
}