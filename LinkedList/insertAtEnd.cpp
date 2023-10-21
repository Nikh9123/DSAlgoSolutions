#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  node* next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};
void display(node* head)
{
  node* curr = head;
  while (curr != NULL)
  {
    cout << curr->data << "-->";
    curr = curr->next;
  }
  cout << endl;
}

// insert an element at end of linked list
node* insertAtEnd(node* head, int x)
{
  node* temp = new node(x);
  node* curr = head;

  if (head == NULL)
  {
    return temp;
  }

  // we ned to hold the last node of linked list and then add the new node at the end
  while (curr->next != NULL)
  {
    cout << curr->data << "-->";
    curr = curr->next;
  }
  cout << endl;
  curr->next = temp; // adding the new node at the end of linked list
  return head;
}
int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  display(head);
  insertAtEnd(head, 90);
  cout << "after insertion : " << endl;
  display(head);
}