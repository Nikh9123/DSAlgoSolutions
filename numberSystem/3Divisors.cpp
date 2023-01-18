#include <bits/stdc++.h>
using namespace std;

bool isThree(int n)
{
    int count = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
        cout << endl;
        count++;
    }
    if (count == 3)
        return true;
    return false;
}

int main()
{
    int n = 12;
    // cin>>n;
    cout << isThree(n);
}