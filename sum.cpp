using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n = 5;
    int sum = 0;
    int i = 0;
    while (/* condition */ i <= n)
    {
        /* code */
        cout << i << " ";
        cout << endl;
        cout << sum << " ";
        cout << endl;
        sum = sum + i;
        i++;
        cout << "after increament of i" << i << " ";
        cout << endl;
    }
}