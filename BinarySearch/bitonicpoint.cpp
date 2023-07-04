class Solution{
public:
	
	int findMaximum(int a[], int n) {
	    // code here
	    
	    if(n==1)
	    return a[0];
	    if(a[0]>a[1])
	    return a[0];
	    if(a[n-1]>a[n-2])
	    return a[n-1];
	    int s=1;
	    int e=n-2;
	    while(s<=e){
	        int m=s+(e-s)/2;
	        if(a[m]>a[m-1]&&a[m+1]<a[m])
	        return a[m];
	        else if(a[m-1]>a[m])
	        e=m-1;
	        else
	        s=m+1;
	    }
	    return -1;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

