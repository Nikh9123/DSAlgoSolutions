#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
  int eveluateExp(int num1, int num2, string token) {
    if (token == "+") {
      return num1 + num2;
    }
    if (token == "-") {
      return num1 - num2;
    }
    if (token == "*") {
      return (long)num1 * (long)num2;
    }
    if (token == "/") {
      return num1 / num2;
    }

    return -1;
  }

  int evalRPN(vector<string>& tokens) {
    stack<int> st;

    for (auto token : tokens) {
      if(token == "+" || token == "-" || token == "*" || token == "/")
      {
      int num2 = st.top(); // First pop num2
      st.pop();
      int num1 = st.top(); // Then pop num1
      st.pop();
      int result = eveluateExp(num1, num2, token);
      st.push(result);
      }
      else{
        st.push(stoi(token)) ;
      }
    }
    return st.top();
  }
};

int main() {
  vector<string>tokens = { "10","6","9","3","+","-11","*","/","*","17","+","5","+" };
  // vector<string>tokens = { "0","3","/" };

  Solution s;
  cout << s.evalRPN(tokens) << endl;
  return 0;
}