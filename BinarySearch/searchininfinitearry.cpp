//Naive sol
//pseudo code
int i=0;
while(true)//infinitearray
{
if(a[i]==key)
  return i;
if(a[i]>key)return -1;
i++;}
// binary search 
if(a[0]==key)
  return 0;
int i=1;
while(a[i]<key)
  i=i*2;
  if(a[i]==key)
    return i;
else
    binarysearch(arr,x,i/2+1,i-1);
