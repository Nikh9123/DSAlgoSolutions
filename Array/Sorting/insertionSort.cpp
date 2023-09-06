#include <iostream>
#include <algorithm>
using namespace std;

void iSort(int arr[],int n){
    
  for(int i = 1 ; i < n ; i++)
  {
      int key = arr[i];
      for(int j= i-1 ; j >= 0 ; j--)
      {
          if(key < arr[j])
          {
              arr[j+1] = arr[j] ;
              arr[j] = key;
          }
          else {
            break ;
          }
      }
  }
    
}

int main() {
	
    int arr[]={50,20,40,60,10,30};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	iSort(arr,n);
	
	for(auto x: arr)
	    cout<<x<<" ";
}