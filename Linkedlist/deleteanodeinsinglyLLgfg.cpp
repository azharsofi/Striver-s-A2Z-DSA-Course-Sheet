Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* p=head;
    if(x==1){
        head=p->next;
        free(p);
        return head;
    }
    else{
        for(int i=1;i<x-1;i++){
            p=p->next;
            
        }
        p->next=p->next->next;
        return head;
    }
}
