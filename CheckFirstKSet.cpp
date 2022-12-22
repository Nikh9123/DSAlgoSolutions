#include <bits/stdc++.h>
using namespace std;
int CheckSetbit(int n)
{
    int count = 1, bit = 0 , i =0 ;

    while (n != 0)
    {
        bit = n & 1;
        if (bit == 1)
        {
            return count;
        }
        else
        {
            count++;
        }
        n = n >> 1;
        i++ ;
    }
}
int main()
{
    int n ;
    cin>>n ;
    cout << CheckSetbit(n);
}