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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next){return;}
        ListNode* slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow;
        if(fast->next){
            slow=slow->next;
        }
        fast->next=NULL;
        stack<ListNode*> st;
        while(slow){
            st.push(slow);slow=slow->next;
        }
        slow=head;
        while(!st.empty()){
            ListNode* temp = slow->next;
            slow->next=st.top();st.pop();
            slow=slow->next;
            slow->next=temp;
            slow=slow->next;
        }
    }
};