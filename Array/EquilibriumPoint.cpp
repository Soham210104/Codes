// Given an array A of n positive numbers. The task is to find the first equilibrium point in an array.
// Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

// Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long int rightsum =0;
        for( int i=0 ;i<n;i++)
        {
            rightsum+=a[i];
            
        }
        
        long long int leftsum =0;
        // int temp =sum;
        
        for(int i=0;i<n;i++)
        {
           rightsum-=a[i];
           
           if(leftsum==rightsum){
               return i+1;
           }
           leftsum+=a[i];
        }
        return -1;
    }


};