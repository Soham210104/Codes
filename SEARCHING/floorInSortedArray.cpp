// Given a sorted array arr[] of size N without duplicates, and given a value x. 
// Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x)
    {
        
        // Your code here
        long long m = x;
        long long temp = -1;
        for(long long i = 0;i<n;i++)
        {
           if(v[i]<=x)
           {
               m = min(v[i],x);
               temp = i;
           }
        }
        if(temp>=0)
        {
            return temp;
        }
        else
        {
            return -1;
        }
        
    }
};