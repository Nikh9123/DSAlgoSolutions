#include<bits/stdc++.h>
using namespace std;


struct ListNode {
  int val;
  ListNode* next;

  ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
  ListNode* getReverse(ListNode* head)
  {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* nextNode = head->next;

    while (curr != NULL)
    {
      curr->next = prev;
      prev = curr;
      curr = nextNode;
      if (nextNode != NULL)
        nextNode = nextNode->next;
    }

    cout << "printing reversed list : ";
    ListNode* temp = prev;
    while (temp != NULL)
    {
      cout << temp->val << " -> ";
      temp = temp->next;
    }
    cout << endl;
    return prev;

  }

  ListNode* addOne(ListNode* head)
  {
    int carry = 1;
    ListNode* reverseList = getReverse(head);

    ListNode* temp = reverseList;

    while (temp != NULL)
    {
      int val = temp->val + carry;

      if (val > 9)
      {
        temp->val = val % 10;
        carry = val / 10;
      }
      else {
        temp->val = val;
        carry = 0;
      }
      temp = temp->next;
    }
    if (temp == NULL && carry == 1)
    {
      temp = reverseList;
      while (temp->next != NULL)
      {
        temp = temp->next; //go to lastNode
      }
      temp->next = new ListNode(1);
    }


    ListNode* correctList = getReverse(reverseList);
    return correctList;
  }


};

int main()
{
  ListNode* head = new ListNode(9);
  head->next = new ListNode(9);
  head->next->next = new ListNode(9);
  head->next->next->next = new ListNode(9);
  ListNode* temp = head;

  cout << "printing original list : ";
  while (temp != NULL)
  {
    cout << temp->val << " -> ";
    temp = temp->next;
  }
  cout << endl;
  Solution obj;
  temp = obj.addOne(head);
  while (temp != NULL)
  {
    cout << temp->val << " -> ";
    temp = temp->next;
  }
  return 0;
}