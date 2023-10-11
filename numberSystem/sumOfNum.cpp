using namespace std ;
#include<bits/stdc++.h>
int sumOfN(int n)
{
    if(n <= 0)
    return 0 ;
    return (n%10) + sumOfN(n/10);
}
int main()
{
    int n ;
    cin>>n ;
    cout<<sumOfN(n);
}