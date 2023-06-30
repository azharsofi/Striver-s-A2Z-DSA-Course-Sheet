class Solution{
public:	
	int findKRotation(int arr[], int N) {
	    // code here
	   //value of k depends upon index of minimum element
	   //so we have to find index of mini um element
	        int start = 0,end = N-1;
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

};
