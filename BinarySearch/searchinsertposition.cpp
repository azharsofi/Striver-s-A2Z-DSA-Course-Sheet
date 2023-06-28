class Solution{
    public:
    int searchInsertK(vector<int>a, int n, int k)
    {
        // code here
        int s=0;
        int e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(a[m]==k)
            return m;
           else if(a[m]>k)
           
                e=m-1;
                else
                s=m+1;
                
                
            
        }
        return s;
    }
};
