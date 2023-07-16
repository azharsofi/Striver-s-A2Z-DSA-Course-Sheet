class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
     unordered_map<int,int> mm;
       
      //this vector will contain the final elements form array
      vector<int> temp;
   
      //iterating over array to store frequency of each element
      for(int i=0;i<n;i++)
    {
          mm[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {   
          //if a element is present 2 or more than 2 time than take this once and set
          //its frequenct to one which mean we have to take this element one time more
          if(mm[arr[i]]>=2)
        {
              temp.push_back(arr[i]);
              mm[arr[i]]=1;
        }
          else if(mm[arr[i]]==1)
        {
          temp.push_back(arr[i]);
          mm[arr[i]]=0;
        }
    }
    
    return temp.size();
        
    }
};


//O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int e:nums){
            if(i==0||i==1||nums[i-2]!=e){
                nums[i++]=e;
            }
        }
        return i;
     
    }
};








