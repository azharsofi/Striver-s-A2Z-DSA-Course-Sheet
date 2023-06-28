class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node* p= new Node(x);
        if(head==NULL){
            head=p;
            return head;
        }
       // Your code here
       p->next=head;
      head=p;
      return head;
       
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* p= new Node(x);
       if(head==NULL){
            head=p;
            return head;
        }
        Node* q=head;
        while(q->next!=NULL){
            q=q->next;
            
        }
        q->next=p;
        return head;
       
    }
};
