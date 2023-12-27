/**
*&25. Reverse Nodes in k-Group
*^LEVEL - Hard

Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.
 *
 *
*/

#include<bits/stdc++.h>
using namespace std;


struct ListNode {
  int val;
  ListNode* next;

  ListNode() : val(0), next(nullptr) {};
  ListNode(int x) : val(x), next(nullptr) {};
  ListNode(int x, ListNode* next) : val(x), next(next) {};
};

class Solution {
private:

  ListNode* getReverse(ListNode* head)
  {
    ListNode* prevNode = NULL;
    ListNode* currNode = head;
    ListNode* nextNode = NULL;

    while (currNode != NULL)
    {
      nextNode = currNode->next; // Correctly update nextNode here
      currNode->next = prevNode;
      prevNode = currNode;
      currNode = nextNode;
    }
    return prevNode;
  }

  ListNode* getKthNode(ListNode* head, int k)
  {
    ListNode* temp = head;
    k -= 1;
    while (temp != NULL && k > 0)
    {
      k--;
      temp = temp->next;
    }
    return temp;
  }

public:
  ListNode* reverseKGroup(ListNode* head, int k)
  {
    if (head == NULL || head->next == NULL)
    {
      return NULL;
    }

    ListNode* temp = head;
    ListNode* prevNode = NULL;
    while (temp != NULL)
    {
      ListNode* kthNode = getKthNode(temp, k);

      if (kthNode == NULL)
      {
        cout << "kthNode is NULL" << endl;
        if (prevNode != NULL)
        {
          prevNode->next = temp;
        }
        break;
      }

      ListNode* nextNode = kthNode->next;
      kthNode->next = NULL;

      ListNode* curr = temp;
      cout << "temp : ";
      while (curr != NULL)
      {
        cout << curr->val << "->";
        curr = curr->next;
      }
      cout << endl;
      //call the reverse function 
      getReverse(temp);
      cout << "temp after reverse: ";
      curr = kthNode;
      while (curr != NULL)
      {
        cout << curr->val << "->";
        curr = curr->next;
      }
      cout << endl;
      if (temp == head)
      {
        head = kthNode;
      }
      else {
        prevNode->next = kthNode;
      }
      cout << "head : " << head->val << endl;
      curr = head;
      while (curr != NULL)
      {
        cout << curr->val << "->";
        curr = curr->next;
      }
      cout << endl;
      temp->next = nextNode;
      prevNode = temp;
      temp = nextNode;
      cout << "temp : " << temp->val << endl;
    }
    return head;
  }
};


int main()
{
  Solution obj;
  ListNode* head = new ListNode(1);
  ListNode* temp = head;

  for (int i = 0; i < 9; i++)
  {
    temp->next = new ListNode(i + 2);
    temp = temp->next;
  }
  int k = 3;
  temp = head;
  cout << "Original List : ";
  while (temp != NULL)
  {
    cout << temp->val << "-> ";
    temp = temp->next;
  }
  cout << endl;

  ListNode* newHead = obj.reverseKGroup(head, k);
  cout << "Reversed List : ";
  while (newHead != NULL)
  {
    cout << newHead->val << "-> ";
    newHead = newHead->next;
  }

  return 0;

}