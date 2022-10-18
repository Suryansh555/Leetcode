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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head ;
        ListNode* slow = head ;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next;
        }
        if(fast -> next == NULL){
            return slow ;
        }
        else{
            return slow -> next;
        }
    }
};