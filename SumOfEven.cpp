using namespace std;
#include <bits/stdc++.h>
bool CheckPriime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    // int i = 0;
    // int sum = 0;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout << sum << endl;
    cout << CheckPriime(n);
}