#include<bits/stdc++.h>
using namespace std;

void printGroups(int arr[], int n)
{
    int count1 = 0, count0 = 0 ;
   for(int i = 1 ; i < n ; i++)
   {
     if(arr[i] != arr[i-1])
     {
        if(arr[i] != arr[0])
        {
            cout<<"from "<<i << " to ";
        }
        else{
            cout<<i-1<<endl;
        }
     }
   }

   //to handle the last element case if it is nor equal to first element [0,0,1,,1,0,0,1,1,0,1]

   if(arr[n-1] != arr[0])
   {
    cout<<n-1<<endl;
   }
}



int main() {
	
     int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0,1}, n = 10;

     printGroups(arr, n);
    
}