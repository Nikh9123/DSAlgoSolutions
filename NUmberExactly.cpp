using namespace std;
#include <bits/stdc++.h>
// // void PrintDivisor(int n)
// {
//     vector<int> ans;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             ans.push_back(i);
//             if (i != n / i)
//             {
//                 ans.push_back(n / i);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     for (int j = 0; j < ans.size(); j++)
//     {
//         cout << ans[j] << " ";
//     }
// }
// void printDivisor(int n)
// {
//     int i = 0;
//     for (i = 1; i * i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     for (i; i >= 1; i--)
//     {
//         if (n % i == 0)
//         {
//             cout << n / i << " ";
//         }
//     }
// }
int exactly3Divisors(int N)
{
    // Your code here
    int i = 0;
    int count = 0;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    for (i; i >= 1; i--)
    {
        if (n % i == 0)
            count++;
    }
    // cout << count << endl;
    return count ;
}
int main()
{
    int n = 49;
    // cin>>n ;
    cout<<exactly3Divisors(n);
}