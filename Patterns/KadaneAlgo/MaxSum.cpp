class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long sum = 0,maxEle=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum > maxEle) maxEle = sum;
            if(sum < 0) sum = 0;
        }
        
        return maxEle;
    }
};