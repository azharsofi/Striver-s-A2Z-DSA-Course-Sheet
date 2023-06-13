
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int x=0;
	    for(int i=0;i<N;i++){
	       x=x^A[i];
	    }
	    
	    return x;
	}
};
