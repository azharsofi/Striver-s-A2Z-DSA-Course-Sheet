// approach 1
	int print2largest(int a[], int n) {
	    // code here
	   int max=a[0];
	   int max2=-1;
	   for(int i=0;i<n;i++)
	   {
	       if(a[i]>max){
	           max=a[i];
	       }
	   }
	   for(int i=0;i<n;i++){
	       if(a[i]>max2&&a[i]!=max){
	           max2=a[i];
	       }
	   }
	   return max2;
	}
};
// approach 2
class Solution{
public:	
	// Function returns the second
	// largest elements
	

	int print2largest(int a[], int n) {
	    // code here
	  sort(a,a+n);
	  int largest=a[n-1];
	  for(int i=n-2;i>=0;i--){
	      if(a[i]!=largest)
	      {
	          return a[i];
	      }
	  }
	  return -1;
	}
};
