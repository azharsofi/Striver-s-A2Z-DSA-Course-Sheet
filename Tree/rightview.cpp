class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int size=q.size();
           for(int i=0;i<size;i++){
               Node* curr=q.front();
               q.pop();
               if(i==size-1)
               ans.push_back(curr->data);
               if(curr->left)
               q.push(curr->left);
               if(curr->right)
               q.push(curr->right);
           }
       }
       return ans;
    }
};
// recursive
class Solution
{
    public:
   void  solve(Node* root,vector<int> &ans,int depth){
       if(root==NULL)
       return ;
       if(depth==ans.size()){
           ans.push_back(root->data);
       }
       solve(root->right,ans,depth+1);
       solve(root->left,ans,depth+1);
   }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       
      solve(root,ans,0);
       return ans;
    }
};
