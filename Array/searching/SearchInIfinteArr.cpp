#include <iostream>
using namespace std;
// *search in sorted infinte array
/*
*arr[] = {1,10,15,20,40,60,80,100,200,500,100....♾️};
*x= 100

*O/p = 8
*/

int FirstOccur(int arr[], int n, int x, int low, int high)
{
  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (arr[mid] < x)
    {
      low = mid + 1;
    }
    else if (arr[mid] > x)
    {
      high = mid - 1;
    }
    else
    {
      if (arr[mid] != arr[mid - 1] || mid == 0)
        return mid;
      else
        high = mid - 1;
    }
  }
  return -1 ;
}
int search(int arr[], int x, int n)
{

  //  *naive method , TC = O(pos)
  // int i = 0;

  // while(true) //infinite loop
  // {
  // 	if(arr[i] == x) return i; //so whenever we find element we will immideatly return

  // 	if(arr[i] > x) return -1; //so when we find element greater than the element(which we searching) we will immideatly return -1

  // 	i++;
  // }

  // *efficient method O(log(pos)
  if (arr[0] == x)
    return 0;
  int i = 1;

  // loop will run till searching element is less than array elements (eg: 45 and arr[] = {12,32,36,49} )
  while (arr[i] < x)
    i = i * 2;

  if (arr[i] == x)
    return i;

  // if arr[i] != x then it will present between ( i/2+1 to i-1 )
  return FirstOccur(arr, n, x, (i / 2) + 1, i - 1);
}

int main()
{

  int arr[] = {5, 10, 10, 15, 20, 20, 20};
  int n = sizeof(arr) / sizeof(arr[0]);
  // cout << "size  = " << n << endl;
  int x = 20;

  cout << search(arr, x, n);

  return 0;
}