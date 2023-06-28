    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long s=0;
        long long e=n-1;
        int res=-1;
        while(s<=e){
            long long m=s+(e-s)/2;
            if(v[m]==x)
            return m;
            else if(x<v[m])
            e=m-1;
            else{
                res=m;
                s=m+1;
                
            }
        }
        return res;
    }
};
