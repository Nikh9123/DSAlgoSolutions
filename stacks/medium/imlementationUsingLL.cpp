#include<bits/stdc++.h>
using namespace std;

// Define a node for the linked list
struct ListNode {
  int val;        // Value of the node
  ListNode* next; // Pointer to the next node

  // Constructors for the node
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Class to implement a stack using a linked list
class Stack {
  ListNode* top; // Pointer to the top of the stack
  int size;      // Size of the stack

public:
  // Constructor to initialize an empty stack
  Stack() {
    top = nullptr;
    size = 0;
  }

  // Function to push a value onto the stack
  void push(int num) {
    ListNode* temp = new ListNode(num); // Create a new node
    temp->next = top;                   // Set the new node's next to the current top
    top = temp;                         // Set the new node as the top of the stack
    size++;                             // Increase the size of the stack
  }

  // Function to pop a value from the stack
  int pop() {
    if (top == nullptr) return -1; // If the stack is empty, return -1
    int num = top->val;            // Get the value from the top of the stack
    top = top->next;               // Set the next node as the top of the stack
    size--;                        // Decrease the size of the stack
    return num;                    // Return the popped value
  }

  // Function to get the value at the top of the stack
  int topVal() {
    if (top == nullptr) return -1; // If the stack is empty, return -1
    return top->val;               // Return the value at the top of the stack
  }

  // Function to check if the stack is empty
  int isEmpty() {
    if (top == nullptr) return 1; // If the stack is empty, return 1
    else return 0;                // Otherwise, return 0
  }

  // Function to check if the stack is full
  // Since we're implementing the stack with a linked list, it can never be full
  int isFull() {
    return 0;
  }
};

int main() {
  Stack s;        // Create a new stack
  s.push(1);      // Push values onto the stack
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout << s.topVal() << endl; // Print the value at the top of the stack
  cout << s.pop() << endl;    // Pop values from the stack and print them
  cout << s.pop() << endl;
  cout << s.pop() << endl;
}