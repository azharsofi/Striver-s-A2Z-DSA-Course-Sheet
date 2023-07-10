class Solution{
public:

void solve(stack<int> &s,int x){
    if(s.size()==0)
    {
        s.push(x);
        return;
    }
    int v=s.top();
    s.pop();
    solve(s,x);
    s.push(v);
}
    void Reverse(stack<int> &St){
        if(St.size()>0){
            int x=St.top();
            St.pop();
            Reverse(St);
            solve(St,x);
        }
    }
};
