#include <bits/stdc++.h>
using namespace std;
void AllDivisorOfaNum(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    //⚠️⚠️Efficient approach
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
        {
            cout << n/i << " ";
        }
        }
        
    }
}
int main()
{
    int n = 25;
    AllDivisorOfaNum(n);
}