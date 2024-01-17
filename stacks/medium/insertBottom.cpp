#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
  void insertBottom(stack<int>& s, int x) {
    if (s.empty()) {
      s.push(x);
      return;
    }

    int num = s.top();
    s.pop();
    insertBottom(s, x);
    s.push(num);
  }
};


int main() {
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  Stack st;
  st.insertBottom(s, 9);

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}