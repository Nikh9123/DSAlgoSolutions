#include<bits/stdc++.h>
using namespace std;

void get_Reversed_Array(vector<int>& arr, int low, int high)
{
  if (low > high) return;
  get_Reversed_Array(arr, low + 1, high - 1);
  swap(arr[low], arr[high]);
  return;
}

int main()
{
  vector<int> arr = { 1,2,3,4,5,6,7,8,9,10 };

  cout << "the original array is : " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  get_Reversed_Array(arr, 0, arr.size() - 1);
  cout << "the reversed array is : " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  /*
  int temp[n];
  cout << "the reversed array is : " << endl;
  for (int i = 0; i < n; i++)
  {
    temp[n - i - 1] = arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << temp[i] << " ";
  }

  int low = 0, high = n - 1;
  while (low <= high)
  {
    swap(arr[low], arr[high]);
    low++, high--;
  }
  cout<<"the reversed array is : "<<endl;
  for(int i = 0 ; i < n ; i++)
  {
    cout<<arr[i]<<" ";
  }
  */
  return 0;
}