// brute force
class Solution {
public:
 int height(TreeNode* root){
     if(root==NULL)
     return 0;
     int lh=height(root->left);
     int rh=height(root->right);
     return max(lh,rh)+1;

 }

        
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
       return true;
       bool op1=isBalanced(root->left);
       bool op2=isBalanced(root->right);
       bool op3=abs(height(root->left)-height(root->right))<=1;
       if(op1&&op2&&op3)
       return true;
       else
       return false;

        
    }
};
// optimize approach

class Solution{
    public:
    
    pair<bool,int> df(Node* root){
        if(root==NULL){
          pair<bool,int>p =make_pair(true,0);
          return p;
        }
        pair<bool,int> l=df( root->left);
        pair<bool,int> r=df(root->right);
        bool op1=l.first;
        bool op2=r.first;
        bool op3=abs(l.second-r.second)<=1;
        pair<bool,int> ans;
        ans.second=max(l.second,r.second)+1;
        if(op1&&op2&&op3){
            ans.first=true;
        }
        else{
            ans.second=false;
        }
        return ans;
        
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return df(root).first;
    }
};
