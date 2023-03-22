
// using namespace std ;
// #include<bits/stdc++.h>
// int getLargest(int arr[] , int n)
// {
//     int res = 0 ;
//     for(int i=1 ; i < n ; i++)
//     {
//         if(arr[res] < arr[i])
//         {
//             res = i ;
//         }
//     }
//     // cout<<res <<endl;
//     int res1 = 0 ;
//     for(int i = 1 ; i<n;i++ )
//     {
//         if(arr[res1] < arr[i] && arr[i] < arr[res])
//         {
//             res1 = i ;
//         }
//     }
//     // cout<<res1;
//     return res1 ;//my approach end 

// }

// int main()
// {
//     int n = 3 ;
//     int arr[n] = {56,20,7};
//     cout<<getLargest(arr , n);

// }
#include<bits/stdc++.h>
using namespace std ;
int secondlargest(int arr[] , int n)
{

  //1 4 3 2 5 6
  
   int largest = 0 , res = -1;
   for(int i = 1 ; i < n ; i++)
   {
    if(arr[i] > arr[largest])
    {
        res = largest ;
        largest = i ;
    }
    else if(arr[largest] != arr[i])
    {
          if(res == -1 || arr[res] < arr[i])
          {
            res =  i ;
          } 
    }
   }
   return arr[res] ;

}
int main()
{   
    // int n = 10 ;
    // int arr[n] = {20,20,12,20,56,38,36,32,44,66};
    int n = 5 ;
    int arr[n] = {4,3,57,42,46};
    cout<<secondlargest(arr ,n);


}