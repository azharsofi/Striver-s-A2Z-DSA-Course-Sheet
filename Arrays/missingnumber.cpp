
//optimal solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int xor1=0;
       int xor2=0;
       for(int i=0;i<=n;i++){
           xor1^=i; }
           for(int num:nums)
           xor2^=num;
           
           return xor1^xor2;
    }
    
};


//maths concept

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int es=n*n(n+1)/2;
      int s=0;
      for(int i=0;i<n;i++)
        s=s+nums[i];
      return (es-s);
    }
    
};
// using sorting
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i)// agar index aur element map nahi karraha to return maro.
            return i;
        }
        return nums.size();//agar pura array search mar kar nahi mila to array ka size answer hai
    
    }
    
};
