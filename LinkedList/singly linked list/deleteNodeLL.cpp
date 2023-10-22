#include<bits/stdc++.h>
using namespace std ;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

public:
  /**
   * @brief Deletes a node from a singly-linked list.
   *
   * Given a node in a singly-linked list, this function deletes the node from the list
   * by copying the value of the next node into the current node and updating the next
   * pointer of the current node to skip the next node.
   *
   * @param node A pointer to the node to be deleted from the linked list.
   */
  void deleteNode(ListNode* node) {
    // Store the pointer to the next node in the list
    ListNode* current = node->next;

    // Copy the value of the next node into the current node
    node->val = current->val;

    // Update the next pointer of the current node to skip the next node
    node->next = current->next;

    // The current node now effectively removes the node originally pointed to by 'node'
    // from the linked list.
  }
};
