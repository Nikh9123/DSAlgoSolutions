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
    cout << curr->data << "->";
    curr = curr->next;
  }
  cout << endl;
}

node *insertAtPosition(node *head , int x)
{
  
}
int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);
  display(head);
}