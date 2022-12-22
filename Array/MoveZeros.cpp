/*Given an array of random numbers, Push all the zero’s of a given array to the end of the array. For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be same. Expected time complexity is O(n) and extra space is O(1).
Example:


Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};
*/

#include <bits/stdc++.h>
using namespace std;

void MoveEnd(int arr[], int n)
{

    //// naive method 😒😒😒
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] != 0)
    //                 swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    //  efficeint method //😁😁😁😁//
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {

            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 10;
    int arr[n] = {12, 0, 0, 9, 0, 34, 0, 4, 43, 0};
    MoveEnd(arr, n);
}