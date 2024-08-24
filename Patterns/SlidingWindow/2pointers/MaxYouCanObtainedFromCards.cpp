class Solution {
  public:
    long long maxScore(vector<int> &cardPoints, int N, int k) {
        // code here
        long long lSum = 0;
        long long rSum = 0;
        int rIndex = N-1;
        long long maxSum = 0;
        for(int i=0;i<k;i++){
            lSum += cardPoints[i];
        }
            maxSum = lSum;
            
        for(int i=k-1;i>=0;i--){
            lSum -= cardPoints[i];
            rSum += cardPoints[rIndex];
            rIndex--;
            
            maxSum = max(maxSum,lSum + rSum);
        }
        
        return maxSum;
    }
};