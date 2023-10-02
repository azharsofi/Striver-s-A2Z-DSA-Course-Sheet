//recursive
void lef(Node *root,vector<int> &ans,int level,int &maxlevel){
     if(root==NULL)
   return ;
   if(level>maxlevel){
   ans.push_back(root->data);
   maxlevel=level;
   }
   lef(root->left,ans,level+1,maxlevel);
   lef(root->right,ans,level+1,maxlevel);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   int maxlevel=0;
   lef(root,ans,1,maxlevel);
   return ans;
   
}

// using level order 
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root==NULL)
   return ans;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       int size=q.size();
      for(int i=0;i<size;i++){
           Node* curr=q.front();
           q.pop();
           if(i==0)
               ans.push_back(curr->data);
           
           if(curr->left)
           q.push(curr->left);
           if(curr->right)
               q.push(curr->right);
           
       }
      
   }
   return ans;
   
}


