#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    if (digits[n - 1] != 9)
    {
      digits[n - 1] = digits[n - 1] + 1;
      return digits;
    }

    else if (digits[n - 1] == 9)
    {
      for (int i = n - 1; i >= 0; i--)
      {
        if (digits[i] != 9)
        {
          digits[i]++; //increasing the value of just previous element
          return digits;
        }
        else
        {
          digits[i] = 0;
        }
      }
      // digits.push_back(0);
      digits.insert(digits.begin(), 1);
      return digits;
    }
    return{ -1,-1 };
  }
};
int main()
{
  vector<int>quest = { 9,9 };
  Solution s;
  vector<int>ans = s.plusOne(quest);

  for (auto x : ans)
  {
    cout << x << " ";
  }
}