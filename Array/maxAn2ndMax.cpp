using namespace std;
#include <bits/stdc++.h>

void maxAndSecondMax(int arr[], int n)
{
    int max = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max)
        {
            max2 = arr[i];
        }
    }

    if (max == max2 || max2 == INT_MIN)
    {
        cout << "maxValue = " << max << " and "
             << "-1" << endl;
    }
    else
    {

        cout << "maxValue = " << max << " and " << max2 << endl;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {2, 2, 5, 5, 1};
    maxAndSecondMax(arr, n);
}