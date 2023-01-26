/*
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20
when rotated by 3 elements, it becomes
8 10 12 14 16 18 20 2 4 6.
*/

#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void rotate(int arr[], int n, int start, int end)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}
void ArrayRotation(int *arr, int n, int d)
{
    rotate(arr, n, 0, d - 1);
    rotate(arr, n, d, n - 1);
    rotate(arr, n, 0, n - 1);
}
// void RotateArray(int arr[], int n, int d)
// {
//     // doing with extra space
//     int temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         temp[i] = arr[(i + d) % n];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }
int main()
{
    int n = 10, d = 3;
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    ArrayRotation(arr, n, d);
    cout<<endl;
    // RotateArray(arr, n, d);
    printArray(arr, n);
}