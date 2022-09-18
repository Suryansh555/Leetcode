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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL ){
            return head;
        }
        ListNode* prev = NULL ;
        ListNode* curr = head ;
        ListNode* next1 = head -> next ;
        
        while(next1 != NULL){
            curr -> next = prev ;
            prev = curr ;
            curr = next1 ;
            next1 = next1 -> next ;
        }
        curr -> next = prev;
        return curr ;
    }
};