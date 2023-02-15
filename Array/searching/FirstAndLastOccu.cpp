#include <bits/stdc++.h>
using namespace std;

/* if x is present in arr[] then returns the index of
FIRST occurrence of x in arr[0..n-1], otherwise
returns -1 */

//* RECUSRIVE CODE
int first(int arr[], int low, int high, int x, int n)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;
		if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
			return mid;
		else if (x > arr[mid])
			return first(arr, (mid + 1), high, x, n);
		else
			return first(arr, low, (mid - 1), x, n);
	}
	return -1;
}

/* if x is present in arr[] then returns the index of
LAST occurrence of x in arr[0..n-1], otherwise
returns -1 */
int last(int arr[], int low, int high, int x, int n)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;
		if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
			return mid;
		else if (x < arr[mid])
			return last(arr, low, (mid - 1), x, n);
		else
			return last(arr, (mid + 1), high, x, n);
	}
	return -1;
}

//* ITERATIVE CODE

int FisrtIndex(int arr[], int low, int high, int x, int n)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		//* if we found the element then
		if (arr[mid] == x)
		{
			//* if it is present at first index or it is first element
			// todo : return mid
			if (mid == 0 || arr[mid] != arr[mid - 1])
				return mid;
			else
			{
				//* we go to left part
				high = mid - 1;
			}
		}
		else if (arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}
	return -1;
}


int LastIndex(int arr[], int low, int high, int x, int n)
{
	while(low <= high)
	{
		int mid = low + (high-low)/2 ;
		if(arr[mid] == x)
		{
			if(mid == n-1 || arr[mid+1] != arr[mid])
			return mid ;
			else
			low = mid +1 ;
		}
		else if(arr[mid] > x)
		high = mid - 1 ;
		else
		low = mid + 1 ;
	}
}

// Driver program
int main()
{
	int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
	int n = sizeof(arr) / sizeof(int);

	int x = 8;
	printf("First Occurrence = %d\t",
		   first(arr, 0, n - 1, x, n));
	printf("\nLast Occurrence = %d\n",
		   last(arr, 0, n - 1, x, n));

	cout<<"iterative solution first index :" << FisrtIndex(arr, 0, n - 1, x, n)<<" ";
	cout<<"iterative solution last index :" << LastIndex(arr, 0, n - 1, x, n)<<endl;

	return 0;
}
