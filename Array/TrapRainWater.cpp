// Given an array arr[] of N non-negative integers representing the height of blocks.
//  If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        long long res = 0;
        int lmax[n],rmax[n];
        lmax[0] = arr[0];
        for(int i=1;i<n;i++)
        {
            lmax[i] = max(arr[i],lmax[i-1]);
        }
        rmax[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rmax[i] = max(arr[i],rmax[i+1]);
        }
        for(int i=1;i<n-1;i++)
        {
            res = res+(min(lmax[i],rmax[i])-arr[i]);
        }
        
        return res;
    }
};