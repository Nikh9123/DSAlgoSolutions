#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Function to print the linked list
void printList(ListNode* head) {
  ListNode* current = head;
  while (current != nullptr) {
    std::cout << current->val << " ";
    current = current->next;
  }
  std::cout << std::endl;
}
// Your Solution class here...


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    if (list1 != NULL && list2 == NULL)
    {
      return list1;
    }

    if (list2 != NULL && list1 == NULL)
    {
      return list2;
    }
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    while (list1 != NULL && list2 != NULL)
    {
      if (list1->val <= list2->val)
      {
        cout << "list1->data : " << list1->val << endl;
        curr->next = list1;
        curr = list1;
        cout << "curr1->data : " << curr->val << endl;
        list1 = list1->next;
      }
      else {
        cout << "list2->data : " << list2->val << endl;

        curr->next = list2;
        curr = list2;
        cout << "curr2->data : " << curr->val << endl;
        list2 = list2->next;
      }
    }
    while (list1 != NULL)
    {
      cout << "list1->data : " << list1->val << endl;
      curr->next = list1;
      curr = list1;
      cout << "curr1->data : " << curr->val << endl;
      list1 = list1->next;
    }
    while (list2 != NULL)
    {
      cout << "list2->data : " << list2->val << endl;
      curr->next = list2;
      curr = list2;
      cout << "curr2->data : " << curr->val << endl;
      list2 = list2->next;
    }
    curr = dummy->next;
    return curr;
  }
};



int main() {
  // Creating two sorted linked lists
  ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
  ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));

  // Creating an instance of the Solution class
  Solution solution;

  // Merging the two lists
  ListNode* mergedList = solution.mergeTwoLists(list1, list2);

  // Printing the merged list
  std::cout << "Merged List: ";
  printList(mergedList);

  // Clean up: deallocate memory
  while (mergedList != nullptr) {
    ListNode* temp = mergedList;
    mergedList = mergedList->next;
    delete temp;
  }

  return 0;
}
