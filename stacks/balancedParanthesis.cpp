#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isBalancedParanthesis(string str) {
    stack<char>s;
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
        s.push(str[i]);
      }
      else {
        if (s.empty()) return false;
        else if (s.top() == '(' && str[i] == ')') {
          s.pop();
        }
        else if (s.top() == '{' && str[i] == '}') {
          s.pop();
        }
        else if (s.top() == '[' && str[i] == ']') {
          s.pop();
        }
        else {
          return false;
        }
      }
    }
    
    if(s.empty()) return true ;
    return false ;
  }
};

int main() {
  Solution s;
  string str = "{([])}";

  if (s.isBalancedParanthesis(str)) {
    cout << "Balanced" << endl;
  }
  else {
    cout << "Not Balanced" << endl;
  }
  return 0;
}