/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
    

    // Your Code Here
   ListNode* p= head1;
ListNode *q=head2;
    int l=0;
    while(p!=NULL){
        p=p->next;
        l++;
    }
    p=head1;
    int r=0;
    while(q!=NULL){
        q=q->next;
        r++;
    }
    q=head2;
      int d=l-r;
    if(l>r){
        while(d--){
            p=p->next;
        }
        
    }
    
    if(r>l)
    {  d=r-l;
        while(d--){
        q=q->next;
        }
    }
    while(p!=q){
        p=p->next;
        q=q->next;
    }
 return p;
    
    


    }
};
