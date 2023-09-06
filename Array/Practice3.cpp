using namespace std ;
#include<bits/stdc++.h>
// string isSubset(int a1[] , int a2[] , int n , int m)
// {
//     sort(a1 , a1+n);
//     sort(a2 , a2+m);
//     int i=  0 , j =0 ;
//     while(i < n && j < m)
//     {
//         if(a1[i] == a2[j])
//         {
//             i++ ;
//             j++ ;
//         }
//         else if(a2[j] > a1[i])
//         {
//             i++ ;
//         }
//         else {
//             return "No" ;
//         }
//     }

//     if(j == m)
//     {
//         return "YES!" ;
//     }
//     else {
//         return "NO!";
//     }
// }
// int secondLargest(int arr[] ,int n)
// {
//     int largest = 0 , res = -1 ;
// 	    for(int i = 1 ; i < n ; i++)
// 	    {
// 	        if(arr[i] > arr[largest])
// 	        {
// 	            res = largest ;
// 	            largest = i ;
// 	        }
// 	        else if(arr[i] != arr[largest])
// 	        {
// 	            if(res == -1 || arr[i] > arr[res])
// 	            {
// 	                res =  i ;
// 	            }
// 	        }
// 	    }
// return res ;
//         }
// vector<int> leaders(int a[], int n){
//         vector<int>ans ;
//         int res = a[n-1] ;
//         ans.push_back(res);
//         for(int i = n-2 ; i >= 0 ; i--)
//         {
//          if(a[i] > res)
//          {
//              ans.push_back(a[i]);
//              res = a[i] ;
//          }
//         }
// }
int BinarySearch(int arr2[] , int m , int key)
{
    int s = 0 , e = m-1;
  while(s < e)
  {
    int mid = s+ (e-s)/2 ;
    if(arr2[mid] == key)
    {
        return true ;
    }
    else if(arr2[mid] < key)
    {
        s = mid + 1 ;
    }
    else {
        e = mid-1 ;
    }
  }
  return false ;
}
void interSection(int arr1[] , int arr2[],int n , int m)
{
  for(int i = 0 ; i < n ;i++)
  {
    if(i > 0 && arr1[i-1] == arr1[i])
    continue; //for going out of upper for loop if we find the sa,e index

    for(int j = 0 ; j < m ; j++)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" " ;
            break ; //when we fouund the element after that immediatly break the loop for not getting duplicate elements
        }
    }
  }
}
int main()
{
    // int m = 5 ;
    // int arr[m] = {46,46,46,46,46};
    // cout<<secondLargest(arr, m);
    // int n = 10 ;
    // int arr2[n] = {1,3,4,57,23,42,44,46,2,45};
    // cout<<isSubset(arr2 , arr , n, m);

    int n = 5 ;
    int m = 7 ;
    int arr[n] = {1,1,3,3,3};
    int arr2[m] = {1,1,1,1,3,5,7};
    interSection(arr , arr2 , n , m);
    // vector<int>ans = leaders(arr,n);
    
    // for(int i=0; i < ans.size() ; i++)
    // cout<<ans[i]<<" ";
}