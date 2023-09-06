#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

int main()
{
  
  Node *head = new Node(10);
  Node *temp1 = new Node(20);
  Node *temp2 = new Node(30);
  Node *temp3 = new Node(40);
  head->next = temp1;
  temp1->next = temp2;
  temp2->next = temp3;
  temp3->next = NULL;
  cout<<"address of head "<<head<<endl;
  // cout<<"address of temp1 "<<temp1<<endl;
  cout<<"address of head->next "<<head->next<<endl;
  // cout<<head; //* it will print address
  // head->next = new Node(20);
  // cout<<head->next;//* it will print address
  // head->next->next = new Node(30);
  // head->next->next->next = new Node(40);
  
  return 0 ;
}