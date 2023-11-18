class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)// O(n^2)
    {
        //Your Code Here
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            int ans=X-a[i];
            int s=i+1;
            int e=n-1;
            while(s<e){
                if(a[s]+a[e]==ans)
                return 1;
                else if(a[s]+a[e]>ans)
                e--;
                else
                s++;
            }
        }
        return 0;
    }

};
