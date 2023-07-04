//O(n^2) time complexity
class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==x)
                return true;
            }
        }
        
    return false;
    }
};
// O(n+m)
class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        while(i>=0&&i<n&&j>=0&&j<m){
            if(matrix[i][j]==x)
            return true;
            else if(matrix[i][j]>x)
            j--;
            else
            i++;
        }
        
        
    return false;
    }
};
