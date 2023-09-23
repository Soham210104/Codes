// Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        int low=0,high=N-1;
        if(arr[0]==0)
        {
            return 0;
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==1)
            {
                if(arr[mid+1]==0 || mid==N-1)
                    return (mid+1);
                else
                    low=mid+1;
            }
            else
                high=mid-1;
        }
        return 0;
    }
};