using namespace std;
#include <bits/stdc++.h>
int MaxElement(int arr[], int n, int i)
{
    int maxi = INT_MIN;
    int MaxIndex = 0;
    for (; i < n; i++)
    {
        if (arr[i] > maxi)
            ;
        maxi = arr[i];
        MaxIndex = i;
    }
    return MaxIndex;
}
void LeaderInArr(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int maxIndex = MaxElement(arr, n, i);
        ans.push_back(arr[maxIndex]);
        i = maxIndex + 1;
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
int main()
{
    int n = 7;
    int arr[n] = {7, 10, 4, 3, 6, 5, 2};
    LeaderInArr(arr , n);
}