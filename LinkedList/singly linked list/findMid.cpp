#include<bits/stdc++.h>
using namespace std;

/*
Following is the class structure of the Node class:
*/
class Node
{
public:
  int data;
  Node* next;
  Node()
  {
    this->data = 0;
    next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  Node(int data, Node* next)
  {
    this->data = data;
    this->next = next;
  }
};


Node* findMiddle(Node* head) {
  // Write your code here
  // int cnt = 0;
  // Node* temp = head;
  // while (temp != NULL)
  // {
  //   cnt++;
  //   temp = temp->next;
  // }

  // int mid = cnt / 2;

  // cout << "cnt = " << cnt << endl;
  // cout << "mid = " << mid << endl;
  // cnt = 0;
  // temp = head;
  // while (cnt != mid)
  // {
  //   temp = temp->next;
  //   cnt++;
  // }
  // head = temp;
  // return head;
  Node* slow = head;
  Node* fast = head;
  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    cout << "slow->data : " << slow->data << endl;
    cout << "fast->data : " << fast->data << endl;
  }
  return slow;
}

void printLinkedList(Node* head)
{
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout << " " << endl;
}

int main()
{
  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
  head->next->next->next->next->next = new Node(6);
  printLinkedList(head);
  head = findMiddle(head);
  printLinkedList(head);
}
