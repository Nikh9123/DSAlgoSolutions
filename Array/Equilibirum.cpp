using namespace std ;
#include<bits/stdc++.h>
int Equilibirum(int arr[]  , int n)
{
    int sum = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        int j =0 ;
        while(j < i)
        {
           sum = sum + arr[j] ;
           j++ ;
        }
        cout<<sum<<" " <<arr[i];
        sum = 0 ;
    }

}
int main()
{
    int n = 5 ;
    int arr[n] = {1,3,5,2,2} ;
    cout<<Equilibirum(arr  , n);
}