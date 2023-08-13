#include <bits/stdc++.h>
using namespace std;

int longestEvenOdd(vector<int>arr)
{
  int n = arr.size();
  int count = 1, res = 1;
  //Brute force 
  /*
  for (int i = 0; i < n; i++)
  {
    count = 1;
    for (int j = i + 1; i < n; j++)
    {
      if ((arr[j] % 2 == 0 && arr[j - 1] % 2 == 1) || (arr[j] % 2 == 1 && arr[j - 1] % 2 == 0))
      {
        count++;
        cout << "count = " << count << endl;
      }
      else {
        break;
      }
    }
    res = max(res, count);
    cout << "res = " << res << endl;
  }
  */

  for (int i = 1; i < n; i++)
  {
    if ((arr[i] % 2 == 0 && arr[i - 1] % 2 == 1) || (arr[i] % 2 == 1 && arr[i - 1] % 2 == 0))
    {
      count++;
      res = max(res, count);
      cout << "count = " << count << " res = " << res << " i = " << i << endl;
    }
    else {
      count = 1;
    }
  }

  return res;
}

int main() {
  vector<int> arr = { 1,3,5,7,9,8,3,2,5,6,11 };
  cout << longestEvenOdd(arr);
}