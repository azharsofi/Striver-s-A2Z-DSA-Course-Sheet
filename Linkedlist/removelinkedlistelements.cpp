class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
           if(head==NULL)
        return NULL;
        ListNode* p=new ListNode(-1);
        p->next=head;
        ListNode*t=p;
        while(t!=NULL&&t->next!=NULL){
            if(t->next->val==val){
                ListNode* temp=t->next;

                t->next=temp->next;
                delete(temp);

            }
            else{
                t=t->next;
            }

        }
