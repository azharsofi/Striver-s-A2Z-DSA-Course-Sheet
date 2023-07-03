class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n=a.size();
        int s=0;
        int e=n-1;
        while(s<e){
            if(a[s]+a[e]==t)
            return {s+1,e+1};
            else if(a[s]+a[e]>t)
            e--;
            else
            s++;
        }
        return {-1,-1};
        
    }
};
