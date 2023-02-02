#include <bits/stdc++.h>
using namespace std;

// using binary search O(logn)
int GetIndex1st(vector<int> &arr, int n, int k, int low, int high)
{
    int mid = low + (high - low) / 2;

    if (low > high)
    {
        return -1;
    }
    if (arr[mid] == k)
    {
        while (arr[mid] == arr[mid - 1])
        {
            mid--;
        }
        return mid;
    }
    else if (arr[mid] > k)
    {
        GetIndex1st(arr, n, k, low, mid - 1);
    }
    else
    {
        GetIndex1st(arr, n, k, mid + 1, high);
    }
    return -1 ;
}

int GetIndexLast(vector<int> &arr, int n, int k, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            while (arr[mid] == arr[mid + 1])
            {
                mid++;
            }
            return mid;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1 ;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int FirstIndex = GetIndex1st(nums, nums.size(), target, 0, nums.size() - 1);
    int LastIndex = GetIndexLast(nums, nums.size(), target, 0, nums.size() - 1);
    return {FirstIndex, LastIndex};
}
int main()
{
    vector<int>nums = {5,7,7,8,8,10};
    int target = 7;
    vector<int>ans = searchRange(nums , target);
    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
// 1 1 2 3 5 8
