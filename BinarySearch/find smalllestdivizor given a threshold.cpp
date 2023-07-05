class Solution {
public:
bool solve(vector<int>& a, int t,int m){
    int s=0;
    for(int i=0;i<a.size();i++){
        s=s+a[i]/m;
        if(a[i]%m!=0)
        s++;
        if(s>t)
        return false;
    }
    return true;
}

    int smallestDivisor(vector<int>& a, int t) {
        int s=1;
        int e=*max_element(a.begin(),a.end());
        int res=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(solve(a,t,m)){
                res=m;
                e=m-1;
            }
            else
            s=m+1;
        }
        return res;
    }
};
