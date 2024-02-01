#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int LCSof3(string A, string B, string C, int n1, int n2, int n3)
  {
    vector<string> dp;
    dp.push_back(A);
    dp.push_back(B);
    dp.push_back(C);

    string s = dp[0];
    cout << "s = " << s << endl;
    int cnt = 0, maxCnt = 0;
    for (string str : dp) {
      if (s == str) continue;
      int i = 0;
      cnt = 0;
      while (i < s.size() && i < str.size()) {
        if (s[i] == str[i]) {
          cout << "s[i] = " << s[i] << " str[i] = " << str[i] << endl;
          // i++;
          cnt++;
          cout << "cnt = " << cnt << endl;
        }
        else {
          cnt = 0;
        }
        i++;
      }

      maxCnt = max(cnt, maxCnt);

    }
    return maxCnt;
  }
};

int main() {
  // string A = "geeks";
  // string B = "geeksfor";
  // string C = "geeksforgeeks";
  string A = "abcde";
  string B = "fghi";
  string C = "jklm";
  int n1 = A.size();
  int n2 = B.size();
  int n3 = C.size();

  Solution s;
  cout << s.LCSof3(A, B, C, n1, n2, n3) << endl;
  return 0;
}