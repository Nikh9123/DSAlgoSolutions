#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  string removeKdigits(string num, int k) {
    stack<char> st;
    for (char c : num) {

      while (!st.empty() && k > 0 && st.top() > c) { // pop stack top element if top element is greater than c because it is the staring of deep 
        k--;
        st.pop();
      }

      if (!st.empty() || c != '0') { // c!= '0' for not pushing 0 in the bottom of stack because whn we pop elements from stack, we have to remove all the leading zeros and push every element in stack
        st.push(c);
      }
    }

    while (!st.empty() && k > 0) { // eg : 456 and k = 4 then return 0 
      st.pop();
      k--;
    }

    string ans = "";


    while (!st.empty()) { // store the value in ans string 
      ans += st.top();
      st.pop();
    }

    reverse(ans.begin(), ans.end()); //reverse the ans before return because while poping the string we got a reversed string we have to return original string

    return ans.empty() ? "0" : ans;
  }
};

int main() {
  Solution s;
  // string num = "1432219";
  // string num = "14301620";
  string num = "10";
  int k = 4; 
  string ans = s.removeKdigits(num, k);
  cout << "smallest digit after removing = " << ans << endl;
  return 0;
}