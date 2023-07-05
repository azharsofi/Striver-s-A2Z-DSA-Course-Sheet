
class Solution {
    
   bool ispossible(vector<int> &a, int k,int min){
        int c=1;
        int ld=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i]-ld>=min){
                c++;
                ld=a[i];
            }
            if(c==k)
            return true;
        }
        return false;
    }
    
public:

    int solve(int n, int k, vector<int> &a) {
    
        // Write your code here
        if(k>n)
        return -1;
        int size=a.size();
        int ans=-1;
        sort(a.begin(),a.end());
        int s=1;
        int e=a[size-1]-a[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(a,k,mid))
            {
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
