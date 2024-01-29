using namespace std;
#include <bits/stdc++.h>
#define ull unsigned long long int
int DecToBin(int n)
{
    // method 1 😅
    //  int count = 0;
    //  ull Binary_num = 0;
    //  while (n != 0)
    //  {
    //      int rem = n % 2;
    //      ull c = pow(10, count);
    //      Binary_num += rem * c;
    //      n /= 2;
    //      count++;
    //  }
    //  return Binary_num;
    // method 2 😅😅
    for (int i = 31; i >= 0; i--)
    {

        int k = n >> i;
        // cout << "k " << k;
        if (k & 1 == 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    cout << DecToBin(n);
    // DecToBin(n);
}
