class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        Node* curr=p.first;
        int hd=p.second;
        q.pop();
        if(m.find(hd)==m.end())// agar present nahi hai to daalo warna nahi
        m[hd]=curr->data;
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

