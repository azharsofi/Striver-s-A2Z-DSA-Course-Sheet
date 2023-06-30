class Solution{
public:	
	int findKRotation(int a[], int n) {
	    // code here
	   //value of k depends upon index of minimum element
	   //so we have to find index of mini um element
	   int min=a[0];
	   int index=0;
	   for(int i=0;i<n;i++){
	       
	       if(a[i]<min){
	       min=a[i];
	       index=i;
	       
	   }
	    }
	    
	    return index;
  
	}

};
