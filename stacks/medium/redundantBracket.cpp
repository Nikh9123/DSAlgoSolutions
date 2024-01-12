#include<bits/stdc++.h>
using namespace std;

bool checkRedundant(string s) {
  stack<int>st;
  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      st.push(ch);
    }
    else {
      if (ch == ')') {

        if (st.top() == '(') {
          return true;
        }
        else {
          while (st.top() != '(') {
            st.pop();
          }
          st.pop();
        }
      }
    }
  }
  if(st.empty()){
    return false;
  }
}

int main() {
  string s = "(a+b*(b-a))";

  if (checkRedundant(s)) {
    cout << "string is redundant" << endl;
  }
  else {
    cout << "No redundancy found " << endl;
  }

}