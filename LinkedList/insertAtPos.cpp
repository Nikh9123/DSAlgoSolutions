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
  cout<<"NULL" << endl;
}

node *insertAtPosition(node *head , int x , int pos)
{
  int count = pos - 2;
  node* curr = head;
  node* temp = new node(x);
  while (count)
  {
    count--;
    curr = curr->next;
  }
  temp->next = curr->next;
  curr->next = temp;
}
int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);
  
  display(head);
  int a = ceil(3 / 2);
  cout << a << endl;
  insertAtPosition(head, 35, 4);
  display(head);
}