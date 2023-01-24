/*
@https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/maximum-index-1587115620
*/

/*
Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required
condition(A[i] < A[j]) thus giving
the maximum difference of j - i
which is 6(7-1).

A[i] < A[j] and i < j.
*/


/*
using namespace std;
#include <bits/stdc++.h>
int maxIndex(int arr[], int n)
{
    int diff = 0, maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
    A:
            cout << "i = " << i << " ";
            cout << endl;
        for (int j = n - 1; j > i; j--)
        {
            cout << "j = " << j << " ";

            if (arr[j] >= arr[i])
            {
                cout << "insdie if j = " << j << " ";
                cout << endl;
                diff = j - i;
                //    break ; //for optimise the code
            }
            maxDiff = max(diff, maxDiff);
            cout << "maxDiff = " << maxDiff;
            cout << endl;
        }
        // maxDiff = max(diff, maxDiff);
    }
    return maxDiff;
}
int main()
{
    int N = 9,
        A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << maxIndex(A, N);
}
*/

/*
Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required
condition(A[i] < A[j]) thus giving
the maximum difference of j - i
which is 6(7-1).

A[i] < A[j] and i < j.
*/

using namespace std;
#include <bits/stdc++.h>
int maxIndex(int arr[], int n)
{
    int diff = 0, maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
    A:
            cout << "i = " << i << " ";
            cout << endl;
        for (int j = n - 1; j > i; j--)
        {
            cout << "j = " << j << " ";

            if (arr[j] >= arr[i])
            {
                cout << "insdie if j = " << j << " ";
                cout << endl;
                diff = j - i;
                    break ; //for optimise the code
            }
        }
        // maxDiff = max(diff, maxDiff);
            maxDiff = max(diff, maxDiff);
            cout << "maxDiff = " << maxDiff;
            cout << endl;
    }
    return maxDiff;
}
int main()
{
    int N = 9,
        A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << maxIndex(A, N);
}