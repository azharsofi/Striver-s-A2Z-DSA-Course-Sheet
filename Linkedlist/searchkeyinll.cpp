class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
         struct Node* p=head;
         while(p->next!=NULL){
             if(p->data==key)
             return true;
             else
             p=p->next;
             
         }
         return false;
         
    }
};
