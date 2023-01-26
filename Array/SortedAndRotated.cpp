/*
@https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/check-if-array-is-sorted-and-rotated-clockwise-1587115620

Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.

Example 1:

Input:
N = 4
arr[] = {3,4,1,2}
Output: Yes
Explanation: The array is sorted
(1, 2, 3, 4) and rotated twice
(3, 4, 1, 2).
Example 2:

Input:
N = 3
arr[] = {1,2,3}
Output: No
Explanation: The array is sorted
(1, 2, 3) is not rotated.

*/

#include <bits/stdc++.h>
using namespace std;

bool checkRotatedAndSorted(int arr[], int num)
{

    // Your code here

    // Initializing two variables x,y as zero.
    // int x = 0, y = 0;

    // // Traversing array 0 to last element.
    // // n-1 is taken as we used i+1.
    // for (int i = 1; i < n-1 ; i++) {
    //     if (arr[i] < arr[i + 1])
    //         x++;
    //     else
    //         y++;
    // }

    // // If till now both x,y are greater than 1 means
    // // array is not sorted. If both any of x,y is zero
    // // means array is not rotated.
    // if (y == 1) {
    //     // Checking for last element with first.
    //     if (arr[n - 1] < arr[0])
    //         x++;
    //     else
    //         y++;

    //     // Checking for final result.
    //     if (y == 1)
    //         return true;
    // }

    // // If still not true then definitely false.
    // return false;

    int f = 0;

    for (int i = 0; i < num - 1; i++)
    {

        if (arr[0] < arr[num - 1])
            break;

        else if (arr[i + 1] < arr[i])
            f++;
    }

    int g = 0;

    for (int i = 0; i < num - 1; i++)
    {

        if (arr[0] > arr[num - 1])
            break;

        else if (arr[i + 1] > arr[i])
            g++;
    }

    if (f == 1 || g == 1)
        return 1;

    return 0;
}

int main()
{
    int n = 5;
    int arr[n] = {10, 3, 4, 1, 9};
    cout << checkRotatedAndSorted(arr, n);
}