#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            // If the list is empty or has only one node, there can be no cycle.
            return false;
        }

        // 1. Initialize slow and fast pointers.
        ListNode* slow = head;
        ListNode* fast = head;

        // 2. Move the pointers until they meet or the fast pointer reaches the end.
        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;  // Move fast pointer two steps at a time.
            slow = slow->next;        // Move slow pointer one step at a time.

            // 3. Check if the pointers meet, indicating the presence of a cycle.
            if (slow == fast) {
                return true;
            }
        }

        // 4. If the loop exits, there is no cycle.
        return false;
    }
};

int main() {
    // Example usage:
    // Create a linked list with a cycle for testing.
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;  // Creating a cycle

    // Create an instance of the Solution class.
    Solution solution;

    // Check if the linked list has a cycle.
    bool hasCycle = solution.hasCycle(head);

    // Output the result.
    if (hasCycle) {
        std::cout << "The linked list has a cycle.\n";
    } else {
        std::cout << "The linked list does not have a cycle.\n";
    }

    // Don't forget to free the allocated memory.
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
