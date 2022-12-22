using namespace std;
#include <bits/stdc++.h>
int firstDiffBit(int m, int n)
{
    if (n == m)
        return -1;

    int index = 1;

    while ((m & 1) == (n & 1))
    {

        n = n >> 1;

        m = m >> 1;

        index++;
    }

    return index;
}
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << firstDiffBit(a, b);
}