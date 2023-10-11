using namespace std ;
#include<bits/stdc++.h>
// int fun(int n)
// {
// if(n == 0)
// return 
// // cout0;
// // else<<n<<endl;
// fun(n-1);
// return n ;
// // cout<<n<<endl;
// }
// int main()
// {
// int n ;
// cin>>n;
// cout<<fun(n);
// }
void fun(int n)
{
    start:
    if(n == 0)
    return ;
    // fun(n);
    // cout<<n<<endl;
    n = n-1 ;
    cout<<n<<endl;
    goto start; 

}
int main()
{
    int n =11;
    // cin>>n;
    fun(n);
}