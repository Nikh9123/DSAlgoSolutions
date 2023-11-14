#include <iostream>
/*
@https://leetcode.com/problems/odd-even-linked-list/
*/
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    // Rearranges a linked list such that odd and even positioned nodes are grouped together.
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) {
            return NULL; // Return null for an empty list.
        }

        ListNode* odd = head;          // Pointer to the current odd node.
        ListNode* even = head->next;   // Pointer to the current even node.
        ListNode* evenStart = head->next; // Head of the even list (start of the even nodes).
        
        if (evenStart == NULL) {
            return head; // If there are no even nodes, return the original list.
        }

        // Iterate through the list, rearranging odd and even nodes.
        while (odd->next != NULL && even->next != NULL) {
            // Connect the odd node to the next odd node.
            odd->next = even->next;
            odd = odd->next;

            // Connect the even node to the next even node.
            even->next = odd->next;
            even = even->next;
        }

        // Connect the last odd node to the head of the even list to complete the rearrangement.
        odd->next = evenStart;

        // If the last node is odd, connect the last even node to NULL.
        if (odd->next == NULL) {
            even->next = NULL;
        }

        return head; // Return the head of the modified linked list.
    }
};

// Function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "NULL\n";
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original Linked List: ";
    printList(head);

    // Applying the oddEvenList function
    Solution solution;
    ListNode* modifiedHead = solution.oddEvenList(head);

    std::cout << "Modified Linked List: ";
    printList(modifiedHead);

    return 0;
}
