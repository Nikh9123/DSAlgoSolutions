#include<bits/stdc++.h>
using namespace std;

void printPrimeNumber(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool flag = true; 
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
          cout << i << endl;
        }
    }
}

int main()
{
    int n = 100;
    printPrimeNumber(n);
    return 0;
}
