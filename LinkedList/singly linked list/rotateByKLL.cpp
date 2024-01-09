#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {};

};


ListNode* rotateListByOne(ListNode* head){
  
  //use two pointers to find the last and second last node
  ListNode* ptr = head;
  ListNode* prev = nullptr;

  while(ptr->next != nullptr){
    prev = ptr;
    ptr = ptr->next;
  }
  
  //make the last node point to the head
  ptr->next = head;
  //make the second last node point to null
  prev->next = nullptr;
  //make the last node as the head
  head = ptr;
  return head;
}


int main() {
  ListNode* head = new ListNode(0);
  int k = 4;
  ListNode* ptr = head;

  //create a linked list
  for (int i = 1; i <= 2; i++) {
    ptr->next = new ListNode(i);
    ptr = ptr->next;
  }
  
  //find the length of the linked list
  ptr = head;
  int len = 0;
  while(ptr != nullptr){
    len++;
    ptr = ptr->next;
  }

  if(k > len){
    k = k % len;
  }

  //print the linked list
  ptr = head;
  cout<<"Linked List before rotation: ";
  while (ptr != nullptr) {
    cout << ptr->val << " ";
    ptr = ptr->next;
  }
  cout<<endl;
  
  //rotate the linked list
  for(int i = 0 ; i < k ; i++){
    head = rotateListByOne(head);
  }

  cout<<"Linked List after rotation: ";
  ptr = head;
  while(ptr != nullptr){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
  cout<<endl;
  return 0 ;
}