#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {

if (b > a)
    {
      return (b, a % b);
    }
    else
    {
      return (b, b % a);
    }
  }
}
int main()
{
  cout << GCD(3, 12);
}