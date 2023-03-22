/**
 * *Example 1:

**Input:
**n = 4, arr1[] = [1 3 5 7]
**m = 5, arr2[] = [0 2 6 8 9]
**Output:
**arr1[] = [0 1 2 3]
**arr2[] = [5 6 7 8 9]
**Explanation:
**After merging the two
**non-decreasing arrays, we get,
**0 1 2 3 5 6 7 8 9.


**Example 2:
**
**Input:
**n = 2, arr1[] = [10, 12]
**m = 3, arr2[] = [5 18 20]
**Output:
**arr1[] = [5 10]
**arr2[] = [12 18 20]
**Explanation:
**After merging two sorted arrays
**we get 5 10 12 18 20.
*/

using namespace std;
#include <bits/stdc++.h>

void Merge(long long arr1[], long long arr2[], int n, int m)
{

  //? arr1 me chota aur arr2 me bada element daalna hai. in arr2  small elments are present in first
  //?thats why we are comparing last elements of arr1(greater in arr1) to arr2(starting elements)
  int i = n - 1, j = 0;
  while (i >= 0 && j < m)
  {
    if (arr1[i] > arr2[j])
    {
      swap(arr1[i++], arr2[j--]);
    }
  }
  sort(arr1 , arr1+n);
  sort(arr2 , arr2+m);
}
int main()
{
}