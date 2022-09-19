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
private:
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
     
public:
    bool isPalindrome(ListNode* head) {
    // Approach 2
        if(head == NULL || head->next == NULL)
            return true;
        
        // Finding Mid
        ListNode* middle = getMid(head);
        
        // Reversing list after mid
        ListNode* temp = middle->next;
        
        middle->next = reverse(temp);
        
        // Comapring both lists 
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->val != head1->val) {
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        // reterving the original list
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
        
    }
};