/*
*@https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
*/

using namespace std;
#include <bits/stdc++.h>
int SearchInSortedRotedArr(int arr[], int n, int x)
{

	//* Naive method linear search TC =  O(n)
	// for (int i = 0; i < n; i++)
	// {
	// 	if (arr[i] == x)
	// 		return i;
	// }


	/*
	* EFFICIENT  METHOD
	* TC = O(log n)
	* so in sorted and rotated array there must be a case where left and right half of the array is sorted
	todo : first come to left part by checking  arr[low] < arr[mid]
	todo : then compare the arr[i] wether it is present in left half by : { arr[mid] > x && arr[low] <= x } 
	todo : if arr[i] is in left then discard right part by : high = mid-1 ;
	todo : else go to next half by : low = mid+1

	todo : if arr[i] is not present in left half then come to left part by using : if(left half)  else(right half)
	todo : then compare arr[i] wether it is present in right half or not by : { arr[mid] < x && arr[high] >= x }
	todo : right part : low = mid + 1
	todo : else go to left part :  high = mid-1
	*/
int low = 0 , high = n-1 ;
while(low <= high)
{
	int mid = low +  (high -low)/2 ;
	if(arr[mid] == x)
	return mid ;

	if(arr[low] < arr[mid])//*condition for left half eg:arr[mid] = 400 ,arr[low] = 100 : arr[mid] > arr[low] so left half is sorted 
	{
		if(arr[mid] > x && arr[low] <= x )
		high = mid-1 ; //* we discard right half and search in left half
		else
		low = mid+1 ; //* we go to right half
	}
	else{
		if(arr[mid] < x && arr[high] >= x)
		low = mid+1 ;
		else
		high = mid-1 ;
	}
}
	return -1;
}

int main()
{
	int n = 6, arr[n] = {100, 200, 400, 1000, 10, 20};
	cout << SearchInSortedRotedArr(arr, n, 10);
}