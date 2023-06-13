//method 1
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code 
        
        int i=0;
       for(int j=1;j<n;j++){
           if(a[i]!=a[j]){
               i++;
               a[i]=a[j];
           }}
         return i+1;
               
           
    }
};

//using set
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code 
    
      set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(a[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    a[j++] = x;
  }
  return k;  
           
    }
};
