using namespace std;
#include <bits/stdc++.h>
// int reverse(int num)
// {
//     int rev_num = 0;

//     while (num > 0)
//     {
//         int rev_num = rev_num * 10 + (num % 10);
//         num = num / 10;
//     }
//     // cout << "m =" << rev_num << endl;
//     // if (rev_num == num)
//     // {
//     //     return true;
//     // }
//     // else
//     // {
//     //     return false;
//     // }
//     return rev_num;
// }
// bool IsPalindrome(int n)
// {
//     int rev_n = reverse(n);
//     if (rev_n == n)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
int main()
{
    int n;
    cin >> n;
    int m = n; //copy kiye 
    // cout << IsPalindrome(n);
    int rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        cout << "rev_num = " << rev_num << endl;
        cout << " n1 = " << n << endl;
        n = n / 10;
        cout << " n2 = " << n << endl;
    }
    cout << m << " and " << rev_num << endl;
    if (m == rev_num)
    {
        cout << "hello";
    }
    else
    {
        cout << "false";
    }
    // cout << rev_num << endl;
}