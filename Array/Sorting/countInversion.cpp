#include <bits/stdc++.h>
using namespace std;
int MergeAndCountInv(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int mainIndex = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }
    mainIndex = start;
    int index1 = 0, index2 = 0, res = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            res += len1 - index1;
            arr[mainIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    return res;
}

int MergeSort(int arr[], int start, int end)
{
    int res = 0;
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        res += MergeSort(arr, start, mid);
        res += MergeSort(arr, mid + 1, end);
        res += MergeAndCountInv(arr, 0, end);
    }
    return res;
}

int CountInversion(int arr[], int n)
{
    int start = 0, end = n - 1;
    int res = MergeSort(arr, start, end);
    return res;
}
int main()
{
    int n = 8 ;
    int arr[n] = {2,5,8,11,3,6,9,13};
    cout<<CountInversion(arr , n);
}