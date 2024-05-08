
class Solution:
    
    #Function to check if a string is Pangram or not.
    def checkPangram(self,s):
        #code here
      string=s.lower()
      new=set()
      for i in string:
          if i>='a'and i<='z':
              new.add(i)
           
      return len(new) == 26      
