class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            Node* curr=p.first;
            int hd=p.second;
            q.pop();
            m[hd]=curr->data;// will take latest value
            if(curr->left)
            q.push({curr->left,hd-1});
            if(curr->right)
            q.push({curr->right,hd+1});
            
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
