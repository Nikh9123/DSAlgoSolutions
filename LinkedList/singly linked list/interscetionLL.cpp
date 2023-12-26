#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  //* SOLUTION 1: Brute Force
  // Iterate through list 1 and hash its node address. Why? (Hint: depends on the common attribute we are searching)
  // Iterate through list 2 and search the hashed value in the hash table. If found, return node.
    // ListNode* getIntersection(ListNode* head1, ListNode* head2)
    // {
    //   map<ListNode*, int>storeNode;

    //   ListNode* temp = head1;
    //   int count = 1;
    //   while (temp != NULL)
    //   {
    //     storeNode[temp] = count;
    //     temp = temp->next;
    //     count++;
    //   }

    //   temp = head2;

    //   while (temp != NULL)
    //   {
    //     if (storeNode.find(temp) != storeNode.end())
    //     {
    //       return temp;
    //     }
    //     temp = temp->next;
    //   }

    //   return nullptr;

    // }

  int getLength(ListNode* head)
  {
    int count = 0;
    ListNode* temp = head;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
    return count;
  }

  //* SOLUTION 2: find the length of both linked list and then traverse the longer linked list by the difference of length
  ListNode* getIntersection(ListNode* head1, ListNode* head2) {
    int length1 = getLength(head1);
    int length2 = getLength(head2);
    ListNode* pointer1 = NULL;
    ListNode* pointer2 = NULL;
    //find which one is longer
    if (length1 > length2)
    {
      int diff = length1 - length2;
      pointer1 = head1;
      pointer2 = head2;
      while (diff)
      {
        pointer1 = pointer1->next;
        diff--;
      }
    }
    else if (length2 > length1) {
      int diff = length2 - length1;
      pointer1 = head2;
      pointer2 = head1;
      while (diff)
      {
        pointer1 = pointer1->next;
        diff--;
      }
    }
    else {
      pointer1 = head1;
      pointer2 = head2;
    }
    cout << "pointer 1 : " << pointer1->val << endl;
    cout << "pointer 2 : " << pointer2->val << endl;

    while (pointer1 != pointer2) {
      pointer1 = pointer1->next;
      pointer2 = pointer2->next;
    }
    if (pointer1 == NULL || pointer2 == NULL)
    {
      return NULL;
    }
    else if (pointer1 == pointer2)
    {
      return pointer1;
    }

    return NULL;
  }
};

int main()
{
  ListNode* head1 = new ListNode(3);
  head1->next = new ListNode(1);


  ListNode* head2 = new ListNode(1);
  head2->next = new ListNode(2);
  head2->next->next = new ListNode(4);
  head2->next->next->next = new ListNode(5);


  //create a intersection point in both Linked List
  ListNode* intersection = head2->next->next->next->next = head1->next->next = new ListNode(4);
  intersection->next = new ListNode(6);
  intersection->next->next = new ListNode(2);

  ListNode* temp = head1;
  cout << "data of head1 : " << endl;
  while (temp != NULL)
  {
    cout << temp->val << "-> ";
    temp = temp->next;
  }
  cout << endl;

  temp = head2;
  cout << "data of head2 : " << endl;
  while (temp != NULL)
  {
    cout << temp->val << " -> ";
    temp = temp->next;
  }
  cout << endl;

  Solution obj;
  ListNode* intersectioNode = obj.getIntersection(head1, head2);

  cout << "data of intersectionNode : " << intersectioNode->val << endl;

}