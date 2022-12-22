using namespace std ;
#include<bits/stdc++.h>
//recursive function 
//fibonacci
int fibo(int n)
{
    if(n <= 1) //--> kyunki 1 aur is se niche jaane pe -(minus) me function ko inputs milenege
     return n ; //n = 0 pe aur n == 1 return karne ke liye aur is se niche return karne pe minnus me return hoga 
    return  fibo(n-1) + fibo(n-2); // 3 = (3-1) + (3-2) it means n = (n-1) + (n-2)
    //ek case solve karke function call kro
}
int main()
{
int n ;
cin>>n;
cout<<fibo(n);
}