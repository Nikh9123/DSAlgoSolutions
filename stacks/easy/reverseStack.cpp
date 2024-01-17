//reverse stack using recurrsion

#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int x) {
  if (s.empty()) {
    s.push(x);
    return;
  }

  int num = s.top();
  s.pop();
  insertAtBottom(s, x);
  s.push(num);
}

stack<int>getReversedStack(stack<int>& s) {
  if (s.empty()) {
    return s;
  }

  int num = s.top();
  s.pop();
  getReversedStack(s);
  insertAtBottom(s, num);

  return s;
}

int main() {
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  stack<int>t = getReversedStack(s);

  //print stack before reversal 
  cout << "Stack before reversal " << endl;
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  //print reversed stack 
  // cout << "hello" << endl;
  cout << endl;
  cout << "Stack after reversal " << endl;
  while (!t.empty()) {
    cout << t.top() << " ";
    t.pop();
  }
  return 0;
}