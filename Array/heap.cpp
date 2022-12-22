using namespace std ;
#include<bits/stdc++.h>

void maxHeapify(int arr[]  , int n , int i)
{
    int largest = i ;
    int l = 2*i+1 ;//left child(node)
    int r = 2*i+2 ;//right child(node)

    if(l < n && arr[l] && arr[l] > arr[largest])
    {
        largest = l ;
    }
    if(r < n && arr[r] > arr[largest])
    {
        largest = r ;
    }
    if(largest != i)
    {
        swap(arr[i] , arr[largest]);
         maxHeapify(arr , n ,largest);
    }
   
    
}
void HeapSort(int arr[] , int n)
{
    for(int i = n/2-1 ; i >=0 ;i--)
    {
        maxHeapify(arr , n , i);
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        swap(arr[0] , arr[i]);
        maxHeapify(arr , i , 0);
    }
}
int main()
{
//    int a[] = {5,9,74,25,36,14,25};
//    int n = sizeof(a)/sizeof(a[0]);
//
//    HeapSort(a , n);
//    cout<<"after sorting element:"<<endl;
//    for(int i=0 ; i < n ; i++)
//    cout<<a[i]<<" ";
int a[50];
cout<<"enter n sie of array"<<endl;
int n ;
cin>>n;
for(int  i=0 ; i < n ; i++)
cin>>a[i] ;
    HeapSort(a , n);
    cout<<"after sorting element:"<<endl;
    for(int i=0 ; i < n ; i++)
    cout<<a[i]<<" ";    


}
