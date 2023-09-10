
// You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.

// Note: Positive number starts from 1
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++)
        {
            long long int element = arr[i];
            if(element>=1 && element<=n)
            {
                long long chair = element - 1;
                if(arr[chair] != element)
                {
                    swap(arr[chair],arr[i]);
                    i--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i+1 != arr[i])
            {
                return i+1;
            }
            
        }
        return n+1;
    } 
};