#include <bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};


void display(node *head)
{
  node *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << "-->";
    curr = curr->next;
  }
  cout << "NULL" << endl;
}
node *InsertAtBegin(node *head, int x)
{
  node *temp = new node(x);
  temp = head;
  return temp;
}

int main()
{
  node *head = new node(19);
  display(head);
  int x;
  cout << "Enter the element you want to insert at begin" << endl;
  cin >> x;
  head = InsertAtBegin(head, x);
  
}