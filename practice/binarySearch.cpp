#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n , int key)
{
int start = 0, end = n-1 ;
while(start <= end)
{
  int mid = (start + (end - start))/2 ;

  if(arr[mid] == key)
  {
    return mid ;
  }
  else if(arr[mid] > key)
  {
    end = mid -1 ;
  }
  else if(arr[mid] < key)
  {
    start = mid+1 ;
  }
}
return -1 ;
}

int main() {
int n = 7 ;
int key = 10 ;
int arr[n] = {10,12,14,16,17,19,29}; 
cout<<binarySearch(arr,n,key);
}