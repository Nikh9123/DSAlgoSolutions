#include<bits/stdc++.h>
using namespace std ;

void WholeNumberTilln(int n)
{
  if(n < 0) return ;

  WholeNumberTilln(n-1);
  cout<<n<<endl;
}

int main()
{
  WholeNumberTilln(100);
  return 0 ;
}