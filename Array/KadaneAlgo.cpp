// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number)
//  which has the maximum sum and return its sum.




class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long max(long long a,long long b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

    long long maxSubarraySum(int arr[], int n)
    {
        
        // Your code here
        long long res = arr[0];
        long long maxEnding = 0;
        for(int i=0;i<n;i++)
        {
            maxEnding = max(maxEnding+arr[i],arr[i]);
            res = max(res,maxEnding);
        }
        return res;
    }
};