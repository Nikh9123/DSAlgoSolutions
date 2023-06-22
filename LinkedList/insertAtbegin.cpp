#include <bits/stdc++.h>
using namespace std;
struct node
{
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
  cout << "NULL" << endl;
}
node* insertAtBegin(node* head, int x)
{
  node* temp = new node(x);
  temp->next = head;
  head = temp;
  return head;
}

int main()
{
  node* head = new node(19);
  display(head);
  int x;
  cout << "Enter the element you want to insert at begin" << endl;
  cin >> x;
  head = insertAtBegin(head, x);

  display(head);
}