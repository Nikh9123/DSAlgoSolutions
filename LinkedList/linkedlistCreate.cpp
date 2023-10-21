#include <bits/stdc++.h>
using namespace std;


//creating a node
struct node {
  int data;
  node* next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};

//iterative function to print the linked list
node printLinkedList(node* head)
{
  node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data <<"--> ";
    temp = temp->next;
  }
  cout << endl;
}

//recusive function to print the linked list
node printLinkedListRecurcive(node *head)
{
  node *temp = head ;
  if(temp == NULL)
  {
    return 0 ;
  }
  cout<<temp->data<<"-->";
  printLinkedList(temp->next);
}

int main()
{
  node* head = new node(10);
  cout << "head->data = " << head->data << endl;
  head->next = new node(20);
  cout << "head->next = " << head->next << endl;// it will print the address of the node of value 20
  cout<<"head->next->next = "<<head->next->next<<endl; // it will print NULL because we have not assigned any node to it
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  printLinkedListRecurcive(head);
  printLinkedList(head);
}