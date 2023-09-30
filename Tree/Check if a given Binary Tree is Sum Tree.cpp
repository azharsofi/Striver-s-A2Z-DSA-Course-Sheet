class Solution
{
    public:
    int add(Node* root){
        if(root==NULL)
        return 0;
        return root->data+add(root->left)+add(root->right);
    }
    
    
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL)
           return true;
           if(root->left==NULL&&root->right==NULL)
           return true;
          int ls=add(root->left);
          int rs=add(root->right);
          int s=ls+rs;
           if(root->data==s&&isSumTree(root->left)&&isSumTree(root->right))
           return true;
           else
           return false;
           
    }
};
// optimized approach
class Solution
{
    public:
    pair<bool,int> df(Node* root){
        if(root==NULL)
        {
             pair<bool,int> p=make_pair(true,0);
             return p;
        }
        if(root->left==NULL&&root->right==NULL){
         pair<bool,int> p2=make_pair(true,root->data);
         return p2;}
          pair<bool,int> l=df(root->left);
           pair<bool,int> r=df(root->right);
           bool op1=l.first;
           bool op2=r.first;
           bool op3=root->data==l.second+r.second;
            pair<bool,int> ans;
            if(op1&&op2&&op3){
                ans.first=true;
                ans.second=root->data+l.second+r.second;
            }
            else
            ans.first=false;
            return ans;
    }
    
    
    bool isSumTree(Node* root)
    {
         // Your code here
       return df(root).first;
    }
};
