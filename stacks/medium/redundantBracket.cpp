#include<bits/stdc++.h>
using namespace std;

/*
@https://www.codingninjas.com/studio/problems/redundant-brackets_975473
*/

/***
Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets, else return false. The given string only contains ‘(‘, ’)’, ‘+’, ‘-’, ‘*’, ‘/’ and lowercase English letters.

Note :
A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

For Example :
((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless. 
While (a + (b*c)) does not have any pair of redundant brackets. 



 * Input :
 * 2
(a+b)
(a+c*b)+(c))

Sample Output 1 :
No
Yes
 * 
*/

bool checkRedundant(string s) {

  stack<int>st;
  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];

    //
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