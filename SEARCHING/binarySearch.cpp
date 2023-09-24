// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int low = 1, high = x,ans=0;
        while(low<=high)
        {
            long long int mid = (low+high)/2;
            long long midSq = mid * mid;
            if(midSq == x)
            {
                return mid;
            }
            else if(midSq > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};