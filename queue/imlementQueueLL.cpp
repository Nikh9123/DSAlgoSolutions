#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* next;
  Node() : data(0), next(nullptr) {}
  Node(int x) : data(x), next(nullptr) {}
  Node(int x, Node* next) : data(x), next(next) {}
};

struct Queue {
  Node* front;
  Node* rear;
  void push(int);
  int pop();
  void display();
  Queue() {
    front = rear = NULL;
  }

};

void Queue::push(int x) {
  Node* temp = new Node(x);
  if (front == NULL && rear == NULL) {
    front = rear = temp;
  }
  rear->next = temp;
  rear = temp;
}

int Queue::pop() {
  int num = -1;
  if (front != NULL) {
    num = front->data ;
    front = front->next ;
  }
  return num;
}

int main() {
  Queue q ;

  for(int i = 0 ; i < 10 ; i++){
    q.push(i+1) ;
  }

  for(int i = 0 ; i < 10 ; i++){
    cout << q.pop() << endl ;
  }

}