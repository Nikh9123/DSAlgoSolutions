using namespace std;
#include <bits/stdc++.h>
int Hcf(int n1, int n2)
{
    // naive solution
    //  int res = min(n1, n2);
    //  while (res > 0)
    //  {
    //      /* code */
    //      if (n1 % res == 0 && n2 % res == 0)

    //     {
    //         break;
    //     }
    //     res--;
    // }
    // return res;
    // while (n1 != n2)
    // {
    //     if (n1 > n2)
    //     {
    //         n1 = n2 - n1;
    //     }
    //     else
    //     {
    //         n2 = n2 - n1;
    //     }
    // }
    // return n1;

    if (n2 == 0)
        return n1;

    else
    {
        return Hcf(n2, n1 % n2);
    }
}
int LowestCommonFactor(int n1, int n2)
{
}
// int trailingZero(int n)
//{
//     int fact = factorial(n);
//     int res = 0;
//     while (fact % 10 == 0)
//     {
//         res++;
//         fact = fact / 10;
//     }
//     return res;
// }
int factorial(int fact)
{
    /// iterartive method
    // int res = 1;
    // for (int i = 2; i <= fact; i++)
    // {
    //     /* code */
    //     res = res * i;
    // }
    // return res;

    /// recursive method
    if (fact == 0)
    {
        return 1;
    }

    return fact * factorial(fact - 1);
}
bool palindrome(int x)
{

    int temp;
    temp = x;
    int rev = 0;

    while (temp > 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev = x)
    {
        return true;
    }
}
int main()
{
    //     int x = 1112111;
    // //    cin >> x;

    //     cout << palindrome(x);

    // int n = 5;
    // cout << trailingZero(n);

    int n1 = 25, n2 = 50;
    cout << Hcf(n1, n2);
}