#include<bits/stdc++.h>
using namespace std;

double getPow(double x, int n)
{
  if (n == 1)
  {
    return x * n;
  }
  if (n == 0) return 1;
  
  x *= getPow(x, n - 1);

  return x;
}


int main()
{
  double x;
  int n;
  cout << "enter the value of x : ";
  cin >> x;
  cout << "enter the value of n : ";
  cin >> n;
  double ans;
  if (n < 0)
  {
    n *= -1;
    ans = getPow(x, n);
    ans = 1.0 / ans;
  }
  else {
    ans = getPow(x, n);
  }
  cout << "ans is : " << ans << endl;
  return 0;
}