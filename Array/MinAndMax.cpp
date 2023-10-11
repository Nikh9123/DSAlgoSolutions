using namespace std;
#include <bits/stdc++.h>
// int funcMax(int arr[], int n)
// {
//     int temp = 0;
//     // har ek array ke element ko uske next element se compare kar rhe hain
//     for (int i = 0; i < n; i++)
//     {
//         if (temp < arr[i])
//         {
//             temp = arr[i];
//         }
//     }
//     return temp;
// }
// int funcMin(int arr[], int n)
// {
//     int temp;

//     for (int i = 0; i < n; i++)
//     {
//         if (temp > arr[i])
//             temp = arr[i];
//     }
//     return temp;
// }
// int main()
// {
//     int n = 8;
//     //  cin>>n;

//     int arr[8] = {12, 45, 78, 23, 3, 45, 53, 22};
//     cout<<"max =" << funcMax(arr, n) << " "
//          << "min =" << funcMin(arr, n);
// }
int main()
{
    int n = 4 ;
    int arr[n] = {0,1,0,0};
int res = 0 ;
    for(int i =1 ; i<n ; i++)
    {
        if(arr[res] < arr[i])
        {
            res = i ;
        }
    }
    cout<<res;
}