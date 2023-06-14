class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {if(head==NULL)
    return false;
    Node* s=head;
    Node* f=head;
    while(s!=NULL&&f!=NULL&&f->next!=NULL){
    s=s->next;
    f=f->next->next;
    if(s==f)
    return true;
        
    }
    return false;
        // your code here
    }
};
