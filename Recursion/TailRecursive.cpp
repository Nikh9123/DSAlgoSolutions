using namespace std ;
#include<bits/stdc++.h>
void TailRecursive(int n)
{
    // TailRecursive()
    //print n to 1
    start:
    if(n == 0)
    return ;
    n = n-1 ;
    cout<<n+1<<endl;
    goto start;

    ///recursive()  n to 1
    // if(n == 0)
    // return ;
    // cout<<n <<endl;
    // TailRecursive(n-1);
}
int main()
{
    int n ;
    cin>>n;
    TailRecursive(n);
}