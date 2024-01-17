#include<bits/stdc++.h>
using namespace std;

//define the precedence of operators
int precedence(char c) {
  if (c == '^') {
    return 3;
  }
  else if (c == '*' || c == '/') {
    return 2;
  }
  else if (c == '+' || c == '-') {
    return 1;
  }
  else {
    return -1;
  }
}

string infixToPostfix(string exp) {
  stack<char> st;
  string postfix = "";
  for (int i = 0; i < exp.length(); i++) {
    if (exp[i] == '(') {
      st.push(exp[i]);
    }
    else if (exp[i] == ')') {
      while (!st.empty() && st.top() != '(') {
        postfix += st.top();
        st.pop();
      }
      if (!st.empty()) { // to remove the opening bracket '('
        st.pop();
      }
    }
    else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^') {
      while (!st.empty() && (st.top() != '(') && precedence(st.top()) >= precedence(exp[i]) ) {
        postfix += st.top();
        st.pop();
      }
      st.push(exp[i]);
    }
    else {
      postfix += exp[i];
    }
  }
  while(st.empty() == false) {
    postfix += st.top();
    st.pop();
  }
  return postfix;
}

int main() {
  // string s = "(A+B/C*(D+E)-F)";
  string s = "3^(1+1)";

  string postfix = infixToPostfix(s);

  cout << "postfix of " << s << " is : " << postfix << endl;
}