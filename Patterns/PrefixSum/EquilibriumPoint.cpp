class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        int n = arr.size();
        // if(n == 1) return 1;
        
        
        int rSum = 0;
        for(int i=0;i<n;i++){
            rSum += arr[i];
        }
        
        int lSum = 0;
        for(int i=n-1;i>=0;i--){
            lSum += arr[i];
            if(rSum == lSum){
                return i+1;
            }
            rSum -= arr[i];
        }
        
        return -1;
    }
};