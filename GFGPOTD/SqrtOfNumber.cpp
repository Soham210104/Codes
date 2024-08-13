class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long ans = 1;
        long long low = 1;
        long long high = n;
        
        while(low<=high){
            long long mid = (low+high)/2;
            
            if((mid * mid) <= n){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};