class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ls=0;
            int rs=0;
            for(int j=0;j<i;j++)
            ls+=nums[j];
            for(int k=i+1;k<n;k++)
            rs+=nums[k];
            if(ls==rs)
            return i;

            
        }
        return -1;
        
    }
};


//O(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        s+=nums[i];
            int ls=0;
            int rs=s;
            for(int j=0;j<n;j++){
                rs=rs-nums[j];
                if(ls==rs)
                return j;
                ls+=nums[j];
            
            }

        return -1;
        
    }
};
