using namespace std;
#include <bits/stdc++.h>
int search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
    // linear search algo
    // time complexity⌚ = O(n)
    // in worst case it will travel at all the array elements
}
void Insert(int arr[], int n)
{
    int ind;
    cout << "enter the index" << endl;
    cin >> ind;

    if (ind > n)
        cout << "can't insert " << endl;
    else
    {
        int ele;
        cout << "enter the elements" << endl;
        cin >> ele;

        for (int i = n; i >= ind; i--)
            arr[i + 1] = arr[i];
        n = n + 1;
        arr[ind] = ele;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}
void Delete(int arr[], int n)
{
    int ind;
    cout << "Enter the index where you wabt to delete " << endl;
    cin >> ind;
    if (ind > n)
        cout << "can't delete" << endl;
    else
    {
        int ele;
        cout << "eneter the element you want to delete" << endl;
        for (int i = ind; i < n; i++)
            arr[i] = arr[i + 1];
        n = n - 1;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}
int main()
{
    int n = 6;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int key;
    // cin >> key;
    // cout << search(arr, n, key);
    Insert(arr, n);
    Delete(arr , n);
}