//@https://leetcode.com/problems/delete-node-in-a-linked-list/description/
using namespace std;
#include <bits/stdc++.h>
struct node
{
  int data;
  node* next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};

int searchInLL(node* head, int x)
{
  node* curr = head;
  int pos = 1;
  while (curr != NULL)
  {
    if (curr->data == x)
    {
      return pos;
    }
    curr = curr->next;
    pos++;
  }
  return -1;
}
node* delNode(node* head, int x)
{
  int pos = searchInLL(head, x);
  cout << "pos = " << pos << endl;
  int count = 1;
  node* curr = head;
  node* temp = head;
  while (count != pos - 1)
  {
    curr = curr->next;
    cout << "curr->data = " << curr->data << endl;
    count++;
    temp = temp->next->next;
    cout << "temp->data = " << temp->data << endl;

  }
  curr->next = temp->next;
  return head;
}

// delete the first node of given linkedList
node* DeleteFirstNode(node* head)
{
  if (head == NULL) //firstly if head is null then we will return NULL ;
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    delete(head);
    return NULL;
  }

  head = head->next; //5->4->3->2->1 then head = 5 after executing this statement head = 4 ;
  return head;
}

// delete the last node of given linkedList
node* deleteLastNode(node* head)
{
  if (head == NULL || head->next == NULL)
  {
    delete(head);
    return NULL;
  }

  node* curr = head;

  //traverse till the 2nd last element and curr->next represent the last element and curr->nexr->next is second last element
  while (curr->next->next != NULL)
  {
    curr = curr->next;
  }

  delete(curr->next);

  return head;
}
void Display(node* head)
{
  node* curr = head;
  // cout << curr << endl;

  while (curr != NULL)
  {
    cout << curr->data << "-->";
    curr = curr->next;
    // cout << endl;
    // cout << curr << endl;
  }
  cout << endl;
}
int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);
  Display(head);
  // head = DeleteFirstNode(head);
  // head = deleteLastNode(head);
  head = delNode(head, 30);
  Display(head);
}