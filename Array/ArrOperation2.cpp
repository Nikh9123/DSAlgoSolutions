using namespace std ;
#include<bits/stdc++.h>
void insert(int arr[] , int n , int loc , int ele)
{
    for(int i = n ; i>=loc ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[loc] = ele ;
    n = n+1 ;
    for(int i =0 ;i<n ; i++)
    cout<<arr[i]<<" ";

}
void Delete(int arr[] , int n , int ele)
{
    int i ;
    for( i = 0 ; i<n ; i++)
    {
        if(arr[i] == ele)
        break ;
    }
    for(int j = i ; j < n ; j++)
    {
        arr[i] = arr[i+1];
    }
    n = n-1 ;
    for(int k = 0 ; k < n ; k++)
    cout<<arr[k] <<" ";
}
int main()
{
    int n = 6 ;
    int *arr = new int[n];
    for(int i = 0 ;i<n ;i++)
    cin>>arr[i];
//    int loc ;
//    cout<<"enter the loc where you want to insert"<<endl;
//    cin>>loc ;
//    if(loc > n)
//    cout<<"can't insert "<<endl;
//    else{
//    int ele ;
//    cout<<"enter the inserting element"<<endl;
//    cin>>ele;
//    insert(arr , n , loc,ele);
//    }

    int delEle;
    cout<<"enter the deleteing element "<<endl;
    cin>>delEle;
    Delete(arr, n , delEle);
    return 0 ;

}
