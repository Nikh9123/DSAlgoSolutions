#include<bits/stdc++.h>
using namespace std ;

pair<int ,int> countPair(int arr[], int n)
{
int count = 1 , element=0;
for(int i = 0 ; i < n-1 ; i++)
{
  if(arr[i] == arr[i+1])
  {
    count++ ;
    element  = arr[i];
  }
  else if(element !=0){
    return{element, count};
  }
}
return {-1,-1};
}
int main(){
int n = 10 ;
int arr[n] ={2,3,4,5,5,5,5,10,12,23};
pair<int , int>ans = countPair(arr ,n);
cout<<ans.first<<" "<<ans.second;
return 0 ;
}