
//brute force approach 
class Solution {
    private:
    int height(Node* root){
        if(root==NULL)
        return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
        return 0;
        int op1=1+height(root->left)+height(root->right);
        int op2=diameter(root->left);
        int op3=diameter(root->right);
        return max(op1,max(op2,op3));
    }
};
