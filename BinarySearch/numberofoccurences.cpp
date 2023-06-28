class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int solve1(int a[], int n, int x){
		    int s=0;
		    int e=n-1;
		    int res=-1;
		    while(s<=e){
		        int m=s+(e-s)/2;
		        if(a[m]==x){
		            res=m;
		            e=m-1;
		        }
		        else if(x>a[m])
		        s=m+1;
		        else e=m-1;
		    }
		    return res;
		}
	int solve2(int a[], int n, int x){
		    int s=0;
		    int e=n-1;
		   int  res=-1;
		    while(s<=e){
		        int m=s+(e-s)/2;
		        if(a[m]==x){
		            res=m;
		            s=m+1;
		        }
		        else if(x>a[m])
		        s=m+1;
		        else e=m-1;
		    }
		    return res;
		}






	int count(int arr[], int n, int x) {
	    // code here
	    int a=solve1(arr,n,x);
	    int b=solve2(arr,n,x);
	    
	    if(a==-1&&b==-1)
	    return 0;
	    int res=b-a+1;
	    return res;
	}
};
