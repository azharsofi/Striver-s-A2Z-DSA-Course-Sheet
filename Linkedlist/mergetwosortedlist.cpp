
// Create a copy of this node to iterate while solving the problem
ListNode* headNode = returnNode;
     while (l1 != nullptr && l2 != nullptr) {
  // Compare the 2 values of lists
  if (l1->val <= l2->val) {
    returnNode->next = new ListNode(l1->val);
    l1 = l1->next;
  } else {
    returnNode->next = new ListNode(l2->val);
    l2 = l2->next;
  }
  returnNode = returnNode->next;
     }

// Append the remaining list
if (l1 == nullptr) {
  returnNode->next = l2;
} else if (l2 == nullptr) {
  returnNode->next = l1;
}
     
// return the next node to sentinel node
return headNode->next;
     


    }
};


//approach 2


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* solve(Node* first,Node* second){
    if(first->next==NULL){
        first->next=second;
        return first;
        
    }
    Node* c1=first;
    Node* n1=c1->next;
    Node* c2=second;
    Node* n2=c2;
    while(n1!=NULL&&n2!=NULL){
        if(c2->data>=c1->data&&c2->data<=n1->data){
            //connect
            c1->next=c2;
            n2=c2->next;
            c2->next=n1;
            //pointer update
            c1=c2;//alternatively c1=c1->next;
            c2=n2;
            
            
        }
        else{
            c1=n1;//alternatively c1=c1->next;
            n1=n1->next;
            if(n1==NULL){
                c1->next=c2;
                return first;
            }
            
        }
    }
    return first;
}
Node* sortedMerge(Node* l1, Node* l2)  
{
    
     if(l1==NULL)
     return l2;
    if(l2==NULL) return l1;
     Node* head=NULL;
     Node* tail=NULL;
     if(l1->data<=l2->data)
     {
        return  solve(l1,l2);
     }
     else{
       return solve(l2,l1);
     }
   
    }

    
  
