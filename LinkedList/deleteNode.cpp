using namespace std;
#include <bits/stdc++.h>
struct node
{
  int x;
  node *next;
  node(int x)
  {
    this->x = x;
    next = NULL;
  }
};
node *DeleteFirstNode(node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  node *curr = head->next;
  delete head;
  return curr;
}
node *deleteLastNode(node *head)
{
  if(head == NULL)
  return NULL ;
  else if(head->next == NULL)
  return NULL ;
  node *temp = head ;
  while(temp->next->next != NULL)
  {
    temp = temp->next ;
  }
  delete(temp->next);
  temp->next = NULL ;
  return head ;
}
void Display(node *head)
{
  node *curr = head;
  // cout << curr << endl;

  while (curr != NULL)
  {
    cout << curr->x << "-->";
    curr = curr->next;
    // cout << endl;
    // cout << curr << endl;
  }
  cout << endl;
}
int main()
{
  node *head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);
  Display(head);
  // head = DeleteFirstNode(head);
  head = deleteLastNode(head);
  Display(head);
}