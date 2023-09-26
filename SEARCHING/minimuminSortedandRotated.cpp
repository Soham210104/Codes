

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[low]<=arr[high])
            {
                return arr[low];
            }
            
            if(arr[mid] >= 0 && arr[mid] < arr[mid-1])
            {
                return arr[mid];
            }
            //it means left half is sorted
            if(arr[mid] > arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
        }
        return -1;
    }
};