#include<bits/stdc++.h>
using namespace std;

// Define a structure for a node in the linked list
struct ListNode
{
  int data;
  ListNode* next;
  ListNode() :data(0), next(NULL) {}
  ListNode(int data)
  {
    this->data = data;
    next = NULL;
  }
};

// Function to print the elements of the linked list
void printList(ListNode* head)
{
  ListNode* curr = head;
  while (curr != NULL)
  {
    cout << curr->data << "->";
    curr = curr->next;
  }
  cout << "NULL" << endl;  // Indicate the end of the list
}

// Function to merge two sorted linked lists
ListNode* mergeList(ListNode* left, ListNode* right)
{
  // Create a dummy node to simplify the code
  ListNode* ptr = new ListNode(0);
  ListNode* curr = ptr;

  // Merge the two lists in sorted order
  while (left != NULL && right != NULL)
  {
    if (left->data <= right->data)
    {
      curr->next = left;
      curr = left;
      left = left->next;
    }
    else
    {
      curr->next = right;
      curr = right;
      right = right->next;
    }
  }

  // If one list is longer than the other, append the remaining nodes
  while (left != NULL)
  {
    curr->next = left;
    curr = left;
    left = left->next;
  }

  while (right != NULL)
  {
    curr->next = right;
    curr = right;
    right = right->next;
  }

  // Move to the actual start of the merged list
  curr = ptr->next;

  // Free the memory occupied by the dummy node
  delete ptr;

  return curr;
}

// Function to perform merge sort on a linked list
ListNode* sortList(ListNode* head)
{
  // Base case: If the list is empty or has only one element, it is already sorted
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  // Initialize pointers for finding the middle of the list
  ListNode* slow = head;
  ListNode* fast = head;
  ListNode* temp = NULL;

  // Find the middle of the list using the slow and fast pointers
  while (fast != NULL && fast->next != NULL)
  {
    temp = slow;
    slow = slow->next;
    fast = fast->next->next;
  }

  // Divide the list into two halves
  temp->next = NULL;

  // Recursively sort the two halves
  head = sortList(head);
  slow = sortList(slow);

  // Merge the sorted halves
  head = mergeList(head, slow);

  return head;
}

// Main function
int main()
{
  // Create a linked list: 50 -> 20 -> 10 -> 30 -> 40
  ListNode* head = new ListNode(50);
  head->next = new ListNode(20);
  head->next->next = new ListNode(10);
  head->next->next->next = new ListNode(30);
  head->next->next->next->next = new ListNode(40);

  // Print the original linked list
  cout << "Original Linked List: ";
  printList(head);

  // Sort the linked list using merge sort
  head = sortList(head);

  // Print the sorted linked list
  cout << "Sorted Linked List: ";
  printList(head);

  return 0;
}
