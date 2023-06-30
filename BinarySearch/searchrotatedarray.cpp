class Solution{
    public:
    int min(int arr[], int start, int end, int N){
         while(start<=end){
            int mid = start + (end - start)/2;
            int prev = (mid - 1 + N)%N;
            int next = (mid + 1)%N;
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
                return mid;
            else if(arr[mid]>=arr[0])
                start = mid+1;
            else 
                end = mid-1;
        }
        return 0;
    }
    
    int bs1(int arr[], int start, int end, int target){
          while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target)
                return mid;
            else if(arr[mid]>=target)
                end = mid-1;
            else
                start = mid + 1;
        }
        return -1;
    }
     int bs2(int arr[], int start, int end, int target){
          while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target)
                return mid;
            else if(arr[mid]>=target)
                end = mid-1;
            else
                start = mid + 1;
        }
        return -1;
    }
    
    
    
    
    
    
    
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int n=h-l+1;
        int index=min(A,l,h,n);
        
        int a=bs1(A,l,index-1,key);
        int b=bs2(A,index,h,key);
    if(a>=0)
    return a;
    else
    return b;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
    
    
