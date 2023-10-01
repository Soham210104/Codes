// Given an array arr[] of N positive integers, where elements are consecutive (sorted). 
// Also, there is a single element which is repeating X (any variable) number of times. Now,
//  the task is to find the element which is repeated and number of times it is repeated.
// Note: If there's no repeating element, Return {-1,-1}.
class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n)
    {
        //code here
        long low=0,high=n-1;
        while(low<=high)
        {
            long mid = (low+high)/2;
            if(n==(arr[n-1]-arr[0]+1))
            {
                return pair<long,long>(-1,-1);
            }
            
            if(arr[mid]>=mid+1)//out indexing is correct
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        long freq = n - arr[n-1] + 1;//to check how many times it was count.
        return pair<long,long>(arr[low],freq);
    }
};