
//using hashmpap

Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    
    { 
        map<int,int> v;
        int check=size/2;
        for(int i=0;i<size;i++){
            v[a[i]]++;
        }
   for(auto it:v)
   {
       if(it.second>check)
        return it.first;
   }
       
       return -1; 
    }
};

//using sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
   sort(nums.begin(),nums.end());
    int maxi=0;
     int c=0;
        int n=nums.size()/2;
        if(nums.size()==1)
        return 1;

        for(int i=1;i<nums.size();i++){
             if(nums[i-1]==nums[i]){
            c++;
            maxi=max(c,maxi);}
            else
            c=0;
            if(maxi+1>n)
            return nums[i-1];
        }
             return -1;
             
        }
        
};
