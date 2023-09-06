using namespace std;
#include <bits/stdc++.h>
int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);
}