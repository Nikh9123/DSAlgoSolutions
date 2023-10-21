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
  cout << "NULL" << endl;
}

node* insertAtPosition(node* head, int x, int pos)
{
  int count = 1;
  node* temp = new node(x);// creating a new node
  node* curr = head; // curr pointer points to head and traverse tll pos-1
  while (count != pos - 1)
  {
    curr = curr->next;
    count++;
  }
  temp->next = curr->next; //we are inserting the node at pos so we have to make the next of temp to curr->next if we don't do this then we will lose he connection of further nodes
  curr->next = temp; // now we have to make the next of curr to temp because curr is pointing to pos-1 and we have to insert the node at pos so we have to make the next of curr to temp
  return head;
}
int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);

  display(head);

  insertAtPosition(head, 15, 2);
  display(head);
}