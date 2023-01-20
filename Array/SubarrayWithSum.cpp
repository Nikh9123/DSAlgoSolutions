using namespace std;
#include <bits/stdc++.h>
bool SubaarayWithSum(int arr[], int n, int target)
{

    // naive approach O(n^2)
    // int sum  ;
    // for(int i = 0 ; i < n ; i++)
    // {
    //    sum = 0 ;
    //     for(int j = 0 ; j < n ; j++)
    //     {
    //        sum = sum + arr[i+j];
    //        if(sum == target)
    //        {
    //         return true ;
    //        }
    //     }

    // }
    // return false ;

    //    efficient approach O(n) , sliding window technique
    int s = 0;
    int curr = 0;
    int i;
    for (i = 0; i < n; i++)
    {

        curr += arr[i];

        while (curr > target)
        {
            curr = curr - arr[s];
            s++;
        }
        if (target == curr)
        {
            cout << "between index : " << s + 1 << " and " << i + 1 << endl;
            return true;
        }
    }

    return false;
}
int main()
{
    int n = 5, target = 12;
    int arr[n] = {1, 2, 3, 7, 5};
    // int n = 2 , target = 3;
    // int arr[n] = {2,4};
    cout << SubaarayWithSum(arr, n, target);
}