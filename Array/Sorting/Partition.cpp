#include<bits/stdc++.h>
using namespace std ;
// void Partition(int arr[] , int n , int p)
// {
//     vector<int>ans ;
//     for(int i= 0 ; i < n ; i++)
//     {
//         if(arr[i] < arr[p])
//         {
//             ans.push_back(arr[i]);
//         }
//     }
//     ans.push_back(arr[p]);

//     for(int i = 0 ; i < n ; i++)
//     {
//         if(arr[i] > arr[p])
//         {
//             ans.push_back(arr[i]);
//         }
//     }

//     for(int i= 0; i< ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }

void LPartition(int arr[] , int start , int end )
{
   int window = start-1 ;
   int j = start ;
   for( ; j <= end-1 ; j++)
   {
    if(arr[j] < arr[end])
    {
        window++ ;
        swap(arr[window] , arr[j]);
    }
   }
   swap(arr[window+1] , arr[end]);
   cout<<"pivot ="<<window+1<<endl;
}
int main(){
int n = 5, p= 5 ;
int arr[n] = {70,60,80,40,30};
// Partition(arr , n , p);
LPartition(arr , 0,n-1);
for(int i = 0 ; i < n ; i++)
{
    cout<<arr[i]<<" ";
}
}