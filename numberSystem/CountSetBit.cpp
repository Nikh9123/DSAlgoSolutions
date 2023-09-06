using namespace std;
#include <bits/stdc++.h>
int countSetBits(int n)
{
    // To adjust for zer0
    n = n + 1;
    cout << " n = " << n << endl;
    // each bit position divided into groups of 2, 4, 8, ... starting from LSB
    // each group contributes n/2 number of set bits to the final answer and hence p2 is used
    int result = 0, i = 0;
    while (pow(2, i) < n)
    {
        int p1 = pow(2, i);
        cout << "p1 =" << p1 << " " << endl;
        int p2 = pow(2, (i + 1));
        cout << "p2 = " << p2 << endl;
        result += (p1 * (n / p2));
        cout << "result = " << result << endl;
        i++;
        cout << " i = " << i << endl;
        if ((n % p2) > p1)
        {
            result += (n % p1);
        }
    }
    return result;
}
int main()
{
    int n = 4;
    cout << countSetBits(n);
}