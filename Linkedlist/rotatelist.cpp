/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*p=head;
       
        if(head==NULL)
        return NULL;
     int l=0;
    while(p!=NULL){
    l++;
    p=p->next;
 }
 ListNode* q=head;
 int ar=k%l;
 int d=l-ar-1;
 if(ar==0){
 return head;}
 
 while(d--){
     q=q->next;
 }
 ListNode* nl=q;
 ListNode* newhead=nl->next;
 nl->next=NULL;
 ListNode* it=newhead;
 while(it->next!=NULL){
     it=it->next;

 }
 it->next=head;
 return newhead;
    }
};
