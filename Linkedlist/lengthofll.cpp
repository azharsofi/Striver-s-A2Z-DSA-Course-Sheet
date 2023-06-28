class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int l=0;
        Node* p=head;
        while(p!=NULL){
            p=p->next;
            l++;
        }
        return l;
    
    }
};
   
