#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head ;
        ListNode* newhead = head ;
        if(!head || head -> next == NULL){
            return head ;
        }
        ListNode* curr = head ;
        while(curr != NULL){
            int value = head -> val ;
            while(curr != NULL && curr -> val == value){
                curr = curr -> next ;
            }
            head -> next = curr ;
            head = curr ;
        }
        return newhead;
    }
};