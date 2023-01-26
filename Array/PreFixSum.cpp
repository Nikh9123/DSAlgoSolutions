/*
@https://leetcode.com/problems/running-sum-of-1d-array/submissions/885819744/

*/

/*
Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
*/

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
int PreFixSum(int arr[], int n, int l, int r)
{
    vector<int> preSum(n);
    preSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }
    if (l == 0)
    {
        return preSum[r];
    }

    return preSum[r] - preSum[l - 1];
}

int main()
{
    int n = 7;
    int arr[n] = {2, 8, 3, 9, 6, 5, 4};
    int l, r;
    cin >> l >> r;
    cout << PreFixSum(arr, n, l, r);
}