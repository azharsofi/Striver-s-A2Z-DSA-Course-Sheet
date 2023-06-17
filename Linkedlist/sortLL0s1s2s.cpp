class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int z=0;
        int o=0;
        int t=0;
        Node* p=head;
        while(p!=NULL){// count number of zeroes,ones and twos
            if(p->data==0){
                z++;}
                else if(p->data==1){
                o++;}
                else if(p->data==2){
                t++;}
                p=p->next;
                
            }
            p=head;
            while(p!=NULL){//now assign it to linked list 
                if(z!=0){
                    p->data=0;
                    z--;
        
                }
                 else if(o!=0){
                     
                    p->data=1;
                    o--;
        
                }
               else if(t!=0){
                    p->data=2;
                    t--;
                  
                }
                p=p->next;
            }
            return head;
        
        
    }
};

//APPROACH 2
//BY CREATING 3 LL AND MERGING THEM
 /*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void insert(Node* &tail,Node* p){
        tail->next=p;
        tail=p;
    }

Node* sortList(Node *head){
    // Write your code here.
     Node* ze=new Node(-1);
        Node* z=ze;
        Node* on=new Node(-1);
        Node* o=on;
        Node* tw =new Node(-1);
        Node* t=tw;
        Node* p=head;
        while(p!=NULL){
            int v=p->data;
            if(v==0){
            insert(z,p);}
            else if(v==1){
            insert(o,p);}
            else if(v==2){
                insert(t,p);
            }
            p=p->next;
        }
        //merge
        if(on->next!=NULL){
            z->next=on->next;
            
        }
        else
        {
            z->next=tw->next;
        }
        o->next=tw->next;
        t->next=NULL;
        //setup
        head=ze->next;
        delete ze;
        delete on;
        delete tw;
        
        return head;
}
