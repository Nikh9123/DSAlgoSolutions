using namespace std;
#include <bits/stdc++.h>

    
int main(){
    int n = 5 ;
    int arr[n] = {1,2,3,4,5};
    int idx ;
    cin>>idx;
    for(int i = idx+1 ; i < n ; i++)
    {
      arr[i-1] = arr[i];
    }
    n = n-1 ;
    for(int i = 0 ; i < n ;  i++)
    {
      cout<<arr[i]<<" ";
    }


}
