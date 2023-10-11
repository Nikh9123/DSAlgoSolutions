#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int>& arr) {

    int n = arr.size();
    if (n == 0) return 0;

    //sort the array 
    sort(arr.begin(), arr.end());

    int subSequence = 0, currSmall = INT_MIN, maxSubSequence = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i - 1] == currSmall)
      {
        subSequence++;
        currSmall++;
      }
      else if (arr[i] != currSmall)
      {
        currSmall = arr[i];
        subSequence = 0;
      }
      maxSubSequence = max(maxSubSequence, subSequence+1 );
    }
    return maxSubSequence;
  }
};
int main()
{
  vector<int>question = { 100,4,200,1,3,2};
  Solution s;
  int ans = s.longestConsecutive(question);

  cout << ans << endl;
}