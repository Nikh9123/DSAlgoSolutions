#include <bits/stdc++.h>
using namespace std;
// void Frequency(int arr[] , int n)
// {
//     vector<int>ans  ;
//     int curr , cnt = 1 ;
//    for(int i =0 ; i < n ; i++)
//    {
//      curr = arr[i] ;
//      for(int j = i + 1 ; j < n ; j++)
//      {
//        if(curr == arr[j])
//        {
//         i = j ;
//         cnt++ ;
//        }
//      }
//         ans.push_back(cnt);
//         cnt=1 ;
//    }
//    for(int i=0; i < ans.size(); i++)
//    {
//     cout<<ans[i]<<" ";
//    }
// }
void frequencyCount(int arr[], int N, int p)
{
    int count = 0;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        cout << count << " ";
        count = 0;
    }
}
int main()
{
    int n = 5;
    int p = 5;
    int arr[n] = {2, 3, 2, 3, 5};
    frequencyCount(arr, n, p);
}
