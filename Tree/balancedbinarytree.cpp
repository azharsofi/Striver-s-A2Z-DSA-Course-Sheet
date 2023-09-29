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
