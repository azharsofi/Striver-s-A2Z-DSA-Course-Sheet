class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
       if(head==NULL)
       return NULL;
    
        struct Node *p=NULL;
        struct Node *c=head;
        struct Node *n=NULL;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            
            
        }
        return p;
        
    }
    
};
