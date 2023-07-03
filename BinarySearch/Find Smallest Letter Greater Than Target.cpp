//using binary search
class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        
       int n =l.size();
       int s=0;
       int e=n-1;
       char ans=l[0];
       while(s<=e){
           int m=s+(e-s)/2;
           if(l[m]==target)
           {
                s=m+1;
           }
           else if(l[m]>target){
               ans=l[m];
               e=m-1;
           }

           else{
               s=m+1;
           }

       }
        return ans;
        
        
    }
};

// in O(n) timeclass Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)
                return letters[i];
                    
        }
        return letters[0];
        
        
        
    }
};

