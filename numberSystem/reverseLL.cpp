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
  ListNode* getreverseSecondHalf(ListNode* head){
    ListNode* prevNode = nullptr ;
    ListNode* currNode = head ;
    ListNode* nextNode = head->next ;

    while(currNode != nullptr){
      currNode->next = prevNode ;
      prevNode = currNode ;
      currNode = nextNode ;

      if(nextNode != nullptr) nextNode = nextNode->next ;
    }
    return prevNode ;
  }

  bool isPalindrome(ListNode* head) {
    if(head == NULL || head->next == NULL) return false ;

    ListNode* slow = head ;
    ListNode* fast = head->next ;

    while(fast->next != nullptr && fast->next->next != nullptr){
      slow = slow->next ;
      fast = fast->next->next ;
    }
    ListNode* reversedSecondHalf = getreverseSecondHalf(slow->next) ;
    slow = head ;
    while(reversedSecondHalf != nullptr){
      if(reversedSecondHalf->val != slow->val) return false ;
      slow = slow->next ;
      reversedSecondHalf = reversedSecondHalf->next ;
    }
    return true ;

  }
};

int main(){

}