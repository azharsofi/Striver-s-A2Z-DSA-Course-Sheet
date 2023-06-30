class Solution
{
    public:
    int peakElement(int a[], int n)
    {
       // Your code here
       if(n==1)
       return 0;
       int s=0;
       int e=n-1;
       while(s<=e){
           int m=s+(e-s)/2;
           if(m>0&&m<n-1)
        {
            if(a[m]>=a[m-1]&&a[m]>=a[m+1])
                  return m;
                  else if(a[m-1]>a[m])
                  e=m-1;
                  else
                  s=m+1;
        } 
        else if(m==0){
            if(a[0]>=a[1])
            return 0;
            else
            return 1;
        }
        else if(m==n-1){
            if(a[n-1]>=a[n-2])
            return n-1;
            else
            return n-2;
        }
               
          
           
       }
       
    }
};
