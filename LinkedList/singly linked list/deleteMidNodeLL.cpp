#include<bits/stdc++.h>
using namespace std;

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

ListNode* removeMidNode(ListNode* head)
{
  ListNode* start = new ListNode();
  start->next = head;
  ListNode* fast = start;
  ListNode* slow = start;
  cout << "slow->data : " << slow->data << endl;

  while (fast->next != NULL && fast->next->next != NULL)
  {
    slow = slow->next;
    cout << "slow->data : " << slow->data << endl;
    fast = fast->next->next;
    cout << "fast->data : " << fast->data << endl;
  }
  slow->next = slow->next->next;
  return head;
}

int main()
{
  // Create a linked list: 10 -> 20 -> 30 -> 40 -> 50
  ListNode* head = new ListNode(10);
  head->next = new ListNode(20);
  head->next->next = new ListNode(30);
  head->next->next->next = new ListNode(40);
  head->next->next->next->next = new ListNode(50);

  // Print the original linked list
  cout << "Original Linked List: ";
  printList(head);

  // Remove the 5th node from the end
  head = removeMidNode(head);

  // Print the modified linked list
  cout << "Linked List after removal: ";
  printList(head);

  return 0;
}
