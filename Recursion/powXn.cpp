#include<bits/stdc++.h>
using namespace std;

double getPowXn(double x, int n)
{
    if (n == 0)
        return 1.0;

    double result = 1.0;
    result *=  x ;
    n-- ;
    return getPowXn(x, n) ;
}

int main()
{
  float x;
  int n;
  cout << "enter the value of x : " << endl;
  cin >> x;
  cout << x << endl;
  cout << "enter the value of n : " << endl;
  cin >> n;
  cout << n << endl;
  float ans = getPowXn(x, n);

  cout<< fixed << setprecision(3)  << "ans : " << ans << endl;

  return 0;
}