using namespace std ;
#include<bits/stdc++.h>
int main()
{
    int a = 90 , b = 100 ;
   cout<<( a ^= b)<<endl;
   cout<< (b ^= a)<<endl;
   cout<<( a ^= b)<<endl;
    cout<<a<<" " <<b;
}