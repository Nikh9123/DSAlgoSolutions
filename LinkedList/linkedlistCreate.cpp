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
  // Node *temp1 = new Node(20);
  // Node *temp2 = new Node(30);
  // head->next = temp1;
  // head->next = temp2;
  // temp2->next = NULL;
  cout<<head; //* it will print address
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  
  return 0 ;
}