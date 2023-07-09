//o(n) space and time


vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
vector<int> temp(n,0);
for(int i=1;i<n;i++){
    temp[i-1]=arr[i];
}
temp[n-1]=arr[0];
return temp;
}
// o(n) time and constant space

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp=arr[0];
for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
return arr;
}
