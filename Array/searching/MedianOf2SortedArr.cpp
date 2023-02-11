using namespace std;
#include <bits/stdc++.h>
double Median(int arr1[], int n1, int arr2[], int n2)
{
  //* check if n > m there swap arras and there size
  if (n1 > n2)
  {
    return Median(arr2, n2, arr1, n1);
  }
  int begin = 0, end = n1;
  while (begin <= end)
  {
    //* dividing arrays in sets using indexex

    // todo : elements which are the part of left set
    int i1 = (begin + end) / 2;

    // todo : elements which are the part of left set
    int i2 = (n1 + n2 + 1) / 2 - i1;

    //* i1 == n1 means : there is nothing in right side
    //* if there is nothing in right side we assign INT_MAX
    //* else arr[i1];
    int min1 = (i1 == n1) ? INT_MAX : arr1[i1];

    //* i1 == 0 means : there is nothing in left side
    //* if there is nothing in left side we assign INT_MIN
    //* else arr[i1-1];
    int max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];

    //* similarly that will be for arr2 set of left and right
    int min2 = (i2 == n2) ? INT_MAX : arr2[i2];
    int max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];

    // todo : now we need to compare min2 with max1 || compare min1 with max2
    //* by comparing this we will get to know when we stop the binary search
    //* if(max1 <= min2 && max2 <= min1) stops the binary search
    if (max1 <= min2 && max2 <= min1)
    {
      // todo : conditons for even size (n1 + n2)
      // todo : we need to return average of two middle elements
      // todo : for finding the middle elements we need to find the maximum of left elements which is max1 and max2
      // todo : AND minimum element in right part which mini(min1 , min2);
      if (n1 + n2 % 2 == 0)
        return ((double)max(max1, max2) + min(min1, min2)) / 2;
      else
      {
        return (double)max(max1, max2);
      }
    }

    //* binary search condition
    if (max1 > min2) // eg: 25 > 20 //* we need to go in right half of to find greater min1 value
      end = i1 - 1;
    else //(min2 < max1) // eg :35<50 //* we need to go to left part of arr1 to find smaller max1 value
      begin = i1 + 1;
  }
}
int main()
{
  int n, m;
  n = 4, m = 5;
  int arr1[n] = {30, 40, 50, 60};
  int arr2[m] = {5, 6, 7, 8, 9};
  cout << Median(arr1, n, arr2, m);
}