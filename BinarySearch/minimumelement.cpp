class Solution{
public:
    int findMin(int arr[], int N){
        //complete the function here
         
        int start = 0,end = N-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            int prev = (mid - 1 + N)%N;
            int next = (mid + 1)%N;
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
                return arr[mid];
            else if(arr[mid]>=arr[0])
                start = mid+1;
            else 
                end = mid-1;
        }
        return arr[0];
    }
};
