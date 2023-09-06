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
node* insertAtEnd(node* head, int x)
{
  node* temp = new node(x);
  node* curr = head;
  if (head == NULL)
  {
    return temp;
  }
    while (curr->next != NULL)
  {
    cout << curr->data << "-->";
    curr = curr->next;
  }
    curr->next = temp;
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
  cout << "after function" << endl;
  display(head);
}