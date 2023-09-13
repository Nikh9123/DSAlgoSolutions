#include<bits/stdc++.h>
using namespace std;

int possibleBoutique(vector<int>nums) {
  int cnt = 0, find = 0;
  for (int j = 0; j < nums.size(); j++)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[j] >= nums[i])
      {
        cnt++;
        cout << " cnt = " << cnt << endl;
      }
      else
      {
        cnt = 0;
      }
      if (cnt == 3 || cnt == 6)
      {
        find++;
        cout<<"find = "<<find<<endl;
        if (find == 2)
        {
          return nums[j] ;
        }
      }
    
    }
  }
  return -1;
}


int main()
{
  // vector<int>arr = {1,10,3,10,2} ;
  vector<int>arr = { 7,7,7,7,13,11,12,7 };
  int m = 2; //it is the number of bouquets
  int k = 3; //it is the number of flowers in a bouquet
  if(m*k > arr.size())
  {
    return -1 ;
  }
  int ans = possibleBoutique(arr);
  cout << "minimum possible day to bloom m*k consequtive flowers : " << ans << endl;
}