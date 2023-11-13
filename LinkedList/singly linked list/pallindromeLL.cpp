#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
  bool isPalindrome(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
      return true;
    }

    // Find the middle of the linked list
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }
    // Reverse the second half of the linked list
    ListNode* prev = nullptr;
    ListNode* current = slow;
    ListNode* nextNode;

    while (current != nullptr) {
      nextNode = current->next;
      current->next = prev;
      prev = current;
      current = nextNode;
    }

    // Check if the reversed second half is equal to the first half
    ListNode* firstHalf = head;
    ListNode* secondHalf = prev;

    while (secondHalf != nullptr) {
      if (firstHalf->val != secondHalf->val) {
        return false;
      }
      firstHalf = firstHalf->next;
      secondHalf = secondHalf->next;
    }

    return true;
  }
};


int main()
{
  Solution s;

  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(4);
  head->next->next->next->next->next = new ListNode(3);
  head->next->next->next->next->next->next = new ListNode(2);
  head->next->next->next->next->next->next->next = new ListNode(1);
  cout << "is Palindrome : " << s.isPalindrome(head);
}