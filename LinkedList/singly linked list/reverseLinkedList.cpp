#include<bits/stdc++.h>
using namespace std;

// Node class representing a node in a linked list
class LinkedList
{
public:
  int data;          // Data stored in the node
  LinkedList* next;  // Pointer to the next node in the list

  // Constructors
  LinkedList()
  {
    this->data = 0;
    next = NULL;
  }

  LinkedList(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  LinkedList(int data, LinkedList* next)
  {
    this->data = data;
    this->next = next;
  }
};

// Function to reverse a linked list
LinkedList* Reverse(LinkedList* head)
{
  LinkedList* prev = NULL;           // Previous node initialized to the head
  LinkedList* curr = head;     // Current node initialized to the second node
  LinkedList* nextNode =  curr->next;    // Next node initialized to null initially


  // Loop through the list and reverse the links
  while (curr != NULL)
  {
    curr->next = prev;               // Reverse the link
    prev = curr;                    // Move prev and curr one step forward
    curr = nextNode;
    if (nextNode != NULL)
      nextNode = nextNode->next;    // Move nextNode one step forward if not null
  }
  // return prev;                       // Return the new head of the reversed list
  head = prev;
  return head;
}

// Function to print the linked list
void printLinkedList(LinkedList* head)
{
  LinkedList* temp = head;

  // Traverse the list and print the data in each node
  while (temp != NULL)
  {
    cout << temp->data << "-->";
    temp = temp->next;              // Move to the next node
  }
  cout << endl;
}

int main()
{
  // Create a linked list
  LinkedList* head = new LinkedList(10);
  head->next = new LinkedList(20);
  head->next->next = new LinkedList(30);
  head->next->next->next = new LinkedList(40);
  head->next->next->next->next = new LinkedList(50);

  // Print the original linked list
  cout << "Original Linked List: ";
  printLinkedList(head);

  // Reverse the linked list
  head = Reverse(head);

  // Print the reversed linked list
  cout << "Reversed Linked List: ";
  printLinkedList(head);

  return 0;
}
