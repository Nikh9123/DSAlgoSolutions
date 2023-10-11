#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
  vector<int>temp;
  int n = nums1.size(); int m = nums2.size();
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (nums1[i] <= nums2[j] && temp.back() != nums1[i] && !temp.empty())
    {
      temp.push_back(nums1[i]);
      i++;
    }
    else if (nums2[j] <= nums1[i] && temp.back() != nums2[j] && !temp.empty())
    {
      temp.push_back(nums2[j]);
      j++;
    }
    else
    {
      j++;
      i++;
    }
  }
  while (i < n)
  {
    temp.push_back(nums1[i]);
    i++;
  }
  while (j < m)
  {
    temp.push_back(nums2[j]);
    j++;
  }
  int n1 = temp.size();
  int mid = n1 / 2;
  double median = -1;
  if (n % 2 == 0)
  {
    median = (temp[mid - 1] + temp[mid]) / 2;
  }
  else
  {
    median = temp[mid] / 2;
  }
  return median;

}
int main()
{
vector<int>arr1 = {1,3} ;
vector<int>arr2 = {2} ;
double ans = findMedianSortedArrays(arr1,arr2) ;
cout<<ans<<endl;
}