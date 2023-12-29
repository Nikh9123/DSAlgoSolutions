#include<bits/stdc++.h>
using namespace std;

// void printTillN(int k, int n)
// {
//   if (n < 0) return;

//   cout << k - n << endl;
//   printTillN(k , n-1);
// }

void printTillN(int n)
{
  // if(i > n) return ;

  // cout<<i<<endl;

  // printTillN(n, i+1);

  if (n < 0) return;

  printTillN(n - 1);
  cout << n << endl;

}


void printOppositeN(int n)
{
  if (n == 0) return;
  cout << n << endl;

  printOppositeN(n - 1);
}

void backtrackingNto1(int n, int i)
{
  if (i < 0) return;

  backtrackingNto1(n, i - 1);
  cout << n - i << endl;

}

int main()
{
  int n = 10, k = 10;

  // printTillN(n);
  // printOppositeN(n);
  backtrackingNto1(10, 10);

}