#include <bits/stdc++.h>
using namespace std;

// bool checkArraySortedAndRotated(int arr[], int n)
// {


// // //1) find minimum
// // int min = INT_MAX ;
// // int minIndex = 0 ;
// // bool value = true ;
// // for(int i = 0 ; i < n ; i++)
// // {
// //   if(arr[i] < min)
// //   {
// //     minIndex = i ;
// //     min = arr[i] ;
// //   }
// // }

// // //2) find increasing and decreasing with the refernce of minimum
// // for(int i = minIndex  ; i < n ; i++)
// // {
// //   if(arr[i] > arr[i+1])
// //   {
// //     value = false ;
// //     return value;
// //   }
// // }

// // for(int i = 1 ; i < minIndex ; i++)
// // {
// //   if(arr[i-1] > arr[i])
// //   {
// //     value = false ;
// //     return value ;
// //   }
// // }

// // //check last and first 
// // if(arr[0] < arr[n-1])
// // {
// //   return false ;
// // }
  
// //   return true  ;



// }

bool checkArraySortedAndRotated(int arr[], int n){
  /*
Take two variables to say x and y, initialized as 0
Now traverse the array
If the previous element is smaller than the current, increment x by one
Else increment y by one.
After traversal, if y is not equal to 1, return false.
Then compare the last element with the first element (0th element as current, and last element as previous.) i.e. if the last element is greater increase y by one else increase x by one
Again check if y equals one return true. i.e. Array is sorted and rotated. Else return false
*/

int x =0 , y= 0;

for(int i = 0; i <n ; i++)
{
  if(arr[i] > arr[i+1])
  {
    y++ ;
  }else{
    x++ ;
  }
}

}
int main()
{
  // int arr[7] = {1,2,3,4,5,6,7};
  int arr[3] = {10,20,14};
  cout<<checkArraySortedAndRotated(arr,3);

}