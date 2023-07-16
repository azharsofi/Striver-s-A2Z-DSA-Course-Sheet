class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int c=1;
        int res=1;
        if(n==0)
        return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                c++;
            }
            else if (nums[i] != nums[i - 1])
            {
               res=max(res,c);
               c=1;
            }
        }
        return max(res,c);
        
    }
};
