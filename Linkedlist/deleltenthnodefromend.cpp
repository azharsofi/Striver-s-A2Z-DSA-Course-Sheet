class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *p =head;
           int l=0;
           while(p!=NULL)
           {
               p=p->next;
               l++;
           }
           p=head;
           if(l==n)
           return head->data;
           if(n>l)
           return -1;
           
           for(int i=1;i<l-n;i++){
               p=p->next;
               
               
           }
          
           return p->next->data;
           
    }
};
