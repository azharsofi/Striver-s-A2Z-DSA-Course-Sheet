//brute force
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1;
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size();i++){
            c=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                c++;
                if(c>nums.size()/2)
                return nums[i];

            }

        }
        return -1;
        }
        
};
// using sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ma=0;
        if(nums.size()==1)
         return nums[0];
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
            c++;
            ma=max(c,ma);
            if(ma+1>n)
            return nums[i];
            }
            

            else
            c=0;
 }
 
    return -1; 
        }
        
};
// moores voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
      int c=1;
      int res=0;
      for(int i=1;i<n;i++){
          if(nums[res]==nums[i])
          c++;
          else
          c--;
          if(c==0){
          res=i;
          c=1;}

      }
        return nums[res];
        }
        
};
