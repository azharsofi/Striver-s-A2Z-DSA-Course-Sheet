struct ListNode* oddEvenList(struct ListNode* head){
         if(head==NULL)
         return NULL;
         struct ListNode* o=head;
         struct ListNode* e=head->next;
         struct ListNode* eh=e;
         while(e!=NULL&&e->next!=NULL){
             o->next=o->next->next;
             o=o->next;
             e->next=e->next->next;
             e=e->next;
         }
         o->next=eh;
         return head;

}
