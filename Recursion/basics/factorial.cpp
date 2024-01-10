using namespace std;
#include <bits/stdc++.h>
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}