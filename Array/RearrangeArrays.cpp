// Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e 
// first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int max_i = n-1;
    	int min_i = 0;
    	int max = arr[n-1]+1;
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2 == 0)
    	    {
    	        arr[i] = (arr[max_i]%max)*max + arr[i];
    	        max_i--;
    	    }
    	    else
    	    {
    	        arr[i] = (arr[min_i]%max)*max + arr[i];
    	        min_i++;
    	    }
    	}
    	
    	for(int i=0;i<n;i++)
    	{
    	    arr[i] /= max;
    	}
    	
    	 
    }
};