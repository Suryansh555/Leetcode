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