using namespace std ;
#include<bits/stdc++.h>
int SumOfN(int n)
{
    if(n <= 1) ///--> base case 
    return n ;
    return n + SumOfN(n-1);  //sabse chote case ko solve karke formula bana liye 2 ---> 2 + (2-1) = 3 n = n + (n-1); 

}
int main()
{
int n ;
cin>>n ;
cout<<SumOfN(n);
}