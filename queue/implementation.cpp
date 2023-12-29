#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
  int rear, front, size;
  int* a; // pointer array to store the elements of the queue.
  Queue(int capacity)
  {
    this->size = capacity;
    a = new int[size];
    rear = front = -1; // initially both rear and front are -1. pointing to start which is nothing.

  }
  // Check if the queue is empty.
  bool isEmpty()
  {
    if (front == rear)
    {
      return true;
    }
    return false;
  }
  // Check if the queue is full.
  bool isFull()
  {
    if (rear == size - 1) {
      cout << "Queue is full" << endl;
      return true;
    }
    return false;
  }
  // Enqueue (add) element 'num' at the end of the queue.
  void enqueue(int num)
  {
    if (!isFull())
    {
      if (front == -1) front++;
      
      rear++;
      a[rear] = num;
    }
    else {
      cout << "Queue is full" << endl;
      return;
    }
  }
  // Dequeue (retrieve) the element from the front of the queue.
  int dequeue()
  {
    int num;
    if (!isEmpty())
    {
      num = a[front];
      front++;
      return num;
    }
    else {
      cout << "Queue is empty" << endl;
      return -1;
    }
  }
  // Return the element present at the front of the queue.
  int peek()
  {
    if (!isEmpty())
    {
      return a[front];
    }
    else {
      cout << "Queue is empty" << endl;
      return -1;
    }
  };
};

int main()
{
  int n = 5;
  Queue q(n);

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);

  cout << " size of queueu is : " << q.size << endl;
  cout << " front element is : " << q.peek() << endl;

  cout << " dequeued element is : " << q.dequeue() << endl;
  cout << " dequeued element is : " << q.dequeue() << endl;
  cout << " dequeued element is : " << q.dequeue() << endl;
  cout << " dequeued element is : " << q.dequeue() << endl;
  cout << " dequeued element is : " << q.dequeue() << endl;

  cout << " is queue empty : " << q.isEmpty() << endl;
  cout << " is queue full : " << q.isFull() << endl;

  return 0;
}