#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
ListNode *reverseLinkedListRec(ListNode *head) 
{

if(head == NULL || head -> next == NULL)
    return head;

ListNode *newhead = reverseLinkedListRec(head -> next);
head -> next -> next = head;
head -> next = NULL;
return newhead;
}

ListNode* reverseKGroup(ListNode* head, int k) {

if(head == NULL || head -> next == NULL)
    return head;
if(k==1 || k==0)
    return head;

int c=1,d=0;
ListNode *temp = head;
ListNode *last = NULL; //for saving the last node of a k-group
ListNode *fhead = NULL; //for saving the head of the linked list
ListNode *newhead = NULL; // for saving the head of every new head
while(temp != NULL){
    if(c==k){
        c=1;
        ListNode *a = temp -> next;
        temp -> next  = NULL;
        newhead = reverseLinkedListRec(head);
        if(last!=NULL)
            last -> next = newhead;
        if(d==0){
            fhead = newhead;
            d=1;
        }
        last = head;
        head = a;
        temp = a;
    } else {
        c++;
        temp = temp -> next;
    }
}
/* If the question has the alteration of reversing the remaining nodes if k is not a multiple of length of list
if(head != NULL){
     newhead = reverseLinkedListRec(head);
	 last -> next = newhead;
 }
 */
last -> next = head;
return fhead;
}