bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)
   return false;
   Node* p=head;
   while(p->next!=head){
       p=p->next;
       if(p==NULL){
           return false;
       }
     
   }
   
   return true;
}
