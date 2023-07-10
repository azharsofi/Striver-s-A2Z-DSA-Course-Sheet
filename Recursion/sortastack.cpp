void insert(stack<int>&s,int t){
    if(s.size()==0||s.top()<=t){
        s.push(t);
        return ;
    }
    int val=s.top();
    s.pop();
    insert(s,t);
    s.push(val);
}
void solve(stack<int>&s){
    if(s.size()==1)
    return;
    int t=s.top();
    s.pop();
    solve(s);
    insert(s,t);
}
void SortedStack :: sort()
{
   //Your code here
   solve(s);
   
}
