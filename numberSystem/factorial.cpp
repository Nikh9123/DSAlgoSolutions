using namespace  std ;
#include<bits/stdc++.h>
int Fact(int n, int k)
{
    //recursive  
    // if(n == 0 || n == 1)
    // return 1 ;

    // return n * Fact(n-1);
// Tail Recursive ⚠️
if(n == 0 || n == 1)
		return k;

	return Fact(n - 1, k * n);
}
int main()
{
    int n ;
    cin>>n;
   cout<< Fact(n,1);
}