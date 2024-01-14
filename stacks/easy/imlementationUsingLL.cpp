#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;

  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//implementing stack using linked list
class Stack {
  ListNode* top;
  int size;
public:
  Stack() {
    top = nullptr;
    size = 0;
  }

  void push(int num) {
    ListNode* temp = new ListNode(num);
    //inserting at the beginning
    temp->next = top;
    top = temp;
    size++;
  }

  int pop() {
    if (top == nullptr) return -1;
    int num = top->val;
    top = top->next;
    size--;
    return num;
  }

  int topVal() {
    if (top == nullptr) return -1;
    return top->val;
  }

  int isEmpty() {
    if (top == nullptr) return 1;
    else return 0;
  }

  int isFull() {
    return 0;
  }
};

int main() {
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout << s.topVal() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
}