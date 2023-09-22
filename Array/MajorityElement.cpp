// Given an array A of N elements. Find the majority element in the array.
//  A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        
        // your code here
        int count = 1,res = 0;
        for(int i = 1;i<n;i++)
        {
            if(arr[res] == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0)
            {
                res = i;
                count = 1;
            }
        }
        count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[res] == arr[i])
            {
                count++;
            }
        }
        
        if(count<=n/2)
        {
            return -1;
        }
        else
        {
        return arr[res];
        }
    }
};
