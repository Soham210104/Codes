// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

// Note: Return 1, if there is at least one triplet following the condition else return 0.

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int k=n-1,j=i+1;
            while(j<k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0)
                {
                    return 1;
                }    
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return 0;
    }
};