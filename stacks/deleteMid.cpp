#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
  void solve(stack<int>& s, int mid, int count) {
    if (count == mid) {
      s.pop();
      return;
    }

    int num = s.top();
    s.pop();
    solve(s, mid, count + 1);
    s.push(num);
  }
  void deleteMid(stack<int>& st) {
    int size = st.size();
    int mid = size / 2;
    // cout << mid << endl;

    solve(st, mid, 0);

  }
};

int main() {
  stack<int>st;
  st.push(1);
  st.push(2);
  // st.push(3);
  st.push(4);
  st.push(5);

  MyStack s;
  s.deleteMid(st);

  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
}