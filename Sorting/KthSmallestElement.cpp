

class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        sort(arr,arr+n);
        return arr[k-1];
    }
};