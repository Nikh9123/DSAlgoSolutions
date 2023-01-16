
/*
@https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/
using namespace std;
#include <bits/stdc++.h>
int majorityElement(int arr[], int n)
{

    // your code here
    // naive method TC = O(n^2)
    for (int i = 0; i < n; i++)
    {
        // int ele = arr[i] ;
        // int count = 1 ;
        // for(int j = 0 ; j < n ; j++)
        // {
        //     if(arr[j] == ele){
        //         count++ ;
        //     }
        // }
        // if(count > (n/2))
        // {
        //     return arr[i] ;
        // }
        // else {
        //     return -1 ;
        // }
    }
    // efficient approach TC = O(n)
    // for finding the most occured elements
    // using moore's voting algorithm
    int count = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        return -1;
    }
    else
    {
        return arr[res];
    }
}
int main()
{
    int n = 5;
    int arr[n] = {3, 1, 3, 3, 2};
    cout << majorityElement(arr, n);
}