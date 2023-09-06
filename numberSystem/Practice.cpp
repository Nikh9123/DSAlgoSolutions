using namespace std ;
#include<bits/stdc++.h>
int fun(int n)
{
    if(n == 1)
    return 0;
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
int main()
{
    cout<<fun(3);
}