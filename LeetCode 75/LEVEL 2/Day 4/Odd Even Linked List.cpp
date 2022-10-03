
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
 ListNode* oddEvenList(ListNode* head)
    {
		// handle the edge cases
        if(head==NULL|| head->next==NULL || head->next->next==NULL)
            return head;
        ListNode*even_start=NULL;
        ListNode*even_end=NULL;
        ListNode*odd_start=NULL;
        ListNode*odd_end= NULL;
        ListNode*curr=head;
        
        int count=1;
        while(curr!=NULL)
        {
            if(count%2==0)
            {
                if(even_start==NULL)
                {
                    even_start=curr;
                    even_end = even_start;
                }
                else
                {
                    even_end->next=curr;
                    even_end= even_end->next;
                } 
            }
            else
            {
                if(odd_start==NULL)
                {
                    odd_start=curr;
                    odd_end=odd_start;
                }
                else
                {
                    odd_end->next=curr;
                    if(odd_end->next==NULL){
                        odd_end=odd_end;}
                    else if(odd_end->next!=NULL)
                        odd_end=odd_end->next;
                }
            }
            curr=curr->next;
            count++;
        };
        odd_end->next=even_start;
        even_end->next=NULL;
        return odd_start;   
    }
};