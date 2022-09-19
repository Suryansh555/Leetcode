
#include<bits/stdc++.h>
using namespace std ;

  struct ListNode {
      int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head== NULL)return head;
        
        ListNode * fast=head;
        ListNode * slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            if(fast !=NULL)
            fast=fast->next;
            
            slow=slow->next;
            
            if(fast==slow) //loop found
            {
                slow=head;
                while(slow!=fast)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};