using namespace std;
#include <bits/stdc++.h>
void frequencyCount(vector<int> &arr, int N, int p)
{
    // int count = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     if (arr[i] == p)
    //     {
    //         count++;
    //     }
    // }
    // cout << count << " " << endl;
    int count = 0 ;
   for(int i = 1; i <= p ; i++)
   {
       for(int j = 0 ; j < N ; j++)
       {
           if(arr[j] == i)
           {
               count++ ;
           }
           
       }
       cout<<count<<" ";
       count = 0 ;
   }
}

// int PValue(vector<int> arr, int n, int p)
// {
//     for (int i = 1; i <= p; i++)
//         frequencyCount(arr, n, i);
// }

int main()
{
    int n = 5;
    vector<int> arr = {2, 3, 2, 3, 5};
    int p = 5;

    // PValue(arr, n, p);
    frequencyCount(arr,n , p);
}