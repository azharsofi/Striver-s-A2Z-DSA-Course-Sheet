
// using recusrion
class Solution
{
    public:
    void reverse(queue<int> &q)
    {
        if(q.empty())
        return;
        int ans=q.front();
        q.pop();
        reverse(q);
        q.push(ans);
        
         }
    
    queue<int> rev(queue<int> q)
    {
        // add code here.
       //base case
       reverse(q);
       return q;
     
        
    }
};

// using stack 
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        queue<int> ans;
        stack<int> s;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            s.push(top);
            
        }
        while(!s.empty()){
            int a=s.top();
            s.pop();
            ans.push(a);
        }
        return ans;
    }
};
