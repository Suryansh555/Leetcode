#include<bits/stdc++.h>
using namespace std ;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* sPtr = head;
        ListNode* fPtr = head;
        while(n--) {
            fPtr=fPtr->next;
        }
        // if fptr becomes zero at this point, requirement was to delete head
        if(!fPtr) return head->next;
        
        while(fPtr->next) {
            fPtr=fPtr->next;
            sPtr=sPtr->next;
        }
        sPtr->next=sPtr->next->next;
        return head;
    }
};