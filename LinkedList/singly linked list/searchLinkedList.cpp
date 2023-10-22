#include<bits/stdc++.h>
using namespace std ;

struct node{
  int data ;
  node* next ;
  node(int x)
  {
    data = x ;
    next = NULL ;
  }
};

void printLinkedList(node *head)
{
  node* curr = head ;
  while(curr != NULL)
  {
    cout<<curr->data<<"-->";
    curr = curr->next ;
  }
  cout<<endl;
}

//search the node(x) in given linked list in function searchInLL()
int searchInLL(node *head , int x)
{
  int count = 1 ;
  node* curr = head ;
  while(curr != NULL)
  {
    if(curr->data == x)
    {
      return count ;
    }
    curr = curr->next ;
    count++ ;
  }
  return -1 ;

}

int main()
{
  node* head = new node(10);
  head->next = new node(20);
  head->next->next = new node(30);
  head->next->next->next = new node(40);
  head->next->next->next->next = new node(50);
  int x ;
  printLinkedList(head);
  cout<<"enter the element you want to search : "<<endl;
  cin>>x;
  int ans = searchInLL(head , x);
  cout<<"Element found at node : "<<ans<<endl;
}