#include<bits/stdc++.h>
using namespace std;

// * @https://leetcode.com/problems/valid-parentheses/

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

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