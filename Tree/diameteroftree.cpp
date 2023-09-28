
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

//optimized
class Solution {
    private:
    pair<int,int> df(Node* root){
        if(root==NULL)
    {
      pair<int,int> p=make_pair(0,0);
      return p;
    }
        pair<int,int> l =df(root->left);
        pair<int,int> r =df(root->right);
      int op1=l.first;
      int op2=r.first;
      int op3=l.second+r.second+1;
      
      pair<int,int> ans;
      ans.first= max(op1,max(op2,op3));
      ans.second=max(l.second,r.second)+1;
      return ans;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        return df(root).first;
    }
};
