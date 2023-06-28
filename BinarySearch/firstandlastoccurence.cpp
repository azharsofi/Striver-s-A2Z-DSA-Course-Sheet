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







    





vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> z;
    int fs=solve1(arr,n,x);
    int ls=solve2(arr,n,x);
    z.push_back(fs);
       z.push_back(ls);
    return z;}
