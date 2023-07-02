//brute force approach
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int i=1;
        while(i*i<=x)
        i++;
        return (i-1);
    }
};
// using binary search
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int s=1;
        long long int e=x;
        long long int ans=-1;
        while(s<=e){
                long long int m=s+(e-s)/2;
                    long long int ms=m*m;
                    if(ms==x)
                    return m;
                    else if(ms>x)
                    e=m-1;
                    else{
                        ans=m;
                        s=m+1;
                    }
            
        }
        return ans;
            
    }
};
