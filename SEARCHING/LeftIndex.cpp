// Given a sorted array of positive integers (elements may be repeated) and a number x.
//  The task is to find the leftmost index of x in the given array.

int leftIndex(int n, int arr[], int x)
{
    // Your code here
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == 0 || arr[mid] != arr[mid-1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
    
}