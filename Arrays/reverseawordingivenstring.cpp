class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    
    { 
          stack<string> str;
          string st="";
          for(int i=0;i<s.length();i++){
              if(s[i]!='.'){
                  st+=s[i];
              }
              if(s[i]=='.'){
                  str.push(st);
                  st="";
              }
          }
          str.push(st);
          string res="";
          while(!str.empty()){
              string add=str.top();
              str.pop();
              res+=add+".";
          }
          res.pop_back();
          return res;
          
    }
};
