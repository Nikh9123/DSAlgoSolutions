using namespace std;
#include <bits/stdc++.h>
int main()
{
  int n = 11;
  int count = 0 ;
 while(n)
 {
  if(n&1 == 1)
  {
   count++ ;
   n=n>>1;
  }
 }
 cout<<count;
}