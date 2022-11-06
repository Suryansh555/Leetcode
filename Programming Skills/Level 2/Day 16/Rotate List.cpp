#include "bits/stdc++.h"
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head ==NULL)return NULL;
        vector<int> nums;
        ListNode* p = head;
        while(p){
            nums.push_back(p->val);
            p = p->next;
        }
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        ListNode* a = new ListNode(nums[0]);
        ListNode* b = a;
        for(int i =1; i<nums.size(); i++){
            b->next = new ListNode(nums[i]);
            b = b->next;
        }
        return a;
        
        
    }
};