class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
      int maxi=0;
      int mini=a[0];
      
      for(int i=1;i<n;i++){
              maxi=max(a[i]-mini,maxi);
              mini=min(a[i],mini);
              
            
          }
      return maxi;      
        
        
    }
};
