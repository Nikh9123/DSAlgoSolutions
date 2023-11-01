#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
  int suffixMul = 1;
  int prefixMul = 1;
  int maxMul = INT_MIN;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (suffixMul == 0) suffixMul = 1;
    if (prefixMul == 0) prefixMul = 1;
    cout << "i = " << i << endl;
    cout << "suffixMul = " << suffixMul << endl;
    cout << "prefixMul = " << prefixMul << endl;
    prefixMul *= nums[i];
    suffixMul *= nums[n - 1 - i];
    cout << "after multiplication" << endl;
    cout << "i = " << i << endl;
    cout << "suffixMul = " << suffixMul << endl;
    cout << "prefixMul = " << prefixMul << endl;
    maxMul = max(maxMul, max(prefixMul, suffixMul)); //this step will 
    cout << "maxMul = " << maxMul << endl;

  }
  return maxMul;
}

int main()
{
  vector<int>arr = { -2,0,-1 };
  int ans = maxProduct(arr);
  cout << ans << endl;
}