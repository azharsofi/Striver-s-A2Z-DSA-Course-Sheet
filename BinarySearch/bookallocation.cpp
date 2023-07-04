class Solution 
{
    
    private:
    bool isvalid(int a[],int n,int k,int max){
        int st=1;
        int s=0;
        for(int i=0;i<n;i++){
            s=s+a[i];
            if(s>max)
            {
                st++;
                s=a[i];
                
            }
            if(st>k)
            return false;
        }
        return true;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int k) 
    {
        //code here
        if(k>n)
        return -1;
        int res=-1;
        int s= *max_element(a, a + n);
        int e= accumulate(a, a+n, 0);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isvalid(a,n,k,mid)==true)
            {
                res=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return res;
    }
};

