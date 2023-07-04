bool isvalid(vector<int> &a, int n,int k,int max)
{
     int   st=1;
        int   s=0;
        for(int i=0;i<n;i++){
            s=s+a[i];
            if(s>max)
            {
                st++;
                s=a[i];
                
            }
            if(st>k)
            return false;
        }
        return true;
    }






int findLargestMinDistance(vector<int> &a, int k)
{
    //    Write your code here.
    int n=a.size();
    if(k>n)
    return -1;
    int res=-1;
        int s= *max_element(a.begin(), a.end());
        int   e= accumulate(a.begin(), a.end(), 0);
        while(s<=e){
        int  mid=s+(e-s)/2;
            if(isvalid(a,n,k,mid)==true)
            {
                res=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return res;
    }
        
