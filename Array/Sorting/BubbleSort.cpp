#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++) //* round = n-1
  {
    for (int j = 0; j < n - 1 - i; j++)//* last element will be sorted so n-1-i
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}
int main()
{
  int arr[4] = {12, 3, 55, 21};
  BubbleSort(arr, 4);
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << " ";
  }
}