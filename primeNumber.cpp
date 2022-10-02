using namespace std;
#include <iostream>
bool CheckPrime(int n)
{
    // // naive solution⚠️⚠️⚠️
    // if (n == 0 || n == 1)
    // {
    //     return false;
    // }
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         return false;
    //     }
    //     return true;
    // }
    // /**
    // efficient approach⚠️⚠️⚠️⚠️
    //     if(n == 0 || n == 1)
    //     {
    //         return false ;
    //     }
    //     for(int i=2 ; i * i <= n ; i++)
    // {
    //     if(n % i == 0)
    //     {
    //         return false ;
    //     }
    //     return true ;
    // }
    // sabse jyda efiicient ⚠️⚠️⚠️⚠️⚠️
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
    {
        return false;
    }
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        /* code */
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int n = 1031;
    // cin >> n;
    cout << CheckPrime(n);
}