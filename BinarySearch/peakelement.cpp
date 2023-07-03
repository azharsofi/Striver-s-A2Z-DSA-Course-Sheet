//naive solution
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        if(nums[0]>=nums[1])
        return 0;
        if(nums[n-1]>=nums[n-2])
        return n-1;
        for(int i=1;i<n-1;i++){
            if(nums[i]>=nums[i+1]&&nums[i]>=nums[i-1])
            return i;
        }

        return -1;
    }
};

//using binary search

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
