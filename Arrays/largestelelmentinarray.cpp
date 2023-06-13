//method 1 0(n) time complexity and 0(1) space complexity
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    
    { 
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            maxi=max(arr[i],maxi);
            
        }
        return maxi;
        
    }
};
//method 2 using sorting
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    
    { sort(arr.begin(),arr.end());
     return arr[arr.size()-1];
        
            
    
        
    }
};
