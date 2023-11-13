#include<bits/stdc++.h>
using namespace std;


class Node {
public:
  int data;
  Node* next;

  Node()
  {
    this->data = 0;
    next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  Node(int data, Node* next)
  {
    this->data = data;
    this->next = next;
  }
};

void printNode(Node* head)
{
  Node* temp = head;

  // Traverse the list and print the data in each node
  while (temp != NULL)
  {
    cout << temp->data << "-->";
    temp = temp->next;              // Move to the next node
  }
  cout << endl;
}

Node* loopNode(Node* head)
{
  if (head->next == NULL || head == NULL)
  {
    return NULL;
  }
  map<Node*, int>strNode;
  Node* curr = head;

  while (curr != NULL)
  {
    //1. store the node in map 
    //2. if we find that this node is already present in map then return the node->data
    Node* curr = curr;
    if (strNode.find(curr) != strNode.end())
    {
      return curr;
    }

    strNode[curr]++;
    for (auto x : strNode)
    {
      cout << x.first->data << " " << x.second << endl;
    }
    curr = curr->next;
  }
  return NULL;
}

/**
 * Definition for singly-linked list.
 *  */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Check for an empty list or a list with only one node
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        // Initialize pointers for the entry point, slow, and fast traversal
        ListNode* entry = head;
        ListNode* slow = head;
        ListNode* fast = head;

        // Detect a cycle using Floyd's cycle-finding algorithm
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // If there is a cycle, break out of the loop
            if (slow == fast) {
                break;
            }
        }

        // Check if there is no cycle (fast reached the end of the list)
        if (fast == NULL || fast->next == NULL) {
            return NULL;
        }

        // Move entry to the head and move both entry and slow one step at a time until they meet
        entry = head;
        while (entry != slow) {
            entry = entry->next;
            slow = slow->next;
        }

        // Return the node where the cycle begins (entry point)
        return entry;
    }
};


int main()
{
  // Create a linked list
  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  
  printNode(head);
  Node* ans = loopNode(head);
  cout << "the loop node is : " << ans->data << endl;

}