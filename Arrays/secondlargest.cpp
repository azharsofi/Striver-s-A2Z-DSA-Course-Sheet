
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
