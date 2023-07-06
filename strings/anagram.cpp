class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length()!=b.length())
        return false;
        sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          if(a==b)
          return true;
          else
          return false;
        
        
    }

};
// approach 2 O(n+CHAR)
   class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    
    bool isAnagram(string a, string b){
        
        // Your code here
        const int CHAR=256;
        if(a.length()!=b.length())
        return false;
      char st[CHAR]={0};
      for(int i=0;i<a.length();i++){
          st[a[i]]++;
          st[b[i]]--;
      }
        for(int i=0;i<CHAR;i++){
            if(st[i]!=0)
            return false;
        }
        return true;
        
    }

};
