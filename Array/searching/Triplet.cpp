using namespace std;
#include <bits/stdc++.h>
// bool binarysearch(int arr[] , int n , int x)
// {
//     int low = 0 , high = n-1 ;
//     while(low <= high)
//     {
//         int mid = low + (high -low)/2 ;
//         if(arr[mid] == x)
//         return mid ;
//         else if(arr[mid] > x)
//         low = mid + 1 ;
//         else
//         high = mid - 1 ;
//     }
//     return false ;
// }
bool Pair(int arr[], int n, int x)
{

  //* two pointer approach
  //
  // int i = 0, j = n - 1;
  // while (i < j)
  // {
  //   if (arr[i] + arr[j] == x)
  //     return true;
  //   else if (arr[i] + arr[j] > x)
  //     j = j - 1;
  //   else{
  //     int sum ;
  //     sum = arr[i] + arr[j] ;
  //     int val = x-sum ;
  //     if(binarysearch(arr , n , val)){
  //       return 1 ;
  //     }
  //     i = i + 1;
  //   }
  // }
  // return false;
}
bool find3Numbers(int A[], int n, int X)
{
  //* better solution   O(N^2)

  //todo: step1 : sort the given array
  sort(A, A + n);
  for (int i = 0; i <= n - 3; i++)
  {
    int tar = X - A[i];
    //todo: step2 : now problem becomes to find the sum of two element equal to tar index goes from i+1 to n-1
    int lo = i + 1;
    int hi = n - 1;
    while (lo < hi)
    {
      if (A[lo] + A[hi] == tar)
        return true;
      else if (A[lo] + A[hi] > tar)
        hi--;
      else
        lo++;
    }
  }
  return false;
}
int main()
{
  //   int n = 7, arr[n] = {2,3,4,8,9,20,40}, x = 32;
  int n = 5, arr[n] = {1, 2, 4, 3, 6}, x = 10;
  cout << find3Numbers(arr, n, x);
}