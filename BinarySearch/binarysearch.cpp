class Solution {
  public:
    int binarysearch(int arr[], int n, int key) {
        // code here
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==key)
            return mid;
            if(arr[mid]<key)
            s=mid+1;
            else
            e=mid-1;
            
        }
        return -1;
        
    }
};
