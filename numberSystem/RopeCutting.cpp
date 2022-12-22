using namespace std ;
#include<bits/stdc++.h>
int RopeCut(int n , int a , int b , int c )
{
     //matlab ki rassi pure tarike se bant gya hai 
    if(n <=0)
    return n ; //matlab ki jyada cut gya minus me rassi kaise jayegaa 
    int res =  max(RopeCut(n-a , a ,b ,c),RopeCut(n-b , a , b ,c),RopeCut(n-c , a ,b ,c) );
    if(res == -1)
    return -1 ;
    if(res > 0)
    return res+1 ;
}
int main()
{
  int n = 9 , a = 2 , b = 2 , c = 2 ;
  cout<<RopeCut(n ,a, b , c);
}