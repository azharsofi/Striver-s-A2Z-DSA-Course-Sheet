class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    
         vector<vector<int>> zigzag;
         if(root==NULL)
         return zigzag;
         int f=1;
         queue<TreeNode*> q;
         q.push(root);
         while(!q.empty()){
             vector<int> ans;
             int s=q.size();
             while(s--){
                 TreeNode* curr= q.front();
                 q.pop();
                 ans.push_back(curr->val);
                 if(curr->left)
                 q.push(curr->left);
                 if(curr->right)
                 q.push(curr->right);
             }
             if(f==0){
                 reverse(ans.begin(),ans.end());
}
zigzag.push_back(ans);
ans.clear();
f=!f;// important line
 }
 return zigzag;
    }
};
