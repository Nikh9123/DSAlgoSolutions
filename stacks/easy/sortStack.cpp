#include <bits/stdc++.h>
using namespace std;

void insertAtSortedOrder(stack<int>& s, int num) {
  if (s.empty() || s.top() <= num) {
    s.push(num);
    return;
  }

  int n = s.top();
  s.pop();
  insertAtSortedOrder(s, num);
  s.push(n);
}

void sortStack(stack<int>& s) {
  if (s.empty()) {
    return;
  }

  int num = s.top();
  s.pop();

  sortStack(s);
  insertAtSortedOrder(s, num);
}

int main() {
  stack<int> s;

  s.push(4);
  s.push(1);
  s.push(3);
  s.push(10);
  s.push(6);
  s.push(5);

  sortStack(s);

  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }

  return 0;
}
