#include <bits/stdc++.h>
using namespace std;
int SquareRoot(int n)
{
  int i = sqrt(n) ;
  cout<<i;
  while(n > 0 && i > 0)
  {
  //   cout<<"in loop after n--"<<n;
  // cout<<endl;
    if(sqrt(n) == i)
    {
      break;
    }
    n-- ;
    // i-- ;
  }
  return n ;
}
int main()
{
  int n = 14;
  // int p = 5;
  // int arr[n] = {2, 3, 2, 3, 5};
  // frequencyCount(arr, n, p);
  int value =SquareRoot(n);
  cout<<sqrt(value);
}
// 1 1 2 3 5 8
