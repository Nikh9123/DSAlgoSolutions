#include<bits/stdc++.h>
using namespace std;

// Definition for a singly-linked list node
struct node
{
  int data;
  node* next;
  node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

// Function to print the elements of the linked list
void printList(node* head)
{
  node* curr = head;
  while (curr != NULL)
  {
    cout << curr->data << "->";
    curr = curr->next;
  }
  cout << "NULL" << endl;  // Indicate the end of the list
}

// Function to remove the N-th node from the end of the linked list
node* removeNthNodeFromEnd(node* head, int n)
{
  //* Approach 1: Calculate length first (O(2n) approach)

  /*
  if (head == NULL)
  {
    return NULL;
  }
  node* curr = head;
  int cnt = 0;
  while (curr != NULL)
  {
    cnt++;
    curr = curr->next;
  }
  cout << "Length of the list: " << cnt << endl;
  int remEleIndex = cnt - n;
  cout << "Index to be removed from the end: " << remEleIndex << endl;
  node* start = head;
  int startIndex = 1;
  if (remEleIndex == -1)
  {
    return NULL;
  }
  if (remEleIndex == 0)
  {
    head = head->next;
    return head;
  }
  while (startIndex != remEleIndex)
  {
    startIndex++;
    start = start->next;
  }
  cout << "Node to be removed: " << start->data << endl;
  start->next = start->next->next;
  return head;
  */

  //* Approach 2: Slow and fast pointer approach (Optimized, O(n) approach)

  if (head == NULL)
  {
    return NULL;
  }
  
  node* slow = head;
  node* fast = head;

  // Move the fast pointer ahead by 'n' positions
  for (int i = 0; i < n; i++)
  {
    fast = fast->next;
  }

  // If 'fast' becomes NULL, it means the first element needs to be removed
  if (fast == NULL)
  {
    head = head->next;
    return head;
  }

  // Move both pointers until 'fast' reaches the end
  while (fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next;
  }

  // Remove the N-th node from the end
  slow->next = slow->next->next;

  return head;
}

int main()
{
  // Create a linked list: 10 -> 20 -> 30 -> 40 -> 50
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);

  // Print the original linked list
  cout << "Original Linked List: ";
  printList(head);

  // Remove the 5th node from the end
  head = removeNthNodeFromEnd(head, 5);

  // Print the modified linked list
  cout << "Linked List after removal: ";
  printList(head);

  return 0;
}
