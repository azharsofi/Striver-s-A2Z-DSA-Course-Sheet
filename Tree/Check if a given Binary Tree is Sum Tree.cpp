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
