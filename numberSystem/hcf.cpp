using namespace std;
#include <bits/stdc++.h>
// int CheckPrime(int a)
// {
// 	//
// }
int HighestCommonFactor(int a, int b)
{
    if (b == 0)
        return a;

    else
    {
        return HighestCommonFactor(b, a % b);
    }
}
int LowestCommonFactor(int a, int b)
{
    cout << "hello" << HighestCommonFactor(a, b) << endl;

    return (a * b) / HighestCommonFactor(a, b);
}
int main()
{
    int a = 15, b = 12;
    // cin>>a>>b;
    cout << LowestCommonFactor(a, b);
}