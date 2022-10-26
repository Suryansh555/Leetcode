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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return false;
        }
        ListNode * slow = head ;
        ListNode* fast = head ;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next ;
            if(fast != NULL){
                fast = fast -> next ;
            }
            slow = slow -> next ;
            
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};