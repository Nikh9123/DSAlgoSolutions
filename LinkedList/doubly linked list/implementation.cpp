#include<bits/stdc++.h>
using namespace std;

struct node {
  node* next;
  node* prev;
  char data;
  node(char a) {
    next = NULL;
    prev = NULL;
    data = a;
  }
};

void printNodes(node* head)
{
  // cout << "address of head node : " << &head<<endl;

  node* curr = head;
  cout<<"printing nodes in front order : "<<endl;
  while (curr != NULL)
  {
    // cout << "address of node : " <<curr->next<<endl;
    cout <<curr->data<<"-->";
    curr = curr->next ;
  }
  cout<<"NULL"<<endl;
}


void printNodesInReverse(node *head)
{
  node *curr = head ;

  while(curr->next != NULL)
  {
    curr = curr->next;
  }
}

int main() {
  node* head = new node('a');
  node* temp1 = new node('b');
  node* temp2 = new node('c');
  node* temp3 = new node('d');

  // Connect all next and prev nodes 
  head->prev = NULL;
  head->next = temp1;
  temp1->prev = head;
  temp1->next = temp2;
  temp2->prev = temp1;
  temp2->next = temp3;
  temp3->prev = temp2;
  temp3->next = NULL;

  // Do something with the nodes
  printNodes(head);

  // Free the allocated memory to avoid unnecessary memory leaks
  delete head;
  delete temp1;
  delete temp2;
  delete temp3;

  return 0;
}
