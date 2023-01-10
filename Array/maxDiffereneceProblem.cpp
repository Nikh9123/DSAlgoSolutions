#include <bits/stdc++.h>
using namespace std;
int MaxDifference(int arr[], int n)
{   
    //naive solution ⛔ T.C = 0(n^2)
    // int diff = 0, maxDiff = 0;
    // for (int i = 0; i < n; i++)
    // {
        
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "i = " << i << " ";
    //         cout << "j= "<< j << " ";
    //         cout<<endl;
    //         if (arr[i] >= arr[j])
    //         {
    //             diff = arr[i] - arr[j];
    //             cout<<"diife = "<<diff<<endl;
    //         }
    //     maxDiff = max(diff, maxDiff);
    //     }
    // }
    // return maxDiff;

//efficient solution ⛔ TC = 0(n);
int res = arr[1] - arr[0], minVal = arr[0] ;
for(int i = 1 ; i < n ; i++)
{
    res = max(res , arr[i] - minVal) ;
    minVal = min(arr[i], minVal);
}
return minVal ;

}
int main()
{
    /*9
2 1 3 4 2 1 5 1 7*/
    int n = 9;
    int arr[n] = {2 ,1, 3, 4, 2, 1, 5, 1, 7};
    cout << "maxDiffernece = " << MaxDifference(arr, n);
}