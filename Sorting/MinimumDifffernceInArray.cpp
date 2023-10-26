class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //code here
        sort(arr,arr+n);
        int res = INT_MAX;
        for(int i=1;i<n;i++)
        {
            int diff = arr[i] - arr[i-1];
            res = min(res,diff);
        }
        return res;
    }
};