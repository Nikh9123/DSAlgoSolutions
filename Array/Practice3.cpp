using namespace std ;
#include<bits/stdc++.h>
void BubbleSort(int arr[] , int n)
{
for(int i = 0 ; i < n ; i++)
{
    int mini = i ;
    for(int j = i+1 ; j < n ; j++)
    {
        if(arr[j] < arr[mini]){
        mini = j;
        }
    }
    swap(arr[mini],arr[i]);
}
}

int main()
{
    int n = 5 ;
    int arr[n] = {4,3,57,42,46};
    BubbleSort(arr ,n);
    for(int i = 0 ;i < n ; i++)
    cout<<arr[i]<<" ";
}