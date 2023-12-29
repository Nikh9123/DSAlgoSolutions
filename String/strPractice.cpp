#include<bits/stdc++.h>
using namespace std;

//"(()())(())(()(()))";

class Solution {
public:
  string removeOuterParentheses(string s) {
    int cnt = 0;
    bool flag = true;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(' && cnt == 0)
      {
        cnt = 1;
        continue;
      }
      else if (s[i] == ')' && cnt == 1)
      {
        cnt = 0;
        continue;
      }
      else if (s[i] == '(')
      {
        cnt++;
        ans += s[i];
      }
      else if (s[i] == ')')
      {
        ans += s[i];
        cnt--;
      }
      else {
        continue;
      }

    }
    return ans;
  }
};

int main()
{
  Solution sol;
  string s = "(()())(())(()(()))";
  cout << sol.removeOuterParentheses(s) << endl;
  return 0;
}