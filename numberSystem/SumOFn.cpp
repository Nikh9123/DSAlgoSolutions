using namespace std ;
#include<bits/stdc++.h>
int SumOFN(int n)
{
  if(n == 0)
   return 0 ;
   return n + SumOFN(n-1);

}
int main()
{
  int n ;
  cin>>n;
  cout<<SumOFN(n);
}