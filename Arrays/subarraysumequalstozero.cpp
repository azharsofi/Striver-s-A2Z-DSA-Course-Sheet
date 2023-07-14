//O(n^2)
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         
        // code here
        int s=0;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               s=arr[i]+arr[j];
               if(s==k)
               c++;
            }
        }
        return c;
    }
}


//O(n)
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         
        // code here
        int s=0;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               s=arr[i]+arr[j];
               if(s==k)
               c++;
            }
        }
        return c;
    }
}
