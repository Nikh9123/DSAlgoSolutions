#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
  int mid = s + (e - s) / 2;
  int len1 = mid - s + 1;
  int len2 = e - mid;

  int *first = new int[len1];
  int *second = new int[len2];

  int mainArrayIndex = s;
  for (int i = 0; i < len1; i++)
    first[i] = arr[mainArrayIndex++];

  for (int i = 0; i < len2; i++)
    second[i] = arr[mainArrayIndex++];

  mainArrayIndex = s;
  int index1 = 0;
  int index2 = 0;

  while (index1 < len1 && index2 < len2)
  {
    if (first[index1] < second[index2])
    {
      arr[mainArrayIndex++] = first[index1++];
    }
    else
    {
      arr[mainArrayIndex++] = second[index2++];
    }
  }
  while (index1 < len1)
    arr[mainArrayIndex++] = first[index1++];

  while (index2 < len2)
    arr[mainArrayIndex++] = second[index2++];
}

void mergeSort(int arr[], int s, int e)
{
  if (s >= e)
    return;

  int mid = s + (e - s) / 2;
  // left wala part
  mergeSort(arr, s, mid);// this will divide the left part

  // right wala part
  mergeSort(arr, mid + 1, e);// this will divide the right part

  // sort them and copy
  merge(arr, s, e);// this will sort the left and right part and copy them in the main array
}

int main()
{
  int n = 10 ;
  int arr[n] = {12,3,1,34,14,56,7,2,22,33};
  mergeSort(arr , 0 ,n-1);

  for(int i=0; i < n ; i++){
    cout<<arr[i]<<" ";
  }
}