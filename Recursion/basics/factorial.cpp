#include<bits/stdc++.h>
using namespace std;

/*
*Time Complexity : O(n)
*Space Complexity : O(n) => stack space where function calls are stored
*/

int getFactorial(int n)
{
  if(n == 0) return 0 ;
  if(n == 1) return 1 ;
  n *= getFactorial(n-1) ;
  return n ;
}
int main()
{
  int n;
  cout << "enter the value of n : ";
  cin >> n;

  cout << "factorial of " << n << " is : " << getFactorial(n) << endl;
  return 0;
}