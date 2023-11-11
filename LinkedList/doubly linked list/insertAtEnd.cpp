#include<bits/stdc++.h>
using namespace std ;


class ListNode{
  public:
  int data ;
  ListNode* next  ;
  ListNode* prev ;
  ListNode()
  {
    this->data = 0 ;
    next = NULL ;
    prev = NULL ;

  }
  ListNode(int data)
  {
    this->data = data ;
    this->next = NULL ;
    this->prev = NULL ;
  }
  ListNode(int data , ListNode* next , ListNode* prev)
  {
    this->data = data ;
    this->next = next ;
    this->prev = prev ;
  }
};

ListNode* instertAtEnd(ListNode* head, int k)
{
  ListNode* curr = head ;
  while (curr->next != NULL)
  {
    /* code */
    curr = curr->next ;
  }
  ListNode *temp = new ListNode(k);
  curr->next = temp ;
  temp->prev = curr ;
  temp->next = NULL ;

  return head ;
  
}

void printList(ListNode* head)
{
  ListNode* curr = head ;
  while (curr != NULL)
  {
    /* code */
    cout << curr->data << " " ;
    curr = curr->next ;
  }
  cout << endl ;
  
}
int main()
{
  ListNode* head = new ListNode(10);
  head->next = new ListNode(20);
  head->next->prev = head ;
  head->next->next = new ListNode(30);
  head->next->next->prev = head->next ;
  head->next->next->next = new ListNode(40);
  head->next->next->next->prev = head->next->next ;
  head->next->next->next->next = NULL ;
  printList(head);
  head = instertAtEnd(head, 50);
  printList(head);
  return 0;
}