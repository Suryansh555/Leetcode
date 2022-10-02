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
bool isPalindrome(ListNode* head) {

    string s;
    while(head){
        s += (char(head->val) - '0');
        head= head->next;
    }
    for(int i =0 ; i<s.length()/2 ; i++){
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}
};