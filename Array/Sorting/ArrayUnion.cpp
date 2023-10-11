using namespace std ;
#include<bits/stdc++.h>

//* naive solution O(m+n)*log(m+n)
// void Union(int a[] , int b[], int n , int m)
// {
//    int c[m+n] ;

//    for(int i=0; i < n ;  i++)
//    c[i] = a[i];

//    for(int j= 0;j < m ; j++)
//    c[n+j] = b[j] ;

//    sort(c, c+m+n);

//    for(int i = 0; i < m+n ; i++)
//    {
//     if(i == 0 || c[i-1] != c[i])
//     {
//         cout<<c[i]<<" ";
//     }
//    }

// }


void Union(int a[] , int b[], int n , int m)
{
    int i =0 , j = 0 ;
    while(i < n && j < m)
    {
        if(i > 0 && a[i] == a[i-1])
        {
            i++ ;
            continue;
        }
        if( j > 0 && b[j] == b[j-1])
        {
            j++ ;
            continue;
        }
        if(a[i] < b[j])
        {
            cout<<a[i]<<" ";
            i++ ;
        }
        else if(a[i] > b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
            
        else  // a[i] == b[j]
        {    
            cout<<a[i]<<" ";
            i++ ;
            j++ ;
        }
    }
    while (i < n)
    {
        /* code */
        cout<<a[i]<<" ";
        i++ ;
    }
    while (j < m)
    {
        /* code */
        cout<<b[j]<<" ";
        j++ ;
    }
    
    
}
 
int main()
{
    int n = 3 ;
    int m = 5 ;
    int arr[n] = {3,5,8};
    int arr2[m] = {2,8,9,10,15};
    Union(arr , arr2 , n , m);
}