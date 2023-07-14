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













class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         
        // code here
        map<int,int> m;
        int c=0;
        for(int i=0;i<n;i++){
            if(m.find(k-arr[i])!=m.end()){
                c+=m[k-arr[i]];
                }
                m[arr[i]]++;
        }
        return c;
    }
};
