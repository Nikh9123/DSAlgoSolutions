using namespace std ;
#include<bits/stdc++.h>
void Fun(int n)
{
    if(n == 0)
    return ;
    Fun(n-1);
    cout<<n<<endl;
}
int main()
{
    int n ;
    cin>>n;
    
Fun(n);
}