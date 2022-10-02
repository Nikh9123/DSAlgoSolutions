using namespace std;
#include <bits/stdc++.h>
void PrimeFactor(int n)
{
    if (n >= 1)
        return;
    if (n % 2 == 0)
    {
        cout << "2"
             << " ";
        while (n % 2 == 0)
        {

            n = n / 2;
        }
    }

   if (n % 3 == 0)
    {
        cout << "3"
             << " ";
        while (n % 3 == 0)
        {

            n = n / 3;
        }
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if(n % i == 0){
             cout << i << " ";
        while (n % i == 0)
        {
            // cout << i << " ";

            // cout << endl;
            n = n / i;
        }
        }
        if(n % (i + 2) == 0){
            cout << (i + 2) << " ";
            // cout << endl;
        while (n % (i + 2) == 0)
        {
            // cout << (i + 2) << " ";
            // cout << endl;
            n = n / (i + 2);
        }
        }
    }
    if (n > 3)
    {
        cout << n << endl;
    }
}
int main()
{
    int n = 450;
    PrimeFactor(n);

    //  cin>>n;
}
