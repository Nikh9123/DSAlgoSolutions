using namespace std ;
#include<bits/stdc++.h>
//print n-1 to 1
// void fun(int n)
// {
//    start:
//    if(n == 0)
//    return ;
//     cout<<n<<endl;
//    n = n - 1;
// //    cout<<n<<endl;
//    goto start ;
// }
//print 1 to n by tail recursion elimination
void OnetoN(int n, int k)
{
   if(n == 0)
   return  ;
   cout<<k<<endl;
   OnetoN(n-1 , k+1);
}
int main()
{
    int n ;
    cin>>n;
OnetoN(n , 1);
}