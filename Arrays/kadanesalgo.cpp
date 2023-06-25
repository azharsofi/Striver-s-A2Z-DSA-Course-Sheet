    long long maxSubarraySum(int a[], int n){
        
        // Your code here
        long long int s=0;
long long int maxi=a[0];
        for(int i=0;i<n;i++){
            s=s+a[i];
            maxi=max(s,maxi);
            if(s<0)
            s=0;
        }
        return maxi;
    }
};
