#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<string> letterCasePermutation(string s) {
    vector<string> ans;
    bool flagUper = false;
    bool flagLower = false;
    for (int i = s.length()-1; i >= 0 ; i--) {
      if (isalpha(s[i])) {
        ans.push_back({ s });

        //modify the string if the character is an alphabet and it is in lowercase then convert it to uppercase and vice versa
        if (islower(s[i])) {
          s[i] = toupper(s[i]);
          flagUper = true;
        }
        else {
          s[i] = tolower(s[i]);
          flagLower = true;
        }
        ans.push_back({ s });
        //store the original string in s
        if (flagUper) {
          s[i] = tolower(s[i]);
          flagUper = false;
        }
        else {
          s[i] = toupper(s[i]);
          flagLower = false;
        }

      }
    }
    return ans;
  }
};

int main() {
  string s = "3Z4";
  Solution obj;
  vector<string>ans = obj.letterCasePermutation(s);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}