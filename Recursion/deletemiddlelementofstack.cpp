class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void solve(stack<int>&s, int size, int c){
        //base cond
        if(c==size/2){
            s.pop();
            return ;
        }
        
        int e=s.top();
        s.pop();
        solve(s,size,c+1);
        s.push(e);
    }
    void deleteMid(stack<int>&s, int size)
    {
        // code here
        int c=0;
        solve(s,size,c);
    }
};
