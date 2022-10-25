#include<bits/stdc++.h>
using namespace std;



  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> st;
        ListNode* temp =  headA ;
        while(temp != NULL){
            st.insert(temp);
            temp = temp -> next ;
        }
        ListNode* temp2 = headB ;
        while(temp2 != NULL){
            if(st.find(temp2) != st.end()){
                return temp2 ;
            }
            st.insert(temp2);
            temp2 = temp2 ->  next;
        }
        return NULL ;
    }
};