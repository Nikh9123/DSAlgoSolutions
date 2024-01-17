#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:

  stack<int> st1, st2;
  MyQueue() {

  }

  void push(int x) {
      st1.push(x);
    
  }

  int pop() {

    while (!st1.empty()) {
      st2.push(st1.top());
      st1.pop() ;
    }
    int ans = st2.top() ;
    st2.pop() ;

    while(!st2.empty()){
      st1.push(st2.top());
      st2.pop();
    }
    return ans ;
  }

  int peek() {
    while (!st1.empty()) {
      st2.push(st1.top());
      st1.pop() ;
    }
    int ans = st2.top() ;

    while(!st2.empty()){
      st1.push(st2.top());
      st2.pop();
    }
    return ans ;
  }

  bool empty() {
    return st1.size() + st2.size() == 0 ;
  }
};

int main() {
  MyQueue m = MyQueue();

}