using namespace std;
#include <bits/stdc++.h>

    void shiftZero(int arr[] , int n){
      int res ;

      for(int i = 0 ; i < n ; i++)
      {
        if(arr[i] == 0){
          for(int j = i + 1 ; j < n ; j++)
          {
            if(arr[j] != 0)
            {
              swap(arr[i], arr[j]);
            }
          }
        }
      }
      for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
      }
    }
int main(){
    int n = 8 ;
    int arr[n] = {10,5,0,0,8,0,9,0};
    // int idx ;
    // cin>>idx;
    // for(int i = idx+1 ; i < n ; i++)
    // {
    //   arr[i-1] = arr[i];
    // }
    // n = n-1 ;
    // for(int i = 0 ; i < n ;  i++)
    // {
    //   cout<<arr[i]<<" ";
    // }
shiftZero(arr,n);

}
