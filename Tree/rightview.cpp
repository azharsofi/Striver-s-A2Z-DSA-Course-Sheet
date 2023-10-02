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
