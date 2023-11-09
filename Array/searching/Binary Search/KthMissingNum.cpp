#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  // int findKthPositive(vector<int>& arr, int k) {

  //   //1. brute force
  //   //steps : 1. find the missing number
  //   //2. if missing number is less than k then increment k, eg: 2,3,4,7,11, k=5, missing number = 5, k=6
  //   //3. else return k as missing number
  //   for (int i = 0; i < arr.size(); i++)
  //   {
  //     if (arr[i] <= k)
  //     {
  //       k++;
  //     }
  //     else {
  //       return k;
  //     }
  //   }
  //   return -1;
  // }
  int findKthPositive(vector<int>arr , int k)
  {
    int n = arr.size() ;
    int low = 0 , high = n-1 ;
    //Algo Steps :
    //1. find the missing number 
    //2. compare k to the missing number see what is the range of k
    //3 , find the number which is missing which is arr[high]+k-(arr[high]-(high+1))
    while(low <= high)
    {
      int mid = (low+high)/2 ;

      //find missing number
      int missingNum = arr[mid] - (mid+1);

      if(missingNum < k)
      {
        low = mid+1 ;
      }
      else{
        high = mid-1 ;
      }
    }

  return k+1+high ;
  }
};
int main()
{
  Solution s;
  vector<int>arr = { 2,3,4,7,11 };
  int k = 5;
  int ans = s.findKthPositive(arr, k);
  cout << "positon of " << k << "th missing number : " << ans << endl;
}