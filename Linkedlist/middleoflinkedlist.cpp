class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* p=head;
        int l=0;
         while(p!=NULL){
             p=p->next;
             l++;
             
         }
        int mid=l/2;
        p=head;
        while(mid--){
            p=p->next;
            
        }
        return p->data;
    }
};



//optimized approach O(n) and O(1) space .
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* slow=head;
         Node* fast=head;
         while(fast!=NULL&&fast->next!=NULL){
             slow=slow->next;
             fast=fast->next->next;
         }
         return slow->data;
    }
};
