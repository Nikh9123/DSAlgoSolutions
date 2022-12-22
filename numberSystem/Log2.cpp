using namespace std ;
#include<bits/stdc++.h>
int fun(int n)
{
   if(n <= 1)
   return 0 ;
   else{
    return 1 + fun(n/2);
   }
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);

}