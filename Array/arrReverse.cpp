using namespace std ;
#include<bits/stdc++.h>
void Reverse(int arr[] , int n)
{
// int start = 0 , end = n-1 ; 
//1 solution 
// while(start < end)
// {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] =  temp;
//     //swap(arr[start] , arr[end]);//
//     start++ , end-- ;
// }
//2nd solution
// for(int i = n-1 ; i >= 0 ; i--)
// {
//     cout<<arr[i]<<' ';
// }
for(int i=0; i<n ;i++)
{
    cout<<arr[i]<<' ';
}
}
int main()
{
    int n = 5 ;

    int arr[n] = {10,20,30,40,50} ;

    Reverse(arr , n);

}