using namespace std;
#include <bits/stdc++.h>
// int getSum(int arr[], int n, int e)
// {

//     // naive approach
//     int sum = 0;
//     for (int i = 0; i <= e; i++)
//     {
//         sum += arr[i];
//     }
//     // cout << sum << endl;
//     return sum;
// }

// int preFixSum(int arr[], int n)
// {

//     vector<int> prefixSum;
//     int sum = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         sum = getSum(arr, n, i);
//         prefixSum.push_back(sum);
//     }
//     // cout << "size=" << prefixSum.size();
//     for (int i = 0; i < prefixSum.size(); i++)
//     {
//         cout << prefixSum[i] << " ";
//     }
//     cout << endl;
//     // return sum ;
// }
int PreFixSum(int arr[] , int n , int l , int r)
{
    vector<int>preSum(n);
    preSum[0] = arr[0];
    for(int i =1 ; i < n ; i++)
    {
        preSum[i] = preSum[i-1] + arr[i];
    }
    if(l == 0)
    {
        return preSum[r];
    }
    
    return preSum[r] - preSum[l-1];
    
}


int main()
{
    int n = 7;
    int arr[n] = {2, 8, 3, 9, 6, 5, 4};
   int l ,r ;
   cin>>l>>r;
   cout<<PreFixSum(arr, n , l , r);

    
}