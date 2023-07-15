Node* reverseDLL(Node * head)
{
    //Your code here
    Node*curr=head;
    if(curr==NULL||curr->next==NULL)//single node or empty linked list
    return head;
    while(curr->next!=NULL){
        curr=curr->next;
        
    }
    head=curr;
    curr->next=curr->prev;//for the right most node
    curr->prev=NULL;
    curr=curr->next;
    while(curr->prev!=NULL){
        Node*t =curr->next;
        curr->next=curr->prev;
        curr->prev=t;
        curr=curr->next;
        
    }
    curr->prev=curr->next;
    curr->next=NULL;
    return head;
    
}
