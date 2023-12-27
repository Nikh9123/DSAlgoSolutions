#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(NULL) {}
  ListNode(int x) : val(x), next(NULL) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}

};
class Solution {
public:
  ListNode* getAddtwoList(ListNode* head1, ListNode* head2)
  {
    int carry = 0;
    ListNode* p1 = head1;
    ListNode* p2 = head2;
    ListNode* sumList = new ListNode();
    ListNode* newNode = sumList;
    while (p1 != NULL && p2 != NULL)
    {
      int sum = p1->val + p2->val + carry;
      if (sum > 9)
      {
        carry = 1;
        int val = sum % 10;
        newNode->next = new ListNode(val);
        newNode = newNode->next;
      }
      else {
        carry = 0;
        newNode->next = new ListNode(sum);
        newNode = newNode->next;
      }

      p1 = p1->next;
      p2 = p2->next;
    }

    while (p1 != NULL)
    {
      int sum = p1->val + carry;
      if (sum > 9)
      {
        carry = 1;
        int val = sum % 10;
        newNode->next = new ListNode(val);
        newNode = newNode->next;
      }
      else{
        carry = 0 ;
        int val = sum ;
        newNode->next = new ListNode(val);
        newNode = newNode->next;
      }
      p1 = p1->next;
    }
    while (p2 != NULL)
    {
      int sum = p2->val + carry;
      if (sum > 9)
      {
        carry = 1;
        int val = sum % 10;
        newNode->next = new ListNode(val);
        newNode = newNode->next;
      }
      else{
        carry = 0 ;
        int val = sum ;
        newNode->next = new ListNode(val);
        newNode = newNode->next;
      }
      p2 = p2->next;
    }
    if (carry == 1 && (p1 == NULL || p2 == NULL))
    {
      newNode->next = new ListNode(carry);
    }
    return sumList->next;
  }
};

int main()
{
  ListNode* head1 = new ListNode(9);
  head1->next = new ListNode(9);
  head1->next->next = new ListNode(1);
  // head1->next->next->next = new ListNode(9);
  // head1->next->next->next->next = new ListNode(9);
  // head1->next->next->next->next->next = new ListNode(9);
  // head1->next->next->next->next->next->next = new ListNode(9);

  ListNode* head2 = new ListNode(1);
  // head2->next = new ListNode(5);
  // head2->next->next = new ListNode(9);
  // head2->next->next->next = new ListNode(9);

  Solution obj;
  ListNode* newAddNode = obj.getAddtwoList(head1, head2);

  ListNode* temp = newAddNode;
  cout << "added list : " << endl;

  while (temp != NULL)
  {
    cout << temp->val << "-> ";
    temp = temp->next;
  }
  cout << endl;

  return 0;
}