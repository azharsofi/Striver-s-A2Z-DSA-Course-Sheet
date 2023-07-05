class Solution {
 
        bool ispossible(vector<int>& piles, int eatingSpeed, int hours) {
        int hoursSpent = 0;
        for(int i=0;i<piles.size();i++){
            hoursSpent += piles[i]/eatingSpeed;
            if(piles[i]%eatingSpeed!=0){
                hoursSpent += 1;
            }
            if(hoursSpent>hours) return false;
        }
        return true;
    }


public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n= a.size();
        int s=1;
        int ans=-1;
        int e=*max_element(a.begin(),a.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(a,mid,h)){
                ans=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return ans;
        
    }
};
