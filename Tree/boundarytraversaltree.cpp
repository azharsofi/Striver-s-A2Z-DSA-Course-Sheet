class Solution {
public:
void tleft(Node* root,vector<int>&ans){
    if((root==NULL)||(root->left ==NULL&&root->right==NULL))
    return;
    ans.push_back(root->data);
    if(root->left)
    tleft(root->left,ans);
    else
    tleft(root->right,ans);
    
}
void tleaf(Node* root,vector<int>&ans){
    if(root==NULL)
    return;
    if(root->left==NULL&&root->right==NULL){
    ans.push_back(root->data);
        return ;
    }
    tleaf(root->left,ans);
    tleaf(root->right,ans);
}
 void tright(Node* root,vector<int>&ans){
     if((root==NULL)||(root->left ==NULL&&root->right==NULL))
    return;
     if(root->right)
    tright(root->right,ans);
    else
    tright(root->left,ans);
    
    //wapas 
    ans.push_back(root->data);
     
 }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL)
        return ans;
        ans.push_back(root->data);
        // traverse left
        tleft(root->left,ans);
        
        //traverse leaf
        tleaf(root->left,ans);
        tleaf(root->right,ans);
        //traverse right
        tright(root->right,ans);
        
        return ans;
    }
};
