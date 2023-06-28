int floor(int v[], int n, int x){
        int s=0;
        int e=n-1;
        int res=-1;
        while(s<=e){
        int  m=s+(e-s)/2;
            if(v[m]==x)
            return v[m];
            else if(x<v[m])
            e=m-1;
            else{
                res=v[m];
                s=m+1;
                
            }
        }
        return res;}
        
        
        int ceil(int v[], int n, int x){
            int s=0;
            int e=n-1;
            int res=-1;
            while(s<=e){
                int m=s+(e-s)/2;
                if(v[m]==x)
                return v[m];
                else if(v[m]<x){
                    s=m+1;
                }
                else
                {
                    res=v[m];
                    e=m-1;
                }
                
            }
            return res;
            
        }
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    int floori=floor(arr,n,x);
    int ceili=ceil(arr,n,x);
    return make_pair(floori,ceili);
    
    
    
}
