#include<bits/stdc++.h>
using namespace std;

void foo(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << "10" << endl;
  foo(n - 1);
}

int main()
{
  foo(5);
  return 0;
}
//