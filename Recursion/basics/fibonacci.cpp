#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
  if (n <= 1) return n;
  int first = fib(n - 1);
  int second = fib(n - 2);
  return first + second;
}

int main()
{
  int n;
  cout << "enter the value of n : ";
  cin >> n;
  cout << "the fibonacci number of " << n << "th series is : " << fib(n) << endl;
  return 0;
}