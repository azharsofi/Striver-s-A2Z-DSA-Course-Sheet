

// using map 
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {if(head==NULL)
    return false;
    Node* p=head;
    map<Node*,bool> v;
    while(p!=NULL){
    if(v[p]==true)
    return true;
    v[p]=true;
    p=p->next;
    }
    return false;
    
    
       
    }
};



//using fast and slow pointer concept
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
